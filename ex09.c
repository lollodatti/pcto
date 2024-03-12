#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("scegi un numero\n");
    scanf("%d", &a);
    printf("scegline un altro\n");
    scanf("%d", &b);
    if(a % b == 0)
    {
        printf("il primo é mulpitplo del secondo\n");
    }
    else
    {
        printf("il primo non é multiplo del secondo\n");
    }


    
}