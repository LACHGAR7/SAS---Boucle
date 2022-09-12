#include <stdio.h>
#include <stdlib.h>

int main()
//table de multiplication
{
    int x , i , r;
   printf("entree a nombre : ");
   scanf("%d", &x);

   for ( i = 1; i <= 10; i++){

    r = x * i;
    printf("%d x %d = %d\n", x, i, r);
   }

}




