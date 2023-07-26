#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    
    cout << "Escreva o nome do seu arquivo (nao se esqueca do '.txt'): ";
    string nomeArq;
    cin >> nomeArq;

    fstream arquivo;
    string linha;
    arquivo.open(nomeArq);

    if (arquivo.is_open()){
        int tamanho;
        int numEspacos = 0;
        while (getline(arquivo,linha)){
            for (int i = 0; i <= linha.length(); i++){
                if (linha[i] == ' '){
                    numEspacos++;
                }
            }
        }
        cout << "Numero de espacos = " << numEspacos << endl;
    }
    else {
        cout << "Nao foi possivel abrir o arquivo." << endl;
    }

    arquivo.close();
}