#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("scegli tre numeri\n");
    scanf("%d %d %d", &a, &b, &c);
    if((a + b > c) || (b + c > a) || (c + a > b) )
    {
        printf("avrai un triangolo\n");
    }
    else 
    {
        printf("non avrai un triangolo\n");
    }
}