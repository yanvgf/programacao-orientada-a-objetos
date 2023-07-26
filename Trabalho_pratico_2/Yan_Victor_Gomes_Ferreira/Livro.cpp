#include "Livro.hpp"

#include <iostream>

Livro::Livro(string _titulo, string _editora, int _codPublicacao,
             int _ano, string _autores, int _qtdeExemplares):
    Publicacao(_titulo, _editora, _codPublicacao, _ano),
    autores(_autores), qtdeExemplares(_qtdeExemplares){}

Livro::Livro(string _titulo, string _editora, int _codPublicacao,
             int _ano, string _autores):
    Publicacao(_titulo, _editora, _codPublicacao, _ano),
    autores(_autores), qtdeExemplares(0){}

void Livro::aumentaQtde(int qtde) { qtdeExemplares+=qtde; }
void Livro::diminuiQtde(int qtde) { qtdeExemplares-=qtde; }    

void Livro::imprimeDados() const{
    cout << endl
         << "Titulo: " << this->getTitulo()
         << endl
         << "Editora: " << this->getEditora()
         << endl
         << "Codigo de publicacao: " << this->getCodPublicacao()
         << endl
         << "Ano: " << this->getAno()
         << endl
         << "Autor(es): " << autores
         << endl;
}

string Livro::getAutor() const{
    return autores;
}

bool Livro::operator==(const Publicacao &u){
    if(this->getTitulo() == u.getTitulo() &&
       this->getEditora() == u.getEditora() &&
       this->getCodPublicacao() == u.getCodPublicacao() &&
       this->getAno() == u.getAno())
    return 1;
    else return 0;
}