#include <stdio.h>
#include <stdlib.h>


int main() {
    
    char nome [100];
    char curso[50];
    int idade = 0;

    printf("Digite seu nome:\n");
    fgets(nome, 50, stdin); 
    
    printf("Digite o nome do seu curso:\n");
    fgets(curso, 50, stdin); 

    printf("Digite sua idade:\n");
    scanf("%d", &idade);


    
    printf("[[[ SOBRE USUARIO ]]]");
    printf("\nNOME: %s", nome);
    printf("CURSO: %s", curso);
    printf("IDADE %d\n", idade);

    char email [100];
    char github[50];


    printf("Digite seu email:\n");
    fgets(email, 50, stdin); 

    printf("Digite o user do seu github:\n");
    fgets(github, 50, stdin); 

    
    printf("[[[ CONTATO USUARIO ]]]");
    printf("\nEMAIL: %s", email);
    printf("GITHUB: %s", github);

    return 0;
}

