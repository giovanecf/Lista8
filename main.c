#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_NOMES 10

char* namesP[QTD_NOMES];
size_t tamanhoString = 10;

void main(){

    int tamanhoAtualSizeof = 0;
    int tamanhoAtualStrlen = 0;
    int i = 0;
    int tamanhoMaior = 0, tamanhoMenor = 99999999;
    
    for(i = 0; i < QTD_NOMES; i++){
        namesP[i] = calloc(tamanhoString, sizeof(char));

        if(namesP[i] == NULL){
            printf("Array não alocado.");
            return;
        }

        printf("\nDigite um nome: ");
        gets(namesP[i]);
        
        tamanhoAtualStrlen = strlen(namesP[i]);

        if(tamanhoAtualStrlen < tamanhoMenor){
            tamanhoMenor = tamanhoAtualStrlen;
            
        } else if(tamanhoAtualStrlen > tamanhoMaior){
            tamanhoMaior = tamanhoAtualStrlen;
        }
    }

    printf("\nE nossos candidatos são: \n");
    for(i = 0; i < QTD_NOMES; i++){
        printf("* ");
        puts(namesP[i]);
    }

    printf("\nMAIOR NOME\n");
    for(i = 0; i < QTD_NOMES; i++){
        
        if(strlen(namesP[i]) == tamanhoMaior){
            printf("- ");
            puts(namesP[i]);
        }
    }

    printf("\nMENOR NOME\n");
    for(i = 0; i < QTD_NOMES; i++){
        
        if(strlen(namesP[i]) == tamanhoMenor){
            printf("- ");
            puts(namesP[i]);
        }
    }
    

    printf("\n\n");

    for(i = 0; i < QTD_NOMES; i++){
        free(namesP[i]);
    }
}