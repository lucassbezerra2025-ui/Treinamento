#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
float CalcularDesconto(float vb){
    float vd = 0;
    if(vb <= 100){
        vd=(vb*(5.0/100));
    } else if(vb <= 500){
        vd=(vb*(10.0/100));
    } else if(vb > 500){
        vd=(vb*(15.0/100));
    } else {
        printf("Número invalido");
    }
    return vd;
}
float CalcularBonus(float vlc, char codigo){
    if(codigo == 'V' || codigo == 'v'){
        vlc = (vlc*(3.0/100));
    } else if(codigo == 'P' || codigo == 'p'){
        vlc = (vlc*(5.0/100));
    } else {
        vlc = -1;
    }
    return vlc;
}
int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorbruto, valorliquido;
    float desconto,bonus;
    char cod;
    printf("\t========================\n");
        printf("\t》Digite o valor gasto《\n");
        printf("\t========================\n");
        printf("=> R$ ");
        scanf("%f", &valorbruto);
            printf("===== Digite a forma de pagamento =====\n[V] Pagamento à Vista\n[P] Pagamento à Prazo\nOpção: ");
            scanf(" %c", &cod);
            desconto = CalcularDesconto(valorbruto);
            valorliquido = valorbruto - desconto;
            bonus = CalcularBonus(valorliquido, cod);
    if(cod == 'V' || cod == 'v'){
        printf("\t========================\n");
        printf("\t 《    NOTA FISCAL    》\n");
        printf("\t========================\n");
        printf("\t|=> Valor Bruto: R$ %.2f\n", valorbruto);
        printf("\t|=> Desconto: R$ %.2f\n", desconto);
        printf("\t|=> Bônus: R$ %.2f\n", bonus);
        printf("\t|=> Valor Líquido: R$ %.2f ",valorliquido + bonus);
    } else if(cod == 'P' || cod == 'p'){
        printf("\t========================\n");
        printf("\t 《    NOTA FISCAL    》\n");
        printf("\t========================\n");
        printf("\t|=> Valor Bruto: R$ %.2f\n", valorbruto);
        printf("\t|=> Desconto: R$ %.2f \n", desconto);
        printf("\t|=> Taxa: R$ %.2f\n", bonus);
        printf("\t|=> Valor Líquido: R$ %.2f",valorliquido + bonus);
    } else {
       printf("Código Inválido!");
    }
    return 0;
}