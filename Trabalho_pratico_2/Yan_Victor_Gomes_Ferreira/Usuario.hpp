#ifndef USUARIO_H
#define USUARIO_H

#include "Date.hpp"
#include <string>

using namespace std;

class Usuario {
    string nome,
           cpf,
           endereco,
           fone;
    Date dataPenalizacao;

    public:
    Usuario(string _nome, string _cpf, string _endereco, string _fone);
    void imprimeDados();
    bool operator==(const Usuario &u);
};

#endif