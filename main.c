#include<stdio.h>
#include<stdlib.h> 
#include "function.h"
static  struct car *carArray;
int main() {
    int arraySize;
    printf("Enter number of cars:\n");
    scanf("%d",&arraySize);

    
    struct car *carArray = (struct car*)malloc(arraySize * sizeof(struct car));
    if (carArray == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
}
    
    populateCars(carArray, arraySize);
	printCars(carArray , arraySize);
    
    free(carArray);
    return 0;
}
