#include <stdio.h>

int main()
{
   int a[5] = {12, 3, 87, 1, 65};
   int numero_stampe = 0;
   int narray = 0;
  while(numero_stampe <= 465)
  {
    while(narray <= 4)
    { 
      if(a[narray] == numero_stampe)
      {
       printf("%d\n...", numero_stampe);
       narray++;
      }
      else
      {
       narray++;
      }
    }  
     narray = 0;
     numero_stampe++;
  }   
}
