#include <stdio.h>

int main()
{
int a;
int b;
int c;
 printf("inserisci un numero\n");
 scanf("%d %d %d", &a, &b, &c);
printf("%d %d %d\n", a + b + c, a - b - c, a * b * c);
}