#include "function.h"
#include<stdio.h>

void populateCars(struct car *carArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter Details for Car %d:\n", i + 1);
        printf("Car Name:\n");
        scanf("%s", carArray[i].name);
        printf("Model:\n");
        scanf("%s", carArray[i].model);
        printf("Rating (out of 10):\n");
        scanf("%d", &carArray[i].rating);
        printf("Price range:");
        scanf("%s", carArray[i].priceRange);
    }
}

void printCars(struct car *carArray, int arraySize) {
    printf("\nCar Details\n");

    for (int i = 0; i < arraySize; i++) {
        printf("Car %d:\n", i + 1);
        printf("Name: %s\n", carArray[i].name);
        printf("Model: %s\n", carArray[i].model);
        printf("Rating: %d/10\n", carArray[i].rating);
        printf("Price Range: %s\n", carArray[i].priceRange);
   }
}

