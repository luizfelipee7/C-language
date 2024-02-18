#include <stdio.h>
#include <string.h>

int main()
{
    int quantidade, caminho;
    char remedio[100], nomes[100];
    FILE *estoque;

    do
    {
        printf("\n");
        printf(" ########   ########    #######    ######       ###     ########   ####     ###   \n");
        printf(" ##     ##  ##     ##  ##     ##  ##    ##     ## ##    ##     ##   ##     ## ##  \n");
        printf(" ##     ##  ##     ##  ##     ##  ##          ##   ##   ##     ##   ##    ##   ## \n");
        printf(" ##     ##  ########   ##     ##  ##   ####  ##     ##  ########    ##   ##     ##\n");
        printf(" ##     ##  ##   ##    ##     ##  ##    ##   #########  ##   ##     ##   #########\n");
        printf(" ##     ##  ##    ##   ##     ##  ##    ##   ##     ##  ##    ##    ##   ##     ##\n");
        printf(" ########   ##     ##   #######    ######    ##     ##  ##     ##  ####  ##     ##\n");

        // Menu para adicionar adicionar, retirar, abrir o extoque ou vechar o codigo//
        printf("\n");
        printf(" 1 - Adcionar produto\n 2 - Retirar produto\n 3 - Abrir estoque\n 4 - Encerrar o codigo\n");
        printf(" --> ");
        scanf("%d", &caminho);

        if (caminho == 1)
        {
            // Campo para adcionar itens ao estoque//
            system("cls");

            estoque = fopen("estoque.txt", "r+");
            rewind(estoque);

            // Abrimos o estoque caso não exista//
            if (estoque == NULL)
            {
                estoque = fopen("estoque.txt", "a+");
            }

            int id = 0;

            // Printamos a o estoque para adiocionar outro item//
            printf("\tESTOQUE\n");
            printf("\n[Id] [Nome]\t[Qntd]");

            while (fscanf(estoque, "%s %d", nomes, &quantidade) != EOF)
            {
                printf("\n%d - %s\t%d", ++id, nomes, quantidade);
            }

            printf("\n\n");
            printf("\nADICIONE O PRODUTO\n");
            printf("\nNome do produto:\n");
            printf("-> ");
            scanf("%s", nomes);

            printf("\nQuantidade de produtos:\n");
            printf("-> ");
            scanf("%d", &quantidade);

            char nomeEstoque[100];
            int quantidadeEstoque, novoRemedio = 0;
            FILE *estoque_temp;

            // Criamos outro estoque para fazer atualização dos itens//
            estoque_temp = fopen("estoque_temp.txt", "r+");

            if (estoque_temp == NULL)
            {
                estoque_temp = fopen("estoque_temp.txt", "a");
            }

            // Fechamos o estoque original//
            fclose(estoque);

            // Reabrimos para fazer as alterações//
            estoque = fopen("estoque.txt", "r+");
            rewind(estoque);

            // Fazemos as alterações//
            while (fscanf(estoque, "%s %d", nomeEstoque, &quantidadeEstoque) != EOF)
            {
                if (strcmp(nomeEstoque, nomes) == 0)
                {
                    novoRemedio = 1;
                    quantidadeEstoque += quantidade;
                }

                fprintf(estoque_temp, "%s\t%d\n", nomeEstoque, quantidadeEstoque);
            }

            // adicionamos mais remadios//
            if (novoRemedio == 0)
            {
                fprintf(estoque, "%s\t%d\n", nomes, quantidade);

                fclose(estoque);
                fclose(estoque_temp);

                // Excluimos o estoque temporario//
                remove("estoque_temp.txt");
            }
            else
            {
                // Se ouver a adição de outro remedio//
                fclose(estoque);
                fclose(estoque_temp);

                // Renomeamos e excluimos o estoque temporário//
                remove("estoque.txt");
                rename("estoque_temp.txt", "estoque.txt");
            }

            // Voltar para o menu//
            printf("\nProduto adcionado!");
            printf("\n\n--------------------------------");
            printf("\n1 - Para ir ao menu inicial\n3 - Para abrir estoque\n");
            printf("--> ");
            scanf("%d", &caminho);
            system("cls");
        }

        if (caminho == 2)
        {
            // Campo para retirar a os itens//
            system("cls");

            char nomeEstoque[100];
            int quantidadeEstoque, contId = 1;
            FILE *estoque_temp;

            estoque = fopen("estoque.txt", "r+");
            rewind(estoque);

            if (estoque == NULL)
            {
                printf("Ainda nao esxiste estoque");
            }

            int id = 0;

            printf("\tESTOQUE\n");
            printf("\n[Id] [Nome]\t[Qntd]");

            while (fscanf(estoque, "%s %d", nomes, &quantidade) != EOF)
            {
                printf("\n%d - %s\t%d", ++id, nomes, quantidade);
            }

            printf("\n\nRETIRAR PRODUTO DO ESTOQUE:\n\n");
            printf("Identificacao do produto:\n");
            printf("-> ");
            scanf("%d", &id);

            printf("\nQuantidade de produtos:\n");
            printf("-> ");
            scanf("%d", &quantidade);

            estoque_temp = fopen("estoque_temp.txt", "r+");

            if (estoque_temp == NULL)
            {
                estoque_temp = fopen("estoque_temp.txt", "a");
            }

            fclose(estoque);

            estoque = fopen("estoque.txt", "r+");
            rewind(estoque);

            while (fscanf(estoque, "%s %d", nomeEstoque, &quantidadeEstoque) != EOF)
            {
                if (contId == id)
                {
                    quantidadeEstoque -= quantidade;
                }

                contId++;

                fprintf(estoque_temp, "%s\t%d\n", nomeEstoque, quantidadeEstoque);
            }

            fclose(estoque);
            fclose(estoque_temp);

            remove("estoque.txt");
            rename("estoque_temp.txt", "estoque.txt");

            printf("\nProduto retirado!");
            printf("\n\n--------------------------------");
            printf("\n1 - Para ir ao menu inicial\n3 - Para abrir estoque\n");
            printf("--> ");
            scanf("%d", &caminho);
            system("cls");
        }

        if (caminho == 3)
        {
            // Campo para ver o estoque//
            system("cls");
            printf("\n");
            printf("########  ######  ########  #######   #######  ##     ## ########\n");
            printf("##       ##    ##    ##    ##     ## ##     ## ##     ## ##      \n");
            printf("##       ##          ##    ##     ## ##     ## ##     ## ##      \n");
            printf("######    ######     ##    ##     ## ##     ## ##     ## ######  \n");
            printf("##             ##    ##    ##     ## ##  ## ## ##     ## ##      \n");
            printf("##       ##    ##    ##    ##     ## ##    ##  ##     ## ##      \n");
            printf("########  ######     ##     #######   ##### ##  #######  ########\n");

            estoque = fopen("estoque.txt", "r");
            rewind(estoque);

            int id = 0;

            printf("\n[Id] [Nome]\t[Qntd]");

            while (fscanf(estoque, "%s %d", nomes, &quantidade) != EOF)
            {
                printf("\n%d - %s\t%d", ++id, nomes, quantidade);
            }

            // Voltar para o menu//
            printf("\n--------------------------------");
            printf("\n");
            printf("\n1 - Para ir ao menu inicial\n");
            printf("--> ");
            scanf("%d", &caminho);
            fclose(estoque);
            system("cls");
        }

        if (caminho == 4)
        {
            // Campo para encerrar o código//
            printf("\nCODIGO ENCERRADO\n");
            break;
        }

        if (caminho > 4)
        {
            system("cls");
            printf("\nNumero Invalido, escolha uma opcao valida\n\n");
        }

    } while (caminho = 4);
}
