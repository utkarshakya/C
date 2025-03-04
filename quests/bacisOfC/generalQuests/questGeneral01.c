// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    const float PI = 3.14;
    float radius, volume;
    printf("Enter the value of Radius of Sphere : ");
    scanf("%f", &radius);    
    volume = (4.0/3.0)*PI*radius*radius*radius;
    printf("The Volume of Sphere with Radius %f is %f", radius, volume);
    return 0;
}