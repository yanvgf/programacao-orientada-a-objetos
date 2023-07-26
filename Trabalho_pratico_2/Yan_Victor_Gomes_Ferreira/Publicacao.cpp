#include "Publicacao.hpp"

Publicacao::Publicacao(string _titulo, string _editora, int _codPublicacao, int _ano):
                titulo(_titulo), editora(_editora), codPublicacao(_codPublicacao), ano(_ano){}

Publicacao::~Publicacao(){}

string Publicacao::getTitulo() const{ return titulo; }

string Publicacao::getEditora() const{ return editora; }

int Publicacao::getCodPublicacao() const{ return codPublicacao; }

int Publicacao::getAno() const{ return ano; }

void Publicacao::imprimeDados() const{}

string Publicacao::getAutor() const{
    return "Nao ha autor";
}

bool Publicacao::operator==(const Publicacao &p){
    if(this->titulo == p.titulo &&
       this->editora == p.editora &&
       this->ano == p.ano &&
       this->codPublicacao == p.codPublicacao)
    return 1;
    else return 0;
}