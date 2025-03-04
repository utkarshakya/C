// for question see questStructure.txt file.

#include <stdio.h>
#include <string.h>
// Structures Are User Defined Data Types.
// Structures Are Used To Store Values Of Different Data Types In A One Place.

struct pokemon // Defining A Data Structure
{
    char name[15]; // These Are The Attributes Of This Data Structure.
    char tier; //
    int hp; //
    int attack; //
    int defence; //
} deoxys, mewtwo, rampardos; // These Are The Variable Declaration Of Pokemon Data Type.
// They Can Also Be Declared As Given Below.
// Struct Pokemon Pikachu; (Above We Declare Many Variables At Once).

int main(){
    // Now We Can Initialise Value To Different Data Types Either By User OR By Ourselves.

    // deoxys.name[15] = "Deoxys"; --> This Will Give Some Errors Since We Declared An Character Array Without Initialisation. So, We Have To Give The Values One By One (Index By Index) OR We Either Use The Methods Give Below (Which Is The Best Way).
    strcpy(deoxys.name, "Deoxys"); // This Will Simply Copy (Initialise) The String To The Name.
    deoxys.tier = 'S';
    deoxys.hp = 50;
    deoxys.attack = 345;
    deoxys.defence = 155;

    strcpy(mewtwo.name, "Mewtwo");
    mewtwo.tier = 'S';
    mewtwo.hp = 106;
    mewtwo.attack = 300;
    mewtwo.defence = 182;

    strcpy(rampardos.name, "Rampardos");
    rampardos.tier = 'A';
    rampardos.hp = 97;
    rampardos.attack = 295;
    rampardos.defence = 109;

    // Printing Detailes.
    printf("Name of the 2nd Pokemon : ");
    printf("%s\n", mewtwo.name);
    printf("Tier of the 2nd Pokemon : ");
    printf("%c\n", mewtwo.tier);
    printf("HP of the 2nd Pokemon : ");
    printf("%d\n", mewtwo.hp);
    printf("Attack of the 2nd Pokemon : ");
    printf("%d\n", mewtwo.attack);
    printf("Defence of the 2nd Pokemon : ");
    printf("%d\n", mewtwo.defence);

    return 0;
}
