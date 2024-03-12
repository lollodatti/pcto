#include <stdio.h>

int main()
{
 printf("dammi un numero intero\n");
 int a;
 scanf("%d", &a);
 int n = a - 1;
 int b = 0;
 while(n > 1)
{
    if (a % n ==  0)
    {
    b = b + 1;
    }
    n--;
}
if(b != 0)
{
    printf("non hai un numero primo\n");
}
else
{
    printf("avrai un numero primo\n");
}
}