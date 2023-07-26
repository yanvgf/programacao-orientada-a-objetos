#ifndef FUNCAO_H
#define FUNCAO_H

#include <iostream>
#include <cmath>
using namespace std;

class Funcao {
    public:
    //funcao que obtem a integral da funcao pela regra do trapezio
    double getIntegral(double limiteInferior, double limiteSuperior, double intervalos) const;

    // funcao virtual representando a funcao cuja integral deve ser calculada
    virtual double func(const double &input) const = 0;
    
    // destrutor
    virtual ~Funcao(){}

};

#endif