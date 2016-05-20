#include <stdio.h>
#include <math.h>


int main()
{
    float a,b,c; 
    printf("Input a,b,c for ax^2+bx+c=0\n");
    printf("a = ");
    scanf ("%f", &a);
    printf("b = ");
    scanf ("%f", &b);
    printf("c = ");
    scanf ("%f", &c);
    desc (a,b,c);
    return 0;

}
