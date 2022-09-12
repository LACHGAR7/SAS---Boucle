#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i ,s=0;
    printf("entree nmbre des lignes");
    scanf("%d" ,&x);

    for (i= 1; i <= x; i++){

        if (x%i == 0)

        s++;
    }

   if (s == 2)
   {

  printf("premier.");

   }else
  printf("no premier.");


}
