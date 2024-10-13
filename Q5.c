#include<stdio.h>

void InvImp(char *, int, int);
void InvPar(char *, int, int);

void InvImp(char *vet, int n, int i){
	int temp=0;
	
	if(n==i+1)                          //i e n chegaram ao meio da palavra
		printf("Os elementos desse vetor na ordem inversa eh");		
	else{                               // i e n invertem os valores da string
		temp=vet[i];                    //i percorre da esquerda a direita
		vet[i]=vet[n-1];                //n percorre da direita pra esquerda
		vet[n-1]=temp;                  //temp guarda temporariamente uma das letras
		InvImp(vet, n-1, i+1);
	}
}

void InvPar(char *vet, int n, int i){
	int temp=0;

	if(n==i)                            //i e n inverteram todos elementos
		printf("Os elementos desse vetor na ordem inversa eh");
	else{
		temp=vet[n-1];                  //i, n e temp tem a mesma funcao que antes
		vet[n-1]=vet[i];                //a string eh percorrida de forma igual
		vet[i]=temp;
    	InvPar(vet, n-1, i+1);			
	}

}

main(){
	int i=0, n; 
	char vet[]={"san diego"};
	
		n=sizeof(vet)/sizeof(vet[0]);	//tamanho da string
		
		if(n%2)                         //tamanho impar
			InvImp(vet, n, i);
		else                            //tamanho par
			InvPar(vet, n, i);
			
		for(; i<n; i++)
			printf(" %c", vet[i]);
	return 0;
}