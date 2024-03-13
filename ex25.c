#include <stdio.h>

void saluto()
{
 printf("ciao lollo ti piace la topa?\n");

}
int somma(int a, int b)
{
    return a + b;
}
int main()
{
 int num1;
 int num2;
 int risultato;
 saluto();
 printf("inserisci due numeri e ti restituiró la somma\n");
 scanf("%d %d", &num1, &num2);
 risultato = somma(num1, num2);
 printf("%d\n", risultato);
}