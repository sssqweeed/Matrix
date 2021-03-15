#include <iostream>
#include "Matrix.h"


int main(int argc, const char * argv[]) {
    Matrix m;
    m.print();
    
    std::cout << m[1][1] << "\n";
    
    m[1][2] = 5;
    int x = m[2][3];
    std::cout << x << "\n";
    const Matrix mc;
    std::cout << mc[1][1];
    mc[1][1] = 100;
    mc.print();
    
    return 0;
}
