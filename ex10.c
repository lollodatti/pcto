#include <stdio.h>

int main()
{
    int a;
    printf("scegli una temperatura in Celsius\n");
    scanf("%d", &a);
    if(a == -273.15)
    {
        printf("zio, é uno zero assoluto\n");
    }
    else
    {
        printf(" va bene in kelvin sará %lf\n", a + 273.15);
        float b; 
        b == a * 1.8;
        printf(" invece in Fahrenheit sará %f\n", b + 32);

    }

}

 

    
