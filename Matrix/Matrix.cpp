#include "Matrix.h"
#include <iostream>

Matrix::Matrix(int _n, int _m): n(_n), m(_m) {
    data = new int[_n * _m];
    
    for(int i = 0; i < _n * _m; i++){
        data[i] = i + 1;
    }
}

Matrix::~Matrix(){
    delete[] data;
}

void Matrix::print() const{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cout << " " <<data[n * i + j];
        }
        std::cout << "\n";
    }
}

int* Matrix::operator[](int idx){
    return &this->data[idx * n];
}

const int* Matrix::operator[](int idx) const{
    return &this->data[idx * n];
}
