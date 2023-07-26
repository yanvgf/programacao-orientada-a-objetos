#include "Interface.hpp"
#include "Biblioteca.hpp"

#include <iostream>

using namespace std;

int main(){
    Biblioteca b;
    Interface i;
    i.mostrarMenu();
    i.escolherOpcao(b);
}