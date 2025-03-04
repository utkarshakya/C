// for question see questStructure.txt file.

#include <stdio.h>
#include <string.h>

typedef struct movieFranchise{
    int releasedMovies;
    int upcomingMovies;
    char bestGrossingMovie[50];
    char lastReleasedMovie[50];
} movieFranchise;

void change(movieFranchise *pChange);
void display(movieFranchise *pDisplay);

int main(){
    movieFranchise MCU = {43, 14, "Avengers: Endgame", "Guardians Of The Galaxy 3"}; // We can also intialise in this but must follow the order.
    movieFranchise DC = {20, 6, "Man Of Steal", "Blue Beetle"};

    movieFranchise *pMCU = &MCU; // This is how we simple decleare a pointer (same as what we do with pridifined dataTypes like int and char).
    movieFranchise *pDC = &DC;

    // Simple printing the values.
    display(pMCU);

    // Now if I call a funtion change the value will change.
    change(pMCU);

    // Now printing values after calling change function.
    display(pMCU);

    return 0;
}

void change(movieFranchise *pChange){
    // These are the two ways to accessing  and modifing an element through pointer.
    pChange->releasedMovies = 40;   // This is new way.
    (*pChange).upcomingMovies = 15; // This one is old way.
}

void display(movieFranchise *pDisplay){
    printf("\n");
    printf("%d\n", pDisplay->releasedMovies);
    printf("%d\n", pDisplay->upcomingMovies);
    printf("%s\n", pDisplay->bestGrossingMovie);
    printf("%s\n", pDisplay->lastReleasedMovie);
}

// So using pointer we can easily change the values of any structure attributes.