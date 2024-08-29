#include<stdio.h>
#include<stdlib.h>

int main (){
    int FecharPrograma;
    int Cancelar;
    char NomeProduto[100];
    int Quantidade;
    float ValorTotal;
    float ValorTotalDia = 0.0;
    float PrecoUnitario;


    while(1){
        printf("deseja registrar uma venda?:\n\n");
        printf("1 - sim\n");
        printf("2 - nao\n");
        printf("Opcao: ");
        scanf("%d", &FecharPrograma);

        if(FecharPrograma== 1){
            printf("\n\n digite o nome do produto: ");
            scanf("%s", NomeProduto);
            printf("quantidade vendida: ");
            scanf("%d", &Quantidade);
            printf("valor do produto: ");
            scanf("%f", &PrecoUnitario);

            ValorTotal=PrecoUnitario*Quantidade;

            printf("valor total da venda de %s: R$%.2f\n\n", NomeProduto, ValorTotal);

            ValorTotalDia+=ValorTotal;



            printf("Deseja cancelar a compra?\n\n");
            printf("1 - sim\n");
            printf("2 - finalizar compra\n");
            printf("Opcao: ");
            scanf("%d", &Cancelar);
                if(Cancelar == 1) {
                    printf("*** COMPRA CANCELADA ***\n\n");
                    continue;
                }
                else{
                    if(Cancelar== 2)
                       ValorTotal;

                }

            printf("Valor total da venda de %s: R$%.2f\n\n", NomeProduto, ValorTotal);

        }
        else{
            if(FecharPrograma == 2)
            printf("fechando caixa...\n");
            printf("valor total do dia: R$%.2f\n", ValorTotalDia);
            break;
        }



    }

    printf("valor total do dia: R$%.2f\n\n", ValorTotalDia);


return 0;
}
