// for question see questStructure.txt file.

// Unions are very similar to Structure Although The Are Structure But The Only Difference They Have Is That,
// In Unions the size of the allocated memory to store data is equal to the maximum size attribute of the Union.
// And Most Importantly we can only initialise one attribute on any variable,
// If there are more than one attribute in a Union and if initialise one after the other it will overwrite
// the privious one. There is one box created in the memory of size = the max attribute size unlike Structure
// where every attribute has its own box with there own size arrange in continious order and the Strucutre size
// is equal to the total sum of its attribute sizes.

#include <stdio.h>
#include <string.h>

typedef struct smartphoneS{
    int price;
    char brandName[20];
    char smartphoneName[30];
} structureOfSmartphones;

typedef union smartphoneU{
    int price;
    char brandName[20];
    char smartphoneName[30];
} unionOfSmartphones;

void displayS(structureOfSmartphones *show){
    printf("\n");
    printf("Smartphone Data In Structure\n");
    printf("Price : %d\n", show->price);
    printf("Brand Name : %s\n", show->brandName);
    printf("Smartphone Name : %s\n", show->smartphoneName);
}

void displayU(unionOfSmartphones *show){
    printf("\n");
    printf("Smartphone Data In Union\n");
    printf("Price : %d\n", show->price);
    printf("Brand Name : %s\n", show->brandName);
    printf("Smartphone Name : %s\n", show->smartphoneName);
}

int main(){
    // Inserting values in structure.
    structureOfSmartphones phoneS1 = {14999, "Motorola", "Moto G54"};

    // Inserting values in union.
    // unionOfSmartphones phoneU1 = {21999, "Motorola", "Moto Edge 40 Neo"}; // This give error because there is one box to store data in the memory.
    unionOfSmartphones phoneU1;
    phoneU1.price = 24999;
    strcpy(phoneU1.brandName, "Motorola");
    strcpy(phoneU1.smartphoneName, "Moto Edge 40 Neo");
    // Now since the smartphoneName[30] has the max size, the size of the union is also 30 and since I added
    // smartphoneName in the last it overwrite the privious data, therefore at last in the union only name
    // is stored and while printing you can see the same results. This is Union.
    

    // Printing
    displayS(&phoneS1);
    displayU(&phoneU1);

    return 0;
}