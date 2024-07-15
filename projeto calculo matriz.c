#include<stdio.h>
#include<string.h>
int main(){
    /*ESCREVER UMA MATRIZ 3X3 E REALIZAR A SOMA
    DE CADA LINHA E CADA COLUNA INDIVIDUALMENTE.*/

    int matriz[3][3];
       int linha1=0,linha2=0,linha3=0;
          int coluna1=0,coluna2=0,coluna3=0;
       for(int n=0;n<3;n++){
          for(int j=0;j<3;j++){
            printf("Matriz[%d][%d]:",n,j);
            scanf("%d",&matriz[n][j]);
          }
       }
       //IMPRIMIR A MATRIZ EM TABELA

         printf("\033[H\033[J");
         printf("MATRIZ IMPRESSA.\n");
       for(int n=0;n<3;n++){
            for(int j=0;j<3;j++){
                printf("%d ",matriz[n][j]);
            }
        printf("\n");
       }
    //SOMAR E IMPRIMIR AS LINHAS

       for(int n=0;n<1;n++){
        for(int j=0;j<3;j++){
            linha1 += matriz[n][j];
        }
       }
       for(int n=1;n<2;n++){
        for(int j=0;j<3;j++){
            linha2 += matriz[n][j];
        }
       }
       for(int n=2;n<3;n++){
        for(int j=0;j<3;j++){
            linha3 += matriz[n][j];
        }
       }
       printf("Soma da linha[0]:%d\n",linha1);
       printf("Soma da linha[1]:%d\n",linha2);
       printf("Soma da linha[2]:%d\n\n",linha3);

   //SOMAR E IMPRIMIR AS COLUNAS
         for(int j=0;j<1;j++){
        for(int n=0;n<3;n++){
            coluna1 += matriz[n][j];
        }
       }
        for(int j=1;j<2;j++){
        for(int n=0;n<3;n++){
            coluna2 += matriz[n][j];
        }
       }
       for(int j=2;j<3;j++){
        for(int n=0;n<3;n++){
            coluna3 += matriz[n][j];
        }
       }
       printf("Soma da coluna[0]:%d\n",coluna1);
       printf("Soma da coluna[1]:%d\n",coluna2);
       printf("Soma da coluna[2]:%d\n",coluna3);



 return 0;
}

