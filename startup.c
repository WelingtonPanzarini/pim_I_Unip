#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao = 0;

void TelaLogin(){

        char login[15] = "admin";
        char login1[15];
        char senha[15] = "admin";
        char senha1[15];

        printf("digite seu Login\n ");
        scanf("%s", login1);

        printf("digite sua Senha\n ");
        scanf("%s", senha1);

        if(strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\nLogado\n");
        }else{
            printf("\nDados inválidos\n");
        }
    }

    void MostrarMenu(){

        printf("Seja bem vindo a StartUP");
        printf("1 - Cadastro de Clientes\n");
        printf("2 - Relatorios\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);
        getchar();
    }
    int main(){
        TelaLogin();
    }
    


