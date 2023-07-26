#ifndef PERIODICO_H
#define PERIODICO_H

#include "Publicacao.hpp"

class Periodico: public Publicacao{
    int numEdicao;
    string mes;

    public:
    Periodico(string _titulo, string _editora, int _codPublicacao, 
              int _ano, int _numEdicao, string _mes);
    void imprimeDados() const override;
    bool operator==(const Publicacao &u) override;
    string getAutor() const override;
};

#endif