#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("scegli tre numeri per vedere se accadrá una progressione aritmetica\n");
    scanf ("%d %d %d", &a, &b, &c);
    if(a - b == b - c)
    {
        printf("avrai una progressione aritmetica\n");
    }
    else
    {
        printf("non avrai una progressione aritmetica\n");
    }
    
}