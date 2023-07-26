#include <iostream>
#include "Questao_2_Contrato.hpp"

using namespace std;

Tempo::Tempo(int dia, int hora, int min, int seg){
    this->dia = dia;
    this->hora = hora;
    this->min = min;
    this->seg = seg;
    this->checaConsistencia();
}   

Tempo::~Tempo(){
}

void Tempo::checaConsistencia(){
    if(this->seg < 0){
        this->min -= 1 - (this->seg)/60;
        this->seg += 59 - (this->seg)%60;
    }
    if(this->min < 0){
        this->hora -= 1 - (this->min)/60;
        this->min += 59 - (this->min)%60;
    }
    if(this->hora < 0){
        this->dia -= 1 - (this->hora)/24;
        this->hora += 59 - (this->hora)%24;
    }

    if(this->seg >= 60){
        this->min += (this->seg)/60;
        this->seg = (this->seg)%60;
    }
    if(this->min >= 60){
        this->hora += (this->min)/60;
        this->min = (this->min)%60;
    }
    if(this->hora >= 24){
        this->dia += (this->hora)/24;
        this->hora = (this->hora)%24;
    }
}

void Tempo::somaTempo(Tempo t){
    this->dia += t.getDia();
    this->hora += t.getHora();
    this->min += t.getMin();
    this->seg += t.getSeg();
    this->checaConsistencia();
}

int Tempo::getDia(){
    return(this->dia);
}

int Tempo::getHora(){
    return(this->hora);
}

int Tempo::getMin(){
    return(this->min);
}

int Tempo::getSeg(){
    return(this->seg);
}

void Tempo::setDia(){
    int dia;
    cin >> dia;
    this->dia = dia;
    this->checaConsistencia();
}

void Tempo::setHora(){
    int hora;
    cin >> hora;
    this->hora = hora;
    this->checaConsistencia();
}

void Tempo::setMin(){
    int min;
    cin >> min;
    this->min = min;
    this->checaConsistencia();
}

void Tempo::setSeg(){
    int seg;
    cin >> seg;
    this->seg = seg;
    this->checaConsistencia();
}

void Tempo::mais1segundo(){
    this->seg += 1;
    this->checaConsistencia();
}

void Tempo::menos1segundo(){
    this->seg -= 1;
    this->checaConsistencia();
}