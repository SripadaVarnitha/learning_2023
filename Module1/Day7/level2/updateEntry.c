//to update the entry number in the given data
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void readLogFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open the file: %s\n", filename);
        return;
    }

    char line[MAX_LINE_LENGTH];
    fgets(line, sizeof(line), file);  // Skip the header line

    while (fgets(line, sizeof(line), file)) {
        LogEntry entry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]", &entry.entryNo, entry.sensorNo, &entry.temperature,
               &entry.humidity, &entry.light, entry.timestamp);
        logEntries[numEntries++] = entry;
    }

    fclose(file);
}

void updateLogFile(const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Unable to open the file: %s\n", filename);
        return;
    }

    fprintf(file, "EntryNo,sensorNo,Temperature,Humidity,Light,Timestamp\n");

    for (int i = 0; i < numEntries; i++) {
        LogEntry entry = logEntries[i];
        fprintf(file, "%d,%s,%.1f,%d,%d,%s\n", entry.entryNo, entry.sensorNo, entry.temperature,
                entry.humidity, entry.light, entry.timestamp);
    }

    fclose(file);
}

void updateLogEntry(int entryNo, const LogEntry* updatedEntry) {
    for (int i = 0; i < numEntries; i++) {
        if (logEntries[i].entryNo == entryNo) {
            logEntries[i] = *updatedEntry;
            break;
        }
    }
}

int main() {
    readLogFile("data.csv");
    // Update entry with EntryNo = 2
    LogEntry updatedEntry;
    updatedEntry.entryNo = 2;
    strcpy(updatedEntry.sensorNo, "S4");
    updatedEntry.temperature = 25.0;
    updatedEntry.humidity = 90;
    updatedEntry.light = 60;
    strcpy(updatedEntry.timestamp, "10:32:10");
    updateLogEntry(2, &updatedEntry);
    updateLogFile("data.csv");
    printf("Entry updated successfully.\n");
    return 0;
}

