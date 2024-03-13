#include <stdio.h>

void saluto()
{
 printf("ciao lollo ti piace la topa? sí\n");

}
int somma(int a, int b)
{
    return a + b;
}
int differenza(int a, int b)
{
    return a - b;
}
int prodotto(int a, int b)
{
    return a * b;
}
int quoziente(int a, int b)
{
    return a / b;
}
int main()
{
 int num1;
 int num2;
 int risultato;
 int risultato1;
 int risultato2;
 int risultato3;
 saluto();
 printf("inserisci due numeri e ti restituiró la somma la differenza il prodotto e il quoziente\n");
 scanf("%d %d", &num1, &num2);
 risultato = somma(num1, num2);
 risultato1 = differenza(num1, num2);
 risultato2 = prodotto(num1, num2);
 risultato3 = quoziente(num1, num2);
 printf("%d %d %d %d\n", risultato, risultato1, risultato2, risultato3);
}