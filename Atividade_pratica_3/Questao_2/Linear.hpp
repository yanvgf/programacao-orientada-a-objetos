#ifndef LINEAR_H
#define LINEAR_H

#include "Funcao.hpp"

class Linear: public Funcao{
    private:
    double a, b;

    public:
    Linear(const double &aa, const double &bb): a(aa), b(bb){}
    // funcao virtual representando a funcao cuja integral deve ser calculada
    virtual double func(const double &input) const;
    // destrutor
    virtual ~Linear(){}

};

#endif