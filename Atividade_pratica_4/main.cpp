#include "Agenda.hpp"

#include <iostream>

int main(){

    int qtd;
    cout << endl <<"Escreva o numero de pessoas que voce deseja colocar na agenda: ";
    cin >> qtd;
    Agenda a(qtd);
    cout << endl;

    cout <<  "Voce possui " << a.getQtd_Amigos() << " amigo(s) e " 
         << a.getQtd_Conhecidos() << " conhecido(s) na sua agenda." 
         << endl << endl;

    a.addInformacoes();
    a.imprimeAniversarios();
    a.imprimeEmail();
}