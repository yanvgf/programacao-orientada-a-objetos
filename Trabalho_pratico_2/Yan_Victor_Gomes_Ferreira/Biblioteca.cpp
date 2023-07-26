#include "Biblioteca.hpp"
#include "Periodico.hpp"

#include <algorithm>

Biblioteca::Biblioteca(): usuarios(), livros(), emprestimos(){}

void Biblioteca::adicionarUsuario(const Usuario &usuario){
    usuarios.push_back(usuario);
}

void Biblioteca::adicionarPublicacao(const Publicacao &publicacao){
    livros.push_back(publicacao);
}

void Biblioteca::adicionarEmprestimo(const Emprestimo &emprestimo){
    emprestimos.push_back(emprestimo);
}

void Biblioteca::adicionarItemEmprestimo(const Emprestimo &emprestimo, const ItemEmprestimo &item){

}

void Biblioteca::excluirUsuario(const Usuario &usuario){    
    for (auto i = usuarios.begin(); i != usuarios.end(); i++){
        if(*i == usuario){     
            usuarios.erase(i);
        }
    }
}

void Biblioteca::excluirPublicacao(const Publicacao &publicacao){    
    for (auto i = livros.begin(); i != livros.end(); i++){
        if(*i == publicacao){     
            livros.erase(i);
        }
    }
}

void Biblioteca::excluirEmprestimo(const Emprestimo &emprestimo){
    for (auto i = emprestimos.begin(); i != emprestimos.end(); i++){
        if(*i == emprestimo){     
            emprestimos.erase(i);
        }
    }
}

void Biblioteca::excluirItemEmprestimo(const Emprestimo &emprestimo, const ItemEmprestimo &item){

}

void Biblioteca::devolverLivro(const Emprestimo &emprestimo, const Publicacao &livro){

}

void Biblioteca::devolverTodos(const Emprestimo &emprestimo){

}

void Biblioteca::pesquisarPublicacaoTitulo(string titulo) const{
    for (auto i = livros.begin(); i != livros.end(); i++){
        if(i->getTitulo().find(titulo) != string::npos){     
            i->imprimeDados();
        }
    }
}

void Biblioteca::pesquisarPublicacaoAutor(string autor) const{
    for (auto i = livros.begin(); i != livros.end(); i++){
            if(i->getAutor().find(autor) != string::npos){     
                i->imprimeDados();
            }
    }
}

vector<Usuario> Biblioteca::getUsuarios() const{
    return usuarios;
}

vector<Publicacao> Biblioteca::getPublicacoes() const{
    return livros;
}

vector<Publicacao> Biblioteca::getLivros() const{
    vector<Publicacao> vp;
    for (auto i = livros.begin(); i != livros.end(); i++){
        if (i->getAutor() != "Nao ha autor") {
            vp.push_back(*i);
        }
    }
    return vp;
}

vector<Publicacao> Biblioteca::getPeriodicos() const{
    vector<Publicacao> vp;
    for (auto i = livros.begin(); i != livros.end(); i++){
        if (i->getAutor() != "Nao ha autor") {
            vp.push_back(*i);
        }
    }
    return vp;
}

vector<Emprestimo> Biblioteca::getEmprestimos() const{
    return emprestimos;
}
