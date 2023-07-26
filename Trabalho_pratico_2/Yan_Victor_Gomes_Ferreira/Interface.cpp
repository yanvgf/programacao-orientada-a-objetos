#include "Interface.hpp"
#include "Usuario.hpp"
#include "Periodico.hpp"

#include <iostream>
#include <vector>

using namespace std;

Interface::Interface(){
}

void Interface::mostrarMenu() const{
    cout << endl
         << "///////////////////////////////////////////////////////" << endl
         << "///   Bem-vindo(a) ao Sistema de Bibliotecas POO!   ///" << endl
         << "///////////////////////////////////////////////////////" << endl
         << endl;

        cout << "Aperte a tecla ENTER para continuar" << endl;
        char enter = 'x';
        while (enter != '\n'){
            cin.get(enter);
        }

    cout << "(1) Cadastrar novo usuario" << endl
         << "(2) Cadastrar novo livro" << endl
         << "(3) Cadastrar novo periodico" << endl
         << "(4) Cadastrar novo emprestimo" << endl
         << "(5) Inserir novo item de emprestimo" << endl
         << "(6) Excluir um usuario" << endl
         << "(7) Excluir um livro" << endl
         << "(8) Excluir um periodico" << endl
         << "(9) Excluir um emprestimo" << endl
         << "(10) Excluir um item de emprestimo" << endl
         << "(11) Devolver todos os livros de um emprestimo" << endl
         << "(12) Devolver um livro de um emprestimo" << endl
         << "(13) Pesquisar publicacoes por titulo" << endl
         << "(14) Pesquisar livros por autor" << endl
         << "(15) Listar todos os ususarios" << endl
         << "(16) Listar todas as publicacoes" << endl
         << "(17) Listar todos os emprestimos e seus itens" << endl
         << "(0) Sair do programa" << endl
         << endl;
    cout << "Digite o numero da operaçao que voce deseja realizar: ";
}


void Interface::escolherOpcao(Biblioteca &b) const{
    int num;
    while (cin >> num && num != 0){
        switch (num){
        case 1:
            this->cadastrarUsuario(b);
            break;
        
        case 2:
            this->cadastrarLivro(b);
            break;

        case 3:
            this->cadastrarPeriodico(b);
            break;

        case 4:
            this->cadastrarEmprestimo(b);
            break;

        case 5:
            this->inserirItemEmprestimo(b);
            break;

        case 6:
            this->excluirUsuario(b);
            break;

        case 7:
            this->excluirLivro(b);
            break;

        case 8:
            this->excluirPeriodico(b);
            break;

        case 9:
            this->excluirEmprestimo(b);
            break;

        case 10:
            this->excluirItemEmprestimo(b);
            break;

        case 11:
            this->devolverTodosLivros(b);
            break;

        case 12:
            this->devolverLivro(b);
            break;

        case 13:
            this->pesquisarPublicacaoTitulo(b);
            break;

        case 14:
            this->pesquisarLivroAutor(b);
            break;

        case 15:
            this->listarUsuarios(b);
            break;

        case 16:
            this->listarPublicacoes(b);
            break;

        case 17:
            this->listarEmprestimos(b);
            break;

        case 18:
            this->mostrarMenu();
            break;
        }
    }
}

void Interface::cadastrarUsuario(Biblioteca &b) const{
    cout << endl
         << "Digite o nome do usuario: ";
    string nome;
    cin.ignore();
    getline(cin, nome);

    cout << endl
         << "Digite o CPF do usuario: ";
    string cpf;
    cin.ignore();
    getline(cin, cpf);

    cout << endl
         << "Digite o endereco do usuario: ";
    string endereco;
    cin.ignore();
    getline(cin, endereco);

    cout << endl
         << "Digite o telefone do usuario: ";
    string fone;
    cin.ignore();
    getline(cin, fone);

    Usuario u(nome, cpf, endereco, fone);
    b.adicionarUsuario(u);

    cout << endl 
         << "Usuario cadastrado!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::cadastrarLivro(Biblioteca &b) const{
    cout << endl
         << "Digite o titulo do livro: ";
    string titulo;
    cin.ignore();
    getline(cin, titulo);

    cout << endl
         << "Digite a editora: ";
    string editora;
    cin.ignore();
    getline(cin, editora);

    cout << endl
         << "Digite o codigo da publicacao: ";
    int codPublicacao;
    cin >> codPublicacao;

    cout << endl
         << "Digite o ano de publicacao: ";
    int ano;
    cin >> ano;

    cout << endl
         << "Digite o nome dos autores: ";
    string autores;
    cin.ignore();
    getline(cin, autores);

    Livro l(titulo, editora, codPublicacao, ano, autores);
    b.adicionarPublicacao(l);

    cout << endl
         << "Livro cadastrado!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::cadastrarPeriodico(Biblioteca &b) const{
    cout << endl
         << "Digite o titulo do periodico: ";
    string titulo;
    cin.ignore();
    getline(cin, titulo);

    cout << endl
         << "Digite a editora: ";
    string editora;
    cin.ignore();
    getline(cin, editora);

    cout << endl
         << "Digite o codigo da publicacao: ";
    int codPublicacao;
    cin >> codPublicacao;

    cout << endl
         << "Digite o ano de publicacao: ";
    int ano;
    cin >> ano;

    cout << endl
         << "Digite o numero da edicao: ";
    int numEdicao;
    cin >> numEdicao;

    cout << endl
         << "Digite o mes da publicacao: ";
    string mes;
    cin.ignore();
    getline(cin, mes);

    Periodico p(titulo, editora, codPublicacao, ano, numEdicao, mes);
    b.adicionarPublicacao(p);

    cout << endl
         << "Periodico cadastrado!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::cadastrarEmprestimo(Biblioteca &b) const{
}

void Interface::inserirItemEmprestimo(Biblioteca &b) const{
}

void Interface::excluirUsuario(Biblioteca &b) const{
    cout << endl
         << "Estes sao os usuarios da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getUsuarios().size(); i++){
        cout << endl << "(Usuario " << i << ")";
        b.getUsuarios()[i].imprimeDados();
    }

    cout << endl
         << "Digite o numero do usuario que voce deseja excluir:";
    int numUsuario;
    cin >> numUsuario;

    b.excluirUsuario(b.getUsuarios()[numUsuario]);

    cout << endl
         << "Usuario excluido!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::excluirLivro(Biblioteca &b) const{
    cout << endl
         << "Estes sao os livros da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        Livro* l = dynamic_cast<Livro*>(&b.getPublicacoes()[i]);
        if (l) {
            cout << endl << "(Livro " << i << ")";
            b.getPublicacoes()[i].imprimeDados();
        }
    }

    cout << endl
         << "Digite o numero do livro que voce deseja excluir:";
    int numLivro;
    cin >> numLivro;

    b.excluirPublicacao(b.getLivros()[numLivro]);

    cout << endl
         << "Livro excluido!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::excluirPeriodico(Biblioteca &b) const{
    cout << endl
         << "Estes sao os periodicos da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        Periodico* p = dynamic_cast<Periodico*>(&b.getPublicacoes()[i]);
        if (p) {
            cout << endl << "(Periodico " << i << ")";
            b.getPublicacoes()[i].imprimeDados();
        }
    }

    cout << endl
         << "Digite o numero do periodico que voce deseja excluir:";
    int numPeriodico;
    cin >> numPeriodico;

    b.excluirPublicacao(b.getPeriodicos()[numPeriodico]);

    cout << endl
         << "Periodico excluido!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::excluirEmprestimo(Biblioteca &b) const{
    cout << endl
         << "Estes sao os emprestimos da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        cout << "(Emprestimo " << i << ")";
        b.getEmprestimos()[i].imprimeDados();
    }

    cout << endl
         << "Digite o numero do emprestimo que voce deseja excluir:";
    int numEmprestimo;
    cin >> numEmprestimo;

    b.excluirEmprestimo(b.getEmprestimos()[numEmprestimo]);

    cout << endl
         << "Emprestimo excluido!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::excluirItemEmprestimo(Biblioteca &b) const{
    cout << endl
         << "Estes sao os emprestimos da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        b.getEmprestimos()[i].imprimeDados();
    }

    cout << endl
         << "Digite o numero do emprestimo com o livro que voce deseja excluir:";
    int numEmprestimo;
    cin >> numEmprestimo;

    cout << endl
         << "Digite o numero do livro que voce deseja excluir dentro do emprestimo:";
    int numLivro;
    cin >> numLivro;

    b.excluirItemEmprestimo(b.getEmprestimos()[numEmprestimo], b.getEmprestimos()[numEmprestimo].getItens()[numLivro].getLivro());

    cout << endl
         << "Livro excluido!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::devolverTodosLivros(Biblioteca &b) const{
    cout << endl
         << "Estes sao os emprestimos da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        b.getEmprestimos()[i].imprimeDados();
    }

    cout << endl
         << "Digite o numero do emprestimo com os livros que voce deseja devolver:";
    int numEmprestimo;
    cin >> numEmprestimo;

    b.devolverTodos(b.getEmprestimos()[numEmprestimo]);

    cout << endl
         << "Livros devolvidos!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::devolverLivro(Biblioteca &b) const{
    cout << endl
         << "Estes sao os emprestimos da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        b.getEmprestimos()[i].imprimeDados();
    }

    cout << endl
         << "Digite o numero do emprestimo com o livro que voce deseja devolver:";
    int numEmprestimo;
    cin >> numEmprestimo;

    cout << endl
         << "Digite o numero do livro que voce deseja devolver dentro do emprestimo:";
    int numLivro;
    cin >> numLivro;

    b.devolverLivro(b.getEmprestimos()[numEmprestimo], b.getEmprestimos()[numEmprestimo].getItens()[numLivro].getLivro());

    cout << endl
         << "Livro devolvido!"
         << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::pesquisarPublicacaoTitulo(const Biblioteca &b) const{
    cout << endl
         << "Digite o titulo da publicacao: ";
    string titulo;
    cin.ignore();
    getline(cin, titulo);
    cout << endl
         << "Estas foram as publicacoes encontradas:"
         << endl;

    b.pesquisarPublicacaoTitulo(titulo);

    cout << "Aperte a tecla ENTER para voltar ao menu principal" << endl;
    char enter = 'x';
    while (enter != '\n'){
        cin.get(enter);
    }

    cout << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::pesquisarLivroAutor(const Biblioteca &b) const{
    cout << endl
         << "Digite o nome do(s) autor(es): ";
    string autor;
    cin.ignore();
    getline(cin, autor);
    cout << endl
         << "Estes foram os livros encontrados:"
         << endl;

    b.pesquisarPublicacaoAutor(autor);

    cout << "Aperte a tecla ENTER para voltar ao menu principal" << endl;
    char enter = 'x';
    while (enter != '\n'){
        cin.get(enter);
    }

    cout << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::listarUsuarios(const Biblioteca &b) const{
    cout << endl
         << "Estes sao os usuarios da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getUsuarios().size(); i++){
        b.getUsuarios()[i].imprimeDados();
    }

    cout << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::listarPublicacoes(const Biblioteca &b) const{
    cout << endl
         << "Estas sao as publicacoes da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        b.getPublicacoes()[i].imprimeDados();
    }

    cout << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::listarLivros(const Biblioteca &b) const{
    cout << endl
         << "Estes sao os livros da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        Livro* l = dynamic_cast<Livro*>(&b.getPublicacoes()[i]);
        if (l) {
            b.getPublicacoes()[i].imprimeDados();
        }
    }

    cout << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::listarPeriodicos(const Biblioteca &b) const{
    cout << endl
         << "Estes sao os periodicos da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        Periodico* p = dynamic_cast<Periodico*>(&b.getPublicacoes()[i]);
        if (p) {
            b.getPublicacoes()[i].imprimeDados();
        }
    }

    cout << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}

void Interface::listarEmprestimos(const Biblioteca &b) const{
    cout << endl
         << "Estes sao os emprestimos da biblioteca:"
         << endl;
    
    for (int i = 0; i < b.getPublicacoes().size(); i++){
        b.getEmprestimos()[i].imprimeDados();
    }

    cout << endl
         << "Voltando ao menu principal..."
         << endl;

    this->mostrarMenu();
}
