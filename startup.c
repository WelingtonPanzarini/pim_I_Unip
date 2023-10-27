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

        printf("Seja bem vindo a StartUP\n");
        printf("1 - Cadastro de Clientes\n");
        printf("2 - Relatorios\n");
        printf("3 - Sair\n\n");
        scanf("%d", &opcao);
        getchar();
    }

    struct Cliente
    {
        /* data */
        char nome[50];
        char endereco[100];
        char telefone[16];
    };
    

    void CadastroCliente()
    {   
        struct Cliente cliente;
        {
            /* data */
            printf("Escreva o nome do Cliente: ");
            scanf("%s", cliente.nome);

            printf("Escreva o endereço do Cliente: ");
            scanf("%s", cliente.endereco);

            printf("Escreva o telefone do cliente: ");
            scanf("%s", cliente.telefone);

            /*FILE *arquivo = fopen("clientes.txt", "a");
              fprintf(arquivo,"%s;%s;%s\n", cliente.nome, cliente.endereco, cliente.telefone );
              fclose(arquivo);*/

            FILE *arquivo = fopen("clientes.txt", "r");
            char nome[50], endereco[100], telefone[16];

            while (fscanf(arquivo, "%[^;];%[^;];%s\n", nome, endereco, telefone) == 3)
            {
                /* code */
                printf("Nome: %s\n", nome);
                printf("Endereco: %s\n", endereco);
                printf("Telefone: %s\n", telefone);
            }
            fclose(arquivo);
            
        }
        

    }
    int main(){

        setlocale(LC_ALL,"Portuguese");
        TelaLogin();
        MostrarMenu();
        CadastroCliente();

        return 0;
    }
    


