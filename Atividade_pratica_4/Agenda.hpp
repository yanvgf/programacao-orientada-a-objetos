#ifndef AGENDA_H
#define AGENDA_H

#include "Pessoa.hpp"
#include "Amigo.hpp"
#include "Conhecido.hpp"

#include <vector>

class Agenda {
    private:
    vector<Pessoa*> v;
    int qtd_Amigos = 0;
    int qtd_Conhecidos = 0;

    public:
    Agenda(const int &qtd);
    void addInformacoes();
    void imprimeAniversarios() const;
    void imprimeEmail() const;
    int getQtd_Amigos() const{ return qtd_Amigos; }
    int getQtd_Conhecidos() const{ return qtd_Conhecidos; }
};

#endif