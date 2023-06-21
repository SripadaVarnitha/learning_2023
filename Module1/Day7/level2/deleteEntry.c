//to delete the entry by using entryNo feild in given data
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

void deleteEntry(int entryNo) {
    FILE *inputFile = fopen("data.csv", "r");
    if (inputFile == NULL) {
        printf("Unable to open the file: data.csv\n");
        return;
    }

    FILE *tempFile = fopen("temp.csv", "w");
    if (tempFile == NULL) {
        printf("Unable to create the temporary file.\n");
        fclose(inputFile);
        return;
    }

    char line[100];
    fgets(line, sizeof(line), inputFile); // Copy the header line to the temporary file
    fputs(line, tempFile);

    while (fgets(line, sizeof(line), inputFile)) {
        LogEntry entry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]", &entry.entryNo, entry.sensorNo, &entry.temperature,
               &entry.humidity, &entry.light, entry.timestamp);
        if (entry.entryNo != entryNo) {
            fputs(line, tempFile);
        }
    }
    fclose(inputFile);
    fclose(tempFile);
    remove("data.csv");
    rename("temp.csv", "data.csv");
    printf("Entry with EntryNo %d has been deleted.\n", entryNo);
}

int main() {
    int entryNoToDelete = 2;
    deleteEntry(entryNoToDelete);
    return 0;
}





