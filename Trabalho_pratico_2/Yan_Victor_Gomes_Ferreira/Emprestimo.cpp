#include "Emprestimo.hpp"
#include <algorithm>
#include <iostream>

Emprestimo::Emprestimo(const Date &_dataPrevDevolucao, const Usuario &_usuario):
                dataPrevDevolucao(_dataPrevDevolucao), usuario(_usuario)
{

}

void Emprestimo::adicionarItem(ItemEmprestimo &item){
    itens.push_back(item);
}

void Emprestimo::excluirItem(ItemEmprestimo &item){
    /*for (auto i = itens.begin(); i != itens.end(); i++){
        if (*i == item){
            itens.erase(i);
        }
    }*/
}

void Emprestimo::devolverItem(ItemEmprestimo &item){
    /*for (auto i = itens.begin(); i != itens.end(); i++){
        if (1){ //(*i == item){
            itens.erase(i);
        }
    }*/
}

void Emprestimo::devolverTodos(){
    /*for (auto i = itens.begin(); i != itens.end(); i++){
        itens.erase(i);
    }*/
}

vector<ItemEmprestimo> Emprestimo::getItens(){
    return itens;
}

void Emprestimo::imprimeDados(){
    /*for (auto i = itens.begin(); i != itens.end(); i++){
        usuario.imprimeDados();
        i->imprimeDados();
    }*/
}

bool Emprestimo::operator==(const Emprestimo &e){
    /*if(this->usuario == e.usuario &&
       this->itens == e.itens)
    return 1;
    else return 0;*/
    return 1;
}
