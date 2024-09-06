#include <stdio.h>
#include <math.h>

/*  Name: Dhruv Maniar
    R number: R11713343
    Subject: CS 1412
        Lab 2
*/

double orbital_speed(long double altitude){
    long double gravity = 0.00000000006673;
    //long double mass = 5980000000000000000000000; (warning: integer constant is too large for its type)
    long double GxM = 399045400000000;
    long double radius_earth = 6370000;
    long double radius = altitude+radius_earth;
    long double velocity = sqrt((GxM)/radius);
    return velocity; 
}

int main()
{
    long double altitude;
    printf("Enter the altitude of the Satellite in Km: ");
    scanf("%LF", &altitude);
    altitude = altitude*1000;
    printf("The orbital speed of the satellite is %g m/s", ceil(orbital_speed(altitude)));

    return 0;
}

 