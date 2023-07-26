#ifndef PUBLICACAO_H
#define PUBLICACAO_H

#include <string>

using namespace std;

class Publicacao{
    int codPublicacao,
        ano;
    string titulo,
           editora;
    
    public:
    Publicacao(string _titulo, string _editora, int _codPublicacao, int _ano);
    virtual ~Publicacao();
    virtual void imprimeDados() const;
    string getTitulo() const;
    string getEditora() const;
    int getCodPublicacao() const;
    int getAno() const;
    virtual string getAutor() const;
    virtual bool operator==(const Publicacao &p);
};

#endif