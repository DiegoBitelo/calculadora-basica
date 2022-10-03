//https://github.com/DiegoBitelo/calculadora-basica
#include <stdio.h>
#include <math.h>
int main(void) {
     printf("\n---------------------------------------------------\n");
    // Informações gerais
    printf("Autor: Diego Bitelo da Silva\n");
    printf("Curso: Algorítimos e Programação\n");
    printf("Universidade: La Salle\n");
    printf("Matrícula: 201932606\n");
  
    //Declaração de variáveis
    float valorX=0,valorY=0,resultado=0;
    /*
    Tipos de Operadores
        1 - Soma (+)
        2 - Subtração (-)
        3 - Multiplicação (*)
        4 - divisão (/)
        5 - Raiz Quadrada
        6 - Potencia (x²)
    */
    int tipoOperacao=0,operacaoValida=0,continuar=0;
    
    do{
        printf("\n---------------------------------------------------\n");
        printf("\nTipos de Operações\n");
        printf("1 - Soma (+)\n");
        printf("2 - Subtração (-)\n");
        printf("3 - Multiplicação (*)\n");
        printf("4 - divisão (/)\n");
        printf("5 - Raiz Quadrada\n");
        printf("6 - Potencia (x²)\n");
       
        do{
             printf("\nDigite o número da operação:");
             scanf("%i", &tipoOperacao);
         
             if(tipoOperacao>6 || tipoOperacao<1 )
                printf("\nOperador inválido!\n");
            
        }while((tipoOperacao>6 || tipoOperacao<1));
        
        printf("\n****************************************\n");
        switch(tipoOperacao){
            case 1://soma
                printf("1-SOMA\n");
                break;
            case 2://subtração
                 printf("2-SUBTRAÇÃO\n");
                break;
            case 3://multiplicação
                 printf("3-MULTIPLICAÇÃO\n");
                break;
            case 4://divisão
                 printf("4-DIVISÃO\n");
                break;
            case 5://raiz quadrada
                 printf("\5-RAIZ QUADRADA\n");
                break;
            case 6://potência
                printf("\POTÊNCIA\n");
                break;
            default:
                printf("Tipo de operação inválida!\n"); 
        }
         printf("****************************************\n");
       
        //Informe primeiro Valor
        printf("\tDigite o primeiro Valor: ");
        scanf("%f", &valorX);
        
        // Se o tipo de operação for diferente de Raiz quadrada
        if(tipoOperacao !=5)
        {
            // Informe segundo valor:
            printf("\tDigite o segundo Valor: ");
            scanf("%f", &valorY);
           
            // Se for divisão o valor não pode ser menor ou igual a zero
            if(tipoOperacao==4 && valorY<=0)
            {
                do{
                    printf("Para divisão o segundo valor não pode ser Zero!\n");  
                    printf("\tDigite novamente o segundo Valor: ");
                    scanf("%f", &valorY);
                }while(valorY<=0);
            }
        }
        
        //conforme tipo de operação será executada a opração
        switch(tipoOperacao){
            case 1://soma
                resultado= valorX + valorY;
                break;
            case 2://subtração
                resultado= valorX - valorY;
                break;
            case 3://multiplicação
                resultado= valorX * valorY;
                break;
            case 4://divisão
                resultado= valorX / valorY;
                break;
            case 5://raiz quadrada
                 resultado= sqrt(valorX);
                break;
            case 6://potência
                resultado= pow(valorX,valorY);
                break;
            default:
                printf("Tipo de operação inválida!\n"); 
        }
        
        printf("Resultado: %0.2f",resultado);
        printf("\n****************************************\n");
        
       printf("\nDigite 1 para efetuar uma nova operação!\n");
       scanf("%i",&continuar);
       
    }while(continuar==1);    

    return 0;
}
