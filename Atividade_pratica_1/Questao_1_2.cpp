#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

vector<int> leVetor(){
    vector<int> vetorEntrada;
    int num;
    cout << "Escreva o vetor a ser comprimido (elementos separados por espaco): ";
    while (cin >> num && num >= 0) { vetorEntrada.push_back(num); }
    return(vetorEntrada);
}

void comprimeVetor(vector<int> vetorEntrada){
    vector<int> elementos;
    int elementoAnterior;
    
    cout << "Vetor comprimido: ";
    for ( auto i = vetorEntrada.begin(); i != vetorEntrada.end(); i++ ){
        int quantidade = 0;
        if(   find(elementos.begin(), elementos.end(), *i) == elementos.end() 
              or ( find(elementos.begin(), elementos.end(), *i) != elementos.end()
                  and elementoAnterior != *i)   ){
            elementos.push_back(*i);
            if (elementoAnterior != *i){
                for ( auto j = i; j != vetorEntrada.end(); j++ ) {
                    if ( *j == *i ) {
                        quantidade++;
                    }
                    else break;
                }
                cout << quantidade << " " << *(elementos.end() - 1) << " ";
                elementoAnterior = *i;
            }
        }
        
    }
    cout << endl;
}


int main(){
    comprimeVetor(leVetor());
}