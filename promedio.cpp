#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float promedio;
	int paquetes,sumapac=0,i=1,numero,resultado;
	printf("\n Empresa de paquetes");
	printf("\n numero de dias lunes a domingo 1 a 7 \t");
	scanf("%d",&numero);
	do{
		printf("\n paquetes entregados el dia: %d ",i);
		scanf("%d",&paquetes);
		while(paquetes<0 || paquetes>100)
		{
			printf("\n paquetes entregados el dia: %d",i);
			scanf("%d",&paquetes);
			
		}
		sumapac+=paquetes;
		i++;
		
		
	}
	while(i<=numero);
	printf("total de paquetes %d \n",sumapac);
	promedio=(float)sumapac/numero;
	printf("\n el promedio es %0.2f paquetes entregados\n",promedio);
	system("PAUSE");
	return 0;
}
