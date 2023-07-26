#ifndef INTERFACE_H
#define INTERFACE_H

#include "Biblioteca.hpp"

class Interface{
    public:
    Interface();
    void mostrarMenu() const;
    void escolherOpcao(Biblioteca &b) const;
    void cadastrarUsuario(Biblioteca &b) const;
    void cadastrarLivro(Biblioteca &b) const;
    void cadastrarPeriodico(Biblioteca &b) const;
    void cadastrarEmprestimo(Biblioteca &b) const;
    void inserirItemEmprestimo(Biblioteca &b) const;
    void excluirUsuario(Biblioteca &b) const;
    void excluirLivro(Biblioteca &b) const;
    void excluirPeriodico(Biblioteca &b) const;
    void excluirEmprestimo(Biblioteca &b) const;
    void excluirItemEmprestimo(Biblioteca &b) const;
    void devolverTodosLivros(Biblioteca &b) const;
    void devolverLivro(Biblioteca &b) const;
    void pesquisarPublicacaoTitulo(const Biblioteca &b) const;
    void pesquisarLivroAutor(const Biblioteca &b) const;
    void listarUsuarios(const Biblioteca &b) const;
    void listarPublicacoes(const Biblioteca &b) const;
    void listarEmprestimos(const Biblioteca &b) const;
    void listarLivros(const Biblioteca &b) const;
    void listarPeriodicos(const Biblioteca &b) const;
};

#endif