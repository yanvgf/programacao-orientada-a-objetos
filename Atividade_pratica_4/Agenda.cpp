#include "Agenda.hpp"

#include <iostream>
#include <algorithm>
#include <ctime>

Agenda::Agenda(const int &qtd){
    int seletor;
    int max = 3, min = 1;
    srand((unsigned int) time (NULL));
    for (int i = 0; i < qtd; i++) {
        seletor = (rand()%(max - min)) + min;
        if (seletor == 1){
            Amigo *a = new Amigo;
            v.push_back(a);
            qtd_Amigos++;
        }
        else if (seletor == 2){
            Conhecido *c = new Conhecido;
            v.push_back(c);
            qtd_Conhecidos++;
        }
    }
}

void Agenda::addInformacoes(){
    int contadorAmigo = 1, contadorConhecido = 1;
    for (auto i:v) {
        Amigo* a = dynamic_cast<Amigo*>(i);
        Conhecido* c =  dynamic_cast<Conhecido*>(i);
        if (a){
            string nome, aniversario;
            int idade;
            cout << "Digite o nome do seu " << contadorAmigo << "o amigo: ";
            cin >> nome;
            a->setNome(nome);
            cout << "Digite a idade do seu amigo: ";
            cin >> idade;
            a->setIdade(idade);
            cout << "Digite a data de aniversario do seu amigo: ";
            cin >> aniversario;
            a->setAniv(aniversario);
            *i = *a;
            cout << endl;
            contadorAmigo++;
        }
        if (c){
            string nome, email;
            int idade;
            cout << "Digite o nome do seu " << contadorConhecido << "o conhecido: ";
            cin >> nome;
            c->setNome(nome);
            cout << "Digite a idade do seu conhecido: ";
            cin >> idade;
            c->setIdade(idade);
            cout << "Digite o email do seu conhecido: ";
            cin >> email;
            c->setEmail(email);
            *i = *c;
            cout << endl;
            contadorConhecido++;
        }
    }
}

void Agenda::imprimeAniversarios() const{
    cout << "***** Aniversarios *****" << endl;
    for (auto i:v) {
        Amigo* a = dynamic_cast<Amigo*>(i);
        if (a){
            cout << a->getNome() << " (" << a->getIdade() << " ano(s))" << ": " << a->getAniv() << endl;
        }
    }
    cout << endl;
}

void Agenda::imprimeEmail() const{
    cout << "***** Emails *****" << endl;
    for (auto i:v) {
        Conhecido* c = dynamic_cast<Conhecido*>(i);
        if (c){
            cout << c->getNome() << " (" << c->getIdade() << " ano(s))" << ": " << c->getEmail() << endl;
        }
    }
    cout << endl;
}