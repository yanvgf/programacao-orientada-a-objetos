#ifndef MATRIX_CPP
#define MATRIX_CPP

#include "Matrix.hpp"
#include <iostream>
#include <fstream>
#include <type_traits>

using namespace std; 

template <class T>         
Matrix<T>::Matrix():
    linhas(1),
    colunas(1)
{
    matriz = (T**) new T*[linhas];
    for (int i = 0; i <= (linhas - 1); i++){
        matriz[i] = (T*)new T[colunas]; 
    }

    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (colunas - 1); j++){
            matriz[i][j] = 0;
        }
    }
}

template <class T>
Matrix<T>::Matrix(int _linhas, int _colunas, const T &valor):
    linhas(_linhas),
    colunas(_colunas)
{
    if (_linhas < 1 || _colunas < 1) {
        throw ErroTamanhoInvalido();
    }
    matriz = (T**) new T*[linhas];
    for (int i = 0; i <= (linhas - 1); i++){
        matriz[i] = (T*)new T[colunas]; 
    }

    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (colunas - 1); j++){
            matriz[i][j] = valor;
        }
    }
}

template <class T>
Matrix<T>::Matrix(ifstream &arq){ 
    arq >> linhas >> colunas;
    if (linhas < 1 || colunas < 1) {
        throw ErroTamanhoInvalido();
    }
    matriz = (T**) new T*[linhas];
    for (int i = 0; i <= (linhas - 1); i++){
        matriz[i] = (T*)new T[colunas]; 
    }
    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (colunas - 1); j++){
            arq >> matriz[i][j];
        }
    }
}

template <class T>
Matrix<T>::Matrix(const Matrix<T> &m):
    linhas(m.linhas),
    colunas(m.colunas)
{
    matriz = (T**) new T*[linhas];
    for (int i = 0; i <= (linhas - 1); i++){
        matriz[i] = (T*)new T[colunas]; 
    }

    for (int i = 0; i <= (m.linhas - 1); i++){
        for (int j = 0; j <= (m.colunas - 1); j++){
            matriz[i][j] = m.matriz[i][j];
        }
    }
}

template <class T>
Matrix<T>::~Matrix(){
    delete matriz;
}

template <class T>
int Matrix<T>::getLinhas() const{
    return linhas;
}

template <class T>
int Matrix<T>::getColunas() const{
    return colunas;
}

template <class T>
T& Matrix<T>::get(int linha, int coluna) const{  
    if (linha < 1 || coluna < 1){
        throw ErroIndiceZero();
    }
    if (linha > linhas || coluna > colunas){
        throw ErroIndiceMaior();
    }
    return matriz[linha - 1][coluna - 1];           
}

template <class T>
T& Matrix<T>::operator()(const int &linha, const int &coluna) const { 
    if (linha < 1 || coluna < 1){
        throw ErroIndiceZero();
    }
    if (linha > linhas || coluna > colunas){
        throw ErroIndiceMaior();
    }
    return matriz[linha - 1][coluna - 1];                       
} 

template <class T>
T& Matrix<T>::operator()(const int &linha, const int &coluna){
    if (linha < 1 || coluna < 1){
        throw ErroIndiceZero();
    }
    if (linha > linhas || coluna > colunas){
        throw ErroIndiceMaior();
    }
    return matriz[linha - 1][coluna - 1];
}    

template <class T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T> &m){
    linhas = m.linhas;
    colunas = m.colunas;
    matriz = m.matriz;
    return *this;
}    

template <class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T> &m) const{
    if (m.linhas != linhas || m.colunas != colunas){
        throw ErroTamanho();
    }
    Matrix m2(linhas, colunas);                  
    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (colunas - 1); j++){
            m2.matriz[i][j] = matriz[i][j] + m.matriz[i][j];
        }
    }
    return m2;
}   

template <class T>
Matrix<T>& Matrix<T>::operator-=(const Matrix<T> &m){ 
    if (m.linhas != linhas || m.colunas != colunas){
        throw ErroTamanho();
    }
    for (int i = 0; i <= (linhas - 1); i++){      
        for (int j = 0; j <= (colunas - 1); j++){
            matriz[i][j] -= m.matriz[i][j];
        }
    }
    return *this;

}

template <class T>
Matrix<T> Matrix<T>::operator-(const Matrix<T> &m) const{  
    if (m.linhas != linhas || m.colunas != colunas){
        throw ErroTamanho();
    }
    Matrix m2(linhas, colunas);                     
    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (colunas - 1); j++){
            m2.matriz[i][j] = matriz[i][j] - m.matriz[i][j];
        }
    }
    return m2;
}

template <class T>
Matrix<T>& Matrix<T>::operator+=(const Matrix<T> &m){ 
    if (m.linhas != linhas || m.colunas != colunas){
        throw ErroTamanho();
    }
    for (int i = 0; i <= (linhas - 1); i++){    
        for (int j = 0; j <= (colunas - 1); j++){
            matriz[i][j] += m.matriz[i][j];
        }
    }
    return *this;
}

template <class T>
Matrix<T>& Matrix<T>::operator*=(const T &valor){  
    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (colunas - 1); j++){
            matriz[i][j] *= 2;
        }
    }
    return *this;
}

template <class T>
bool Matrix<T>::operator==(const Matrix<T> &m) const{  
    if (linhas != m.linhas || colunas != m.colunas){
        return 0;
    }
    else {
        for (int i = 0; i <= (m.linhas - 1); i++){
            for (int j = 0; j <= (m.colunas - 1); j++){
                if (matriz[i][j] != m.matriz[i][j]){
                    return 0;
                }
            }
        }
        return 1;
    }
}

template <class T>
bool Matrix<T>::operator!=(const Matrix<T> &m) const{ 
    if (linhas != m.linhas || colunas != m.colunas){
        return 1;
    }
    else {
        for (int i = 0; i <= (m.linhas - 1); i++){
            for (int j = 0; j <= (m.colunas - 1); j++){
                if (matriz[i][j] != m.matriz[i][j]){
                    return 1;
                }
            }
        }
        return 0;
    }
}

template <class T>
Matrix<T> Matrix<T>::operator~(){  
    Matrix t(colunas, linhas);
    for (int i = 0; i <= (linhas - 1); i++){           
        for (int j = 0; j <= (colunas - 1); j++){
            t.matriz[j][i] = matriz[i][j];            
        }
    }
    return t;  
}

template <class T>
Matrix<T> Matrix<T>::operator*(const Matrix<T> &m) const{   
    if (m.linhas != colunas){
        throw ErroTamanho();
    }
    Matrix m2(linhas, m.colunas);                 
    T soma{};
    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (m.colunas - 1); j++){
            soma = {};
            for (int k = 0; k <= (m.linhas - 1); k++) {
                soma += matriz[i][k] * m.matriz[k][j];
                m2.matriz[i][j] = soma;
            }
        }
    }
    return m2;
}

template <class T>
Matrix<T>& Matrix<T>::operator*=(const Matrix<T> &m){ 
    if (m.linhas != colunas){
        throw ErroTamanho();
    }
    T soma{};                                 
    Matrix aux(linhas, m.colunas);
    for (int i = 0; i <= (linhas - 1); i++){
        for (int j = 0; j <= (m.colunas - 1); j++){
            soma = {};
            for (int k = 0; k <= (m.linhas - 1); k++) {
                soma += matriz[i][k] * m.matriz[k][j];
                aux.matriz[i][j] = soma;
            }
        }
    }
    this->linhas = aux.linhas;
    this->colunas = aux.colunas;
    for (int i = 0; i <= (aux.linhas - 1); i++){           
        for (int j = 0; j <= (aux.colunas - 1); j++){
            matriz[i][j] = aux.matriz[i][j];            
        }
    } 
    return *this;
}

#endif