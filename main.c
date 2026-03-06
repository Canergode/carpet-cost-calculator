#include <stdio.h>
#include <stdlib.h>

/*
A carpet seller sells 3 different types of carpets for children.The types,codes and unit prices
per square meter of these carpets are provided below:

Carpet type          Code              Unit Prices Per Square Meter
Twetty                T                     18
Bugs                  B                     17
Spiderman             S                     19

*/

int main()
{
    char code;
    float area,cost=0;

    // Get carpet type from user (T,B or S)
    printf("Carpet type T B S:\n");
    scanf("%c",&code);

    // Get area in square meters
    printf("Enter the area:\n");
    scanf("%f",&area);

    // Calculate cost based on carpet type
    if(code=='T')
    {
        cost=18*area;
        printf("Carpet cost:%.2f",cost);
    }
    else if(code=='B')
    {
        cost=17*area;
        printf("Carpet cost:%.2f",cost);
    }
    else if(code=='S')
    {
        cost=19*area;
        printf("Carpet cost:%.2f",cost);
    }
    else
    {
        printf("Invalid carpet type entered:\n");
    }
    return 0;
}
