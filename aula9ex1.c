#include <stdio.h>

int main(){
    float dia[7], s=0, porc;

    printf("choveu hoje? Digite 1 - Sim, 0 - Não\n");

    for (int i = 0; i<7; i++){
        printf("Dia %d:", i+1);
        scanf("%f", &dia[i]);
        if (dia[i] == 1){
            s++;
        }
    }
    
    porc = s/7*100;
    
    printf("Resultado: (%.0f%) de dias chuvosos.", porc);
    
    
    return 0;
}