#include <stdio.h>

int main(){
    float dia[7], s=0, porc;

    printf("Reponda: 1 para Sim, 0 para Não\n");

    for (int i = 0; i<7; i++){
        printf("Choveu no Dia %d? ", i+1);
        scanf("%f", &dia[i]);
        if (dia[i] == 1){
            s++;
        }
    }
    
    porc = s/7*100;
    
    printf("Resultado: (%.1f%) de dias chuvosos.", porc);
    
    
    return 0;
}
