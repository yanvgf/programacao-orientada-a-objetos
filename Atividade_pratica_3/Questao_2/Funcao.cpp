#include "Funcao.hpp"

double Funcao::getIntegral(double limiteInferior, double limiteSuperior, double intervalos) const{
    double tamanho_subintervalo = (limiteSuperior - limiteInferior)/intervalos;
    double resultado = func(limiteInferior) + func(limiteSuperior);
    double aux;
    for (int i = 1; i <= (intervalos - 1); i++){
        aux = limiteInferior + i*tamanho_subintervalo;
        resultado += 2 * (func(aux));
    }
    return resultado * tamanho_subintervalo/2;
}