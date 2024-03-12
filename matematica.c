#include <math.h>
#include <stdio.h>
#include "matematica.h"


double calcular_seno(double angulo_radianos){
    return sin(angulo_radianos);
}

double calcular_cosseno(double angulo_radianos){
    return cos(angulo_radianos);
}

double calcular_tangente(double angulo_radianos){
    if (fabs(cos(angulo_radianos)) < 1e-10) {
        printf("A tangente eh indefinida.\n");
        return NAN;
    }
    else{
    return tan(angulo_radianos);
    }
}
