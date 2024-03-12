#include <stdio.h>

int main()
{
    int a;
    printf("scegli un anno");
    scanf("%d", &a);
    if(a % 400 == 0)
   {
    printf("é un anno bisestile");
   } 
    else 
    {
        printf("non é un anno bisestile");
    }
    
}