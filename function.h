#ifndef FUNCTION_H
#define FUNCTION_H

struct car {
    char name[20];
    char model[20];
    int rating;
    char priceRange[20];
};

void populateCars(struct car *carArray, int arraySize);
void printCars(struct car *carArray, int arraySize);

#endif

