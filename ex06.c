#include <stdio.h>

int main()

{
    int a; 
    int b;
    printf("prendi due nuemri\n");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
     printf("%d é maggiore di %d\n", a, b);
    }
    else
    {
    printf("a > b");
    }
}