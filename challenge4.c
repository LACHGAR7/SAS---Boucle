#include <stdio.h>
#include <stdlib.h>

int main (){
	int i,nombre,somme=0,m=0;

	for (i=1;i<=5;i++){

	printf ("entrer un nombre : ");
	scanf("%d",&nombre);

	if(nombre%10==0 && nombre<100){
		somme=somme+nombre;

	}
	if(nombre>m )
	m=nombre;
	}
	printf("somme : %d\n",somme);
	printf("max : %d", m);
}
