#include <stdio.h>
#include <stdlib.h>

/**
*   Israel da Rocha
*   Insertion Sort
*
*
*/



typedef int TItem;

typedef struct{         ///estrutura a ser ordenada pela chave item
    TItem item;
}Celula;

int main()
{
    int tam = 0, i=0, j=0;      ///tamanho do vetor e indices
    Celula aux;                 //auxiliar de troca

///    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    Celula vet[tam];


///    printf("\nDigite o valor para cada item: ");
    for(i = 0; i< tam; i++){
        scanf("%d", &vet[i].item);
    }

    for(j = 0; j < tam; j++){
        for(i = j+1; i< tam; i++){

            if(vet[i].item < vet[j].item){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }

        }
    }

    printar(vet, tam);

}



void printar(Celula vet[], int tam){

    int i;
 ///   printf("Itens: ");
    for(i=0; i< tam; i++){
        printf("%d ", vet[i].item);
    }
}
