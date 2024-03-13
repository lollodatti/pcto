#include <stdio.h>

int main()
{
 char parola[25];
 int b = 0;
 scanf("%[^\n]s", parola);
 while(parola[b] != '\0')
 {
    if((parola[b] > 96) && (parola[b] < 123))
    {
        parola[b] = parola[b] - 32;
    }
    else if((parola[b] > 64) && (parola[b] < 91))
    {
       parola[b] = parola[b] + 32;
    }
     b = b + 1;
 }
  printf("%s\n", parola);
}