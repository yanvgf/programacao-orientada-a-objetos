#ifndef QUADRATICA_H
#define QUADRATICA_H

#include "Funcao.hpp"

class Quadratica: public Funcao{
    private:
    double a, b, c;

    public:
    Quadratica(const double &aa, const double &bb, const double &cc): a(aa), b(bb), c(cc){}
    // funcao virtual representando a funcao cuja integral deve ser calculada
    virtual double func(const double &input) const;
    // destrutor
    virtual ~Quadratica(){}

};

#endif