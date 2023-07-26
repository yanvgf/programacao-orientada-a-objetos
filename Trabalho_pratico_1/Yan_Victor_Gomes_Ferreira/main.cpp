//////////////////////////////////////////////////////////////////////////////////////////////
////        ~ Arquivo para teste da classe implementada no TP 1                           ////
////        ~ Comandos: c --> testa construtores da classe                                ////
////                    o --> testa operações da classe                                   ////
//////////////////////////////////////////////////////////////////////////////////////////////                  

#include "Matrix.hpp"
#include <fstream>
#include <iostream>

void testaConstrutoresEGetters (){
    int linhasA, linhasB, colunasA, colunasB;
    char b;
    cout << "Escreva o numero de linhas da matriz A: ";
    cin >> linhasA;
    cout << endl;
    cout << "Escreva o numero de colunas da matriz A: ";
    cin >> colunasA;
    cout << endl;
    Matrix<int> A(linhasA, colunasA);
    cout << "Escreva os elementos da matriz A (inteiros, separados por espaco): ";
    int a;
    for (int i = 1; i <= A.getLinhas(); i++){           
        for (int j = 1; j <= A.getColunas(); j++){
            cin >> a;
            A(i,j) = a;
        }
    }
    cout << endl;
    
    cout << "Escreva o numero de linhas da matriz B: ";
    cin >> linhasB;
    cout << endl;
    cout << "Escreva o numero de colunas da matriz B: ";
    cin >> colunasB;
    cout << endl;
    cout << "Escreva o elemento (do tipo caracter) que deve estar em todas as posições da matriz B: ";
    cin >> b;
    cout << endl << endl;
    cout << "Matriz B(numero de linhas, numero de colunas, caracter digitado)" << endl;
    cout << "Matriz B:" << endl;
    Matrix<char> B(linhasB, colunasB, b);
    cout << B;
    cout << endl << endl;

    cout << "Matriz C(Matriz A)" << endl;
    cout << "Matriz C:" << endl;
    Matrix<int> C(A);
    cout << C;
    cout << endl << endl;

    cout << "Matriz D eh a matriz do arquivo .txt 'myMatrix.txt'" << endl;
    cout << "Matriz D:" << endl;
    ifstream d("myMatrix.txt");
    Matrix<double> D(d);
    cout << D;
    cout << endl << endl;
}


void testaOperacoes (){
    int linhasA, colunasA, a;
    cout << "Escreva o numero de linhas da matriz A: ";
    cin >> linhasA;
    cout << endl;
    cout << "Escreva o numero de colunas da matriz A: ";
    cin >> colunasA;
    cout << endl;
    cout << "Escreva o elemento (do tipo int) que deve estar em todas as posições da matriz A: ";
    cin >> a;
    cout << endl << endl;
    cout << "Matriz A:" << endl;
    Matrix<int> A(linhasA, colunasA, a);
    cout << A;
    cout << endl << endl;

    int linhasB, colunasB, b;
    cout << "Escreva o numero de linhas da matriz B: ";
    cin >> linhasB;
    cout << endl;
    cout << "Escreva o numero de colunas da matriz B: ";
    cin >> colunasB;
    cout << endl;
    cout << "Escreva o elemento (do tipo int) que deve estar em todas as posições da matriz B: ";
    cin >> b;
    cout << endl << endl;
    cout << "Matriz B:" << endl;
    Matrix<int> B(linhasB, colunasB, b);
    cout << B;
    cout << endl << endl;

    
    cout << "A + B = ";
    try {
        Matrix<int> D = A+B;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    cout << "A += B --> A = ";
    try {
        Matrix<int> D = A+=B;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    cout << "A - B = ";
    try {
        Matrix<int> D = A-B;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    cout << "A -= B --> A = ";
    try {
        Matrix<int> D = A-=B;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    cout << "A * B = ";
    try {
        Matrix<int> D = A*B;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    cout << "A *= B --> A = ";
    try {
        Matrix<int> D = A*=B;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    cout << "~A --> A = ";
    try {
        Matrix<int> D = ~A;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    cout << "Digite um inteiro x qualquer: ";
    int x;
    cin >> x;
    cout << endl;

    cout << "A*=x = ";
    try {
        Matrix<int> D = A*=x;
        cout << endl << D;
    }
    catch (const ErroTamanho &e){
        cout << "Erro:" << e.msg << endl;
    }
    cout << endl << endl;

    bool y;
    y = A==B;
    cout << "A == B? Resposta: " << y;
    cout << endl << endl;

    y = A!=B;
    cout << "A != B? Resposta: " << y;
    cout << endl << endl;

    int linhasC, colunasC;
    cout << "Escreva o numero de linhas da matriz C: ";
    cin >> linhasC;
    cout << endl;
    cout << "Escreva o numero de colunas da matriz C: ";
    cin >> colunasC;
    cout << endl;
    cout << "Escreva os elementos da matriz C (caracteres, separados por espaco): ";
    try {
        Matrix<char> C(linhasC, colunasC);
        cin >> C;
        cout << endl << "Matriz C: " << endl << C;
    }
    catch (ErroTamanhoInvalido &e){
        cout << "Erro:" << e.msg << endl;
    }
}




int main() {
    char comando;
    while (cin >> comando){
        switch (comando){
        case 'c':
            try {
                testaConstrutoresEGetters();
            }
            catch(const ErroTamanhoInvalido &e){
                cout << "Erro:" << e.msg << endl;
            }
            break;
        
        case 'o':
            try {
                testaOperacoes();
            }
            catch(const ErroTamanhoInvalido &e){
                cout << "Erro:" << e.msg << endl;
            }
            break;
        }
    }
}