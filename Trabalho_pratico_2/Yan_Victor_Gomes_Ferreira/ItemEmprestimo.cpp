#include "ItemEmprestimo.hpp"

#include <iostream>

ItemEmprestimo::ItemEmprestimo(const Livro &_livro): livro(_livro){
    //data recebe data atual do sistema
}

Livro ItemEmprestimo::getLivro(){
    return livro;
}

void ItemEmprestimo::imprimeDados(){
    cout << endl
         << "Livro: "
         << endl;
    this->livro.imprimeDados();
}

/*
bool ItemEmprestimo::operator==(ItemEmprestimo &i){
    if (this->livro == i.livro) return 1;
    else return 0;
}
*/

