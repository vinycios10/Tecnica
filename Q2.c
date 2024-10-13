#include <stdio.h>

int main()
{
    int d = 13;                                             //numero a verificar se pertence  
    int aux1 = 2, aux2 = 3;                                 //var que guardam os 2 numeros anteriores
    if(d==0 || d==1 || d==2 || d==3){
       printf("%d pertence a sequencia de fibonacci",d);
       return 1;
    }
    while(aux2 < d){                                        //calcula a serie de fibonacci
        int temp = aux2;                                    //guarda o valor do numero anterior
            aux2 += aux1;                                   //atualiza o valor atual com a soma dos dois anteriores
            aux1 = temp;                                    //atualiza o novo valor anterior
    }
    if(aux2 == d)                                           //informa se pertence ou nao
        printf("%d pertence a sequencia de fibonacci",d);
    else
        printf("%d nao pertence a sequencia de fibonacci",d);
    return 0;
}