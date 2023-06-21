//to sort the temperature values in descending order in the given data
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

int compareEntries(const void* a, const void* b) {
    const LogEntry* entry1 = (const LogEntry*)a;
    const LogEntry* entry2 = (const LogEntry*)b;
    
    // Compare the temperature values in descending order
    if (entry1->temperature > entry2->temperature) {
        return -1;
    } else if (entry1->temperature < entry2->temperature) {
        return 1;
    }
    
    return 0;
}

void sortLogEntries() {
    qsort(logEntries, numEntries, sizeof(LogEntry), compareEntries);
}

void displayLogEntries() {
    printf("Sorted Log Entries:\n");
    printf("-----------------------------------------------------------------\n");
    printf("EntryNo | SensorNo | Temperature | Humidity | Light | Timestamp\n");
    printf("-----------------------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        LogEntry entry = logEntries[i];
        printf("%-7d | %-8s | %-11.2f | %-8d | %-5d | %-s\n", entry.entryNo, entry.sensorNo,
               entry.temperature, entry.humidity, entry.light, entry.timestamp);
    }

    printf("-----------------------------------------------------------------\n");
}
int main() {
    readLogFile("data.csv");
    sortLogEntries();
    displayLogEntries();

    return 0;
}
