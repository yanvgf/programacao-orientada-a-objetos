#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Usuario.hpp"
#include "Publicacao.hpp"
#include "Emprestimo.hpp"
#include "ItemEmprestimo.hpp"

class Biblioteca{
    vector<Usuario> usuarios;
    vector<Publicacao> livros;
    vector<Emprestimo> emprestimos;

    public:
    Biblioteca();
    void adicionarUsuario(const Usuario &usuario);
    void adicionarPublicacao(const Publicacao &publicacao);
    void adicionarEmprestimo(const Emprestimo &emprestimo);
    void adicionarItemEmprestimo(const Emprestimo &emprestimo, const ItemEmprestimo &item);
    void excluirUsuario(const Usuario &usuario);    
    void excluirPublicacao(const Publicacao &publicacao);    
    void excluirEmprestimo(const Emprestimo &emprestimo);
    void excluirItemEmprestimo(const Emprestimo &emprestimo, const ItemEmprestimo &item);
    void devolverLivro(const Emprestimo &emprestimo, const Publicacao &livro);
    void devolverTodos(const Emprestimo &emprestimo);
    void pesquisarPublicacaoTitulo(string titulo) const;
    void pesquisarPublicacaoAutor(string autor) const;
    vector<Usuario> getUsuarios() const;
    vector<Publicacao> getPublicacoes() const;
    vector<Publicacao> getLivros() const;
    vector<Publicacao> getPeriodicos() const;
    vector<Emprestimo> getEmprestimos() const;
};

#endif