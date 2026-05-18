#include <stdio.h>
#include <stdlib.h>


int main() {
    
    char email [100];
    char github[50];


    printf("Digite seu email:\n");
    fgets(email, 50, stdin); 

    printf("Digite o user do seu github:\n");
    fgets(github, 50, stdin); 

    
    printf("[[[ CONTATO USUARIO ]]]");
    printf("\nNOME: %s", email);
    printf("CURSO: %s", github);

    

    return 0;
}
