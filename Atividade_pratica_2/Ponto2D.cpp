#include "Ponto2D.hpp"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Ponto2D::lista_id;

int Ponto2D::getNextId(){
    int aux_id = rand()%1001;
    while (find(lista_id.begin(), lista_id.end(), aux_id) != lista_id.end()){
        aux_id = rand()%1001;
    }
    return aux_id;
}

Ponto2D::Ponto2D(const double &_x, const double &_y): x(_x), y(_y) {
    id = getNextId();
    lista_id.push_back(id);
}

Ponto2D::Ponto2D(const Ponto2D &p): x(p.x), y(p.y) {
    id = getNextId();
    lista_id.push_back(id);
}

Ponto2D::~Ponto2D(){   
    lista_id.erase(find(lista_id.begin(),lista_id.end(),id));
}

Ponto2D& Ponto2D::operator= (const Ponto2D &p){
    x = p.x;
    y = p.y;
    return(*this);       
}

void Ponto2D::print() const {
    cout << "(" << this->x << "," << this->y << ")" << endl;
}

void Ponto2D::sumOf(const Ponto2D &p){
    x += p.x;
    y += p.y;
}

Ponto2D Ponto2D::sumOfWithReturn(const Ponto2D &p) const{
    Ponto2D p3(x+p.x, y+p.y);
    return(p3);
}

Ponto2D& Ponto2D::operator-- (){
    x--;
    y--;
    return(*this);
}
    
Ponto2D Ponto2D::operator+ (const Ponto2D &p) const{
    Ponto2D p3(x+p.x, y+p.y);
    return(p3);
}
