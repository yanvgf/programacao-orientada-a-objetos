#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <fstream>

using namespace std;

template <class T>
class Matrix {

    private:
    T** matriz;
    int linhas;
    int colunas;

    public:
    Matrix();
    Matrix(int linhas, int colunas, const T &valor = 0.0);
    Matrix(ifstream &arquivo);
    Matrix(const Matrix &m);
    ~Matrix();

    int getLinhas() const;
    int getColunas() const;
    T& get(int linha, int coluna) const; 

    T& operator()(const int &linha, const int &coluna) const; 
    T& operator()(const int &linha, const int &coluna);    
    Matrix& operator=(const Matrix &m);
    Matrix operator+(const Matrix &m) const;
    Matrix& operator-=(const Matrix &m);
    Matrix operator-(const Matrix &m) const;
    Matrix& operator+=(const Matrix &m);
    Matrix operator~();
    Matrix& operator*=(const T &valor);
    Matrix operator*(const Matrix &m) const;
    Matrix& operator*=(const Matrix &m);
    bool operator==(const Matrix &m) const;
    bool operator!=(const Matrix &m) const;

    friend ostream& operator<<(ostream &stream, const Matrix &m){
        for (int i = 0; i <= (m.linhas - 1); i++){
            for (int j = 0; j <= (m.colunas - 1); j++){
                stream << m.matriz[i][j] << " ";
            }
            stream << endl;
        }
        return stream; 
    }

    friend istream& operator>>(istream &stream, Matrix &m){
        for (int i = 0; i <= (m.linhas - 1); i++){
            for (int j = 0; j <= (m.colunas - 1); j++){
                stream >> m.matriz[i][j];
            }
        }
        return stream;
    }

};

class ErroIndiceZero {      
    public:
    const char* msg;
    ErroIndiceZero(): msg(" Indice invalido (a matriz começa na linha 1 e coluna 1)."){}
};

class ErroIndiceMaior {      
    public:
    const char* msg;
    ErroIndiceMaior(): msg(" Indice acima do permitido pela matriz."){}
};

class ErroTamanhoInvalido {      
    public:
    const char* msg;
    ErroTamanhoInvalido(): msg(" Tamanho invalido (a matriz precisa ter mais de 0 linhas e mais de 0 colunas)."){}
};

class ErroTamanho {      
    public:
    const char* msg;
    ErroTamanho(): msg(" Os tamanhos das matrizes nao sao compativeis."){}
};

#include "Matrix.cpp"

#endif