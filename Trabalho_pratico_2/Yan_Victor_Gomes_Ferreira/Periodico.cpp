#include "Periodico.hpp"

#include <iostream>

Periodico::Periodico(string _titulo, string _editora, int _codPublicacao, 
              int _ano, int _numEdicao, string _mes):
                Publicacao(_titulo, _editora, _codPublicacao, _ano),
                numEdicao(_numEdicao), mes(_mes){}

void Periodico::imprimeDados() const{
    cout << endl
         << "Titulo: " << this->getTitulo()
         << endl
         << "Editora: " << this->getEditora()
         << endl
         << "Codigo de publicacao: " << this->getCodPublicacao()
         << endl
         << "Ano: " << this->getAno()
         << endl
         << "Numero da edicao: " << numEdicao 
         << endl
         << "Mes: " << mes
         << endl;
}

bool Periodico::operator==(const Publicacao &u){
    if(this->getTitulo() == u.getTitulo() &&
        this->getEditora() == u.getEditora() &&
        this->getCodPublicacao() == u.getCodPublicacao() &&
        this->getAno() == u.getAno())
      return 1;
      else return 0;
}

string Periodico::getAutor() const{
  return "Nao ha autor";
}