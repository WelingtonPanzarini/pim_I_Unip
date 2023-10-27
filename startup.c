#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao = 0;

void TelaLogin(){

    char login[15] = "admin";
    char login1[15];
    char senha[15] = "admin";
    char senha1[15];

    printf("digite seu Login");
    scanf("%s", login1);

    printf("digite sua Senha");
    scanf("%s", senha1);

    if(strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
        printf("\nLogado\n");
    }else{
        printf("\nDados inválidos\n");
    }


}