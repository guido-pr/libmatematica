#include <math.h>
#include <stdio.h>
#include "matematica.h"


double calcular_seno(double angulo_radianos){
    return sin(angulo_radianos); //Retorna o seno do angulo
}

double calcular_cosseno(double angulo_radianos){
    return cos(angulo_radianos); //Retorna o cosseno do angulo
}

double calcular_tangente(double angulo_radianos){
    if (fabs(cos(angulo_radianos)) < 1e-10){
        printf("A tangente eh indefinida.\n"); //Verifica quando a tangente esta indefinida (Obs: é quando o cosseno = 0, já que tan = sen/cos)
        return 0;
    }
    else{
    return tan(angulo_radianos); //Retorna a tangente do angulo
    }
}
