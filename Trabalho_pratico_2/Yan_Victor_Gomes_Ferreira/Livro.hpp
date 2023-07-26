#ifndef LIVRO_H
#define LIVRO_H

#include "Publicacao.hpp"

class Livro: public Publicacao{
    string autores;
    int qtdeExemplares;

    public:
    Livro(string _titulo, string _editora, int _codPublicacao,
          int _ano, string _autores, int _qtdeExemplares);
    Livro(string _titulo, string _editora, int _codPublicacao,
          int _ano, string _autores);
    void aumentaQtde(int qtde);
    void diminuiQtde(int qtde);   
    void imprimeDados() const override;
    string getAutor() const override;
    bool operator==(const Publicacao &u) override;
};

#endif