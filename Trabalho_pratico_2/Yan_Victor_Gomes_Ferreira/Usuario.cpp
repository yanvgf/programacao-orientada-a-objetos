#include "Usuario.hpp"

#include <iostream>

Usuario::Usuario(string _nome, string _cpf, string _endereco, string _fone):
            nome(_nome), cpf(_cpf), endereco(_endereco), fone(_fone)
{

}

void Usuario::imprimeDados(){
    cout << endl
         << "Nome: " << nome
         << endl
         << "CPF: " << cpf
         << endl
         << "Endereco: " << endereco
         << endl
         << "Telefone: " << fone
         << endl;
}

bool Usuario::operator==(const Usuario &u){
    if(this->nome == u.nome &&
       this->cpf == u.cpf &&
       this->endereco == u.endereco &&
       this->fone == u.fone)
    return 1;
    else return 0;
}
    