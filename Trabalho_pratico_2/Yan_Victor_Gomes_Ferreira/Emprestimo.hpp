#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include "Date.hpp"
#include "Usuario.hpp"
#include "ItemEmprestimo.hpp"

#include <vector>

class Emprestimo{
    int numero;
    static int proximoNumero;
    Date dataEmprestimo,
         dataPrevDevolucao;
    Usuario usuario;
    vector<ItemEmprestimo> itens;

    public:
    Emprestimo(const Date &_dataPrevDevolucao, const Usuario &_usuario);
    void adicionarItem(ItemEmprestimo &item);
    void excluirItem(ItemEmprestimo &item);
    void devolverItem(ItemEmprestimo &item);
    void devolverTodos();
    vector<ItemEmprestimo> getItens();
    void imprimeDados();
    bool operator==(const Emprestimo &e);
};

#endif