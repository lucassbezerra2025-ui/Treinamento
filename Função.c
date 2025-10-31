//Objetivo: 1. Elabore um programa com uma função que calcule a área de uma figura geométrica.

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14
// Função que calcula a área
float figgeo(int codigo, float valor1, float valor2){
    float area = 0; 
    //OBS: PARA CHAMAR A FUNÇÃO NA MAIN, É NECESSÁRIO QUE A ORDEM DAS VÁRIAVEIS NA MAIN SEJA A MESMA QUE OS PARÂMETROS! 
    switch (codigo){
        case 1: area = M_PI * pow(valor1,2) /*OPERAÇÃO*/; 
        break;
         case 2: area = pow(valor1,2); 
         break;
          case 3: area = (valor1 * valor2); 
          break;
           default: printf("Código inválido!\n");
            break;
    }
    return area;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo;
    float v1, v2, resultado;
    printf("== Cálculo da Área ==\n");
    printf("[1] Círculo\n[2] Quadrado\n[3] Triângulo\n");
    printf("Escolha a opção desejada\n");
    scanf("%d", &codigo);
   if(codigo == 1){
       printf("Insira o valor do raio: ");
       scanf("%f", &v1);
       resultado = figgeo(codigo, v1, 0);
   } else if(codigo == 2) {
       printf("Insira o valor do lado: ");
       scanf("%f", &v1);
       resultado = figgeo(codigo, v1, 0);
   }else if(codigo == 3){
       printf("Insira o valor da base: ");
        scanf("%f", &v1);
       printf("Insira o valor da altura: ");
       scanf("%f", &v2);
       resultado = figgeo(codigo,v1,v2);
   }else {
       printf("Código Inválido\n");
       return 0;
   }
   printf("O valor da área calculada é: %.2f", resultado);
    return 0;

}
