//to parse the data and populate an array of structures with the sensor information using a function 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Structure to hold sensor information
struct SensorData {
    char sensorId[10];
    float temperature;
    int humidity;
    int lightIntensity;
};
typedef struct SensorData SensorData; //prototype
void displaySensorData(SensorData* ptr) {
    printf("Sensor ID: %s\n", ptr->sensorId);
    printf("Temperature: %.1f C\n", ptr->temperature);
    printf("Humidity: %d\n", ptr->humidity);
    printf("Light Intensity: %d%%\n", ptr->lightIntensity);
}
void initSensorData(SensorData* ptr, char* sensorId, float temperature, int humidity, int lightIntensity) {
    strcpy(ptr->sensorId, sensorId);
    ptr->temperature = temperature;
    ptr->humidity = humidity;
    ptr->lightIntensity = lightIntensity;
}

int main() {
    SensorData sensorArray[100];
    int numSensors = 0;
    // Populate sensor data
    initSensorData(&sensorArray[numSensors], "S1", 36.5, 100, 50);
    numSensors++;
    // Display sensor data
    printf("Sensor Info:\n");
    for (int i = 0; i < numSensors; i++) {
        displaySensorData(&sensorArray[i]);
        printf("\n");
    }
    return 0;
}
