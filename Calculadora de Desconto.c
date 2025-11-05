#include <stdio.h>
#include <locale.h>
float CalcularDesconto(float vb){
    float vd = 0;
    if(vb <= 100){
        vd=vb-(vb*(5.0/100));
    } else if(vb <= 500){
        vd=vb-(vb*(10.0/100));
    } else if(vb > 500){
        vd=vb-(vb*(15.0/100));
    } else {
        printf("Número invalido");
    }
    return vd;
}
float CalcularBonus(float vlc, char codigo){
    if(codigo == 'V' || codigo == 'v'){
        vlc = vlc-(vlc*(3.0/100));
    } else if(codigo == 'P' || codigo == 'p'){
        vlc = vlc+(vlc*(5.0/100));
    } else {
        vlc = -1;
    }
    return vlc;
}
int main() {
    setlocale(LC_ALL, "Portuguese");
    float vb,vlc;
    int resultado;
    char cod;
    printf("===== Digite o valor bruto =====\n- Valor Bruto: ");
        scanf("%f", &vb);
            printf("===== Digite a forma de pagamento =====\n[V] Pagamento à Vista\n[P] Pagamento à Prazo\nOpção: ");
            scanf(" %c", &cod);
            vb = CalcularDesconto(vb);
                printf("- Valor bruto com desconto é: %.2f \n", vb);
        vlc = CalcularBonus(vb, cod);
    if(cod == 'V' || cod == 'v'){
        printf("- Bônus: %.2f", vlc);
    } else if(cod == 'P' || cod == 'p'){
        printf("- acréscimo de taxa: %.2f", vlc);
    } else {
       printf("Código Inválido!");
    }
    return 0;
}