#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


void crear(float sueldo[5]);
void imprimir (float sueldo[5]);
void total (float sueldo[5]);
void ordenar(float sueldo[5]);


int main() {
	float sueldo[5];
	crear(sueldo);
	ordenar(sueldo);
	imprimir(sueldo);
	total(sueldo);
	getch();
	
}
void crear (float sueldo[5]){
	int x;
	for (x = 0; x < 5; x++)
	{
		printf("Ingrese sueldo %d", x);
		scanf("%f",&sueldo[x]);
	}
}
void ordenar (float sueldo[5])
{
	int k, f;
	for(k = 0; k < 4; k++){
		for(f = 0; f <4 -k; f++)
		{
			if(sueldo[f] > sueldo[f+1])
			   {
				int aux;
				aux = sueldo[f];
				sueldo[f] = sueldo [f+1];
				sueldo[f+1]=aux;
			}
		}
	}
}
void imprimir (float sueldo[5])
{
	int x;
	for(x = 0; x < 5; x++){
		printf("Lista de sueldo %.1f\n",sueldo[x]);
		
	}
}
void total (float sueldo[5])
{
	float tot = 0;
	int x;
	for (x = 0; x < 5; x++)
	{
		tot = tot+sueldo[x];
	}
	printf("el valor total de sueldo es %.2f",tot);
}
