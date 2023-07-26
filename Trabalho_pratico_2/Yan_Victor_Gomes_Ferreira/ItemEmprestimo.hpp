#ifndef ITEMEMPRESTIMO_H
#define ITEMEMPRESTIMO_H

#include "Date.hpp"
#include "Livro.hpp"

class ItemEmprestimo{
    Date dataDevolucao;
    Livro livro;

    public:
    ItemEmprestimo(const Livro &_livro);
    Livro getLivro();
    void imprimeDados();
    //bool operator==(ItemEmprestimo &i);
};

#endif