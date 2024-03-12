#include <stdio.h>

int main()
{
    int a;
    int b = 1969;
    int c = a - b;
    printf("data di nascita\n");
    scanf("%d", &a);
    if(a > b)
    {
        printf("sei nato dopo l'allunaggio\n");
    }
    else
    {
        printf("sei nato prima dell'allunaggio\n");
    }
    if( c > 0)
    {
        printf("sei nato %d anni dopo l'allunaggio\n", a - b);
    }
    else
    {
     printf("sei nato prima dell'allunaggio\n");
    }

}