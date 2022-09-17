#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10000

void preenche (int v[]){
    for (int i=0 ; i < MAX ; i++)
        v[i]=rand()%101;
}

void imprime  (int v[]){
    for (int i=0 ; i < MAX ; i++)
        printf (" %d ",v[i]);
}


int existe (int v[], int item, int *posicao){
	for (int i=0 ; i < MAX ; i++)
		if (v[i]==item){
		    *posicao = i;
		    return 1;
		}
			
	return 0;
}





int main()
{
    srand(time(NULL));
int v[MAX], p;

preenche ( v);
imprime (v);
if (existe (v,88, &p))
    printf ("\nAchou na posicao %d", p);
    else printf ("\nNao achou");

}
