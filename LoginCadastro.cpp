#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao = 0;

void TelaLogin(){

    char login[20] = "admin";
    char login1[20];
    char senha[8] = "admin";
    char senha1[8];        

    printf("Digite o Login: ");
    scanf("%s", login1);

    printf("Digite a Senha: ");
    scanf("%s", senha1);

    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0)

        printf("\n\nLogin efetuado com sucesso!\n\n");

    else

        printf("\n\nDados inválidos!\n\n");    

}

void MostrarMenu(){

    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO******\n\n");
    printf("*************************************\n\n");

    printf("1) - CADASTRO DE CLIENTES\n");
    printf("2) - CADASTRO DE PRODUTOS\n");
    printf("3) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE UMA OPÇÃO: ");
    scanf("%d", &opcao);

    getchar();    

}

void CadastroClientes(){

    printf("\n\nAdicione os dados do Cliente\n");

}

void CadastroProduto(){

    printf("\n\nAdicione os dados do produto\n");

}

int main(){

    setlocale(LC_ALL, "");

    TelaLogin();

    MostrarMenu();

        switch (opcao)

        {

            case 1 :

                CadastroClientes();

            break;

            case 2 :

                CadastroProduto();

            break;

            default :

                printf("Opção Invalida!");

            break;    
        }

        getchar();

    return 0;
}