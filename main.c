#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Scambia(int * ,int *);
void bubblesort(int[],int);
void Estrazione(int);
int vettore[100000000000];

int main(int argc, char *argv[]) {
	int n,i;
	printf("indicare quanti numeri devono essere estratti\n");
	scanf("%d",&n);//inserisco n
	Estrazione(n);//richiama estrazione per estrare i numeri casuali per poi metterli nell'arrey
	bubblesort(vettore,n);//richiama bubblesort
	for(i=0;i<n;i++){
		printf("%d \n", vettore[i]); //stampa numeri ordinati
	}
	return 0;
}
void Estrazione(n){
	int k;
	srand((unsigned) time(NULL));
	for( k=0;k<n;k++){
		vettore[k] = rand()%90+1;//random input nel vettore
	}
	return;
};
void bubblesort(int a[] , int n){//bubblesort
	int i,j;
	for(i=1;i<n-1;i++)
		for(j=0;j<n-i;j++){
			if(a[j] >a[j+1])
			Scambia(&a[j], &a[j+1]);//richiamo la funzione scambia
		}
	return;
};
void Scambia(int *a,int *b){
	int opp;
	opp=*a;
	*a = *b;
	*b = opp;
	
	return;
};
