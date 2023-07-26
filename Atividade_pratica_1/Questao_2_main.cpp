//////////////////////////////////////////////////////////////////////////////////////////////
////        ~ Arquivo para teste da classe implementada na questao 2                      ////
////        ~ Comandos: s --> testa setters da classe (inserir valores para               ////
////                          dia, hora, minuto e segundo, nessa ordem,                   //// 
////                          separados por espaco)                                       ////
////                    m --> testa incremento/decremento de 1 segundo no tempo           ////
////                          (inserir valores para dia, hora, minuto e segundo,          ////
////                           nessa ordem, separados por espaco)                         ////
////                    p --> testa soma de tempos (inserir valores para dia, hora,       ////
////                          minuto e segundo, nessa ordem, separados por espaco,        ////
////                          para os tempos que se deseja somar)                         ////
//////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include "Questao_2_Contrato.hpp"

using namespace std;

void testaSetters(){
    Tempo *t1 = new Tempo();
    t1->setDia();
    t1->setHora();
    t1->setMin();
    t1->setSeg();
    cout << "Tempo = " << t1->getDia() << ":" << t1->getHora() << ":" << t1->getMin() << ":" << t1->getSeg() << endl;
    delete t1;
}

void testaMaisMenosSeg(){
    Tempo *t1 = new Tempo();
    t1->setDia();
    t1->setHora();
    t1->setMin();
    t1->setSeg();
    cout << "Tempo = " << t1->getDia() << ":" << t1->getHora() << ":" << t1->getMin() << ":" << t1->getSeg() << endl;
    t1->mais1segundo();
    cout << "Tempo + 1 seg = " << t1->getDia() << ":" << t1->getHora() << ":" << t1->getMin() << ":" << t1->getSeg() << endl;
    t1->menos1segundo();
    t1->menos1segundo();
    cout << "Tempo - 1 seg = " << t1->getDia() << ":" << t1->getHora() << ":" << t1->getMin() << ":" << t1->getSeg() << endl;
    delete t1;
}

void testaSoma(){
    Tempo *t1 = new Tempo();
    Tempo *t2 = new Tempo();
    t1->setDia();
    t1->setHora();
    t1->setMin();
    t1->setSeg();
    cout << "Tempo 1 = " << t1->getDia() << ":" << t1->getHora() << ":" << t1->getMin() << ":" << t1->getSeg() << endl;
    t2->setDia();
    t2->setHora();
    t2->setMin();
    t2->setSeg();
    cout << "Tempo 2 = " << t2->getDia() << ":" << t2->getHora() << ":" << t2->getMin() << ":" << t2->getSeg() << endl;
    t1->somaTempo(*t2);
    cout << "Tempo 1 + Tempo 2 = " << t1->getDia() << ":" << t1->getHora() << ":" << t1->getMin() << ":" << t1->getSeg() << endl;
    delete t1, t2;
}

int main(){

    char comando;
    while (cin >> comando){
        switch (comando){
        case 's':
            testaSetters();
            break;
        
        case 'm':
            testaMaisMenosSeg();
            break;
        
        case 'p':
            testaSoma();
            break;
        }
    }
}