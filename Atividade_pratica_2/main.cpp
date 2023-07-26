#include "Ponto2D.hpp"
#include <iostream>


using namespace std;

int main(){
    Ponto2D p1;
    Ponto2D p2(10.0,20.0);
    Ponto2D p3(p2);
    Ponto2D p4 = p1;

    p1.print();
    p2.print();
    p3.print();
    p4.print();

    cout << endl << endl;

    double a, b, c, d;

    a = p1.distToOrig();
    b = p2.distToOrig();
    c = p3.distToOrig();
    d = p4.distToOrig();

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    cout << endl << endl;

    a = p1.distTo(p2);
    b = p2.distTo(p3);
    c = p3.distTo(p4);
    d = p4.distTo(p1);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    cout << endl << endl;

    p1.sumOf(p2);
    p2.sumOf(p3);
    p3.sumOf(p4);
    p4.sumOf(p1);

    p1.print();
    p2.print();
    p3.print();
    p4.print();

    cout << endl << endl;

    p3 = p1.sumOfWithReturn(p2);
    p4 = p2.sumOfWithReturn(p3);

    p3.print();
    p4.print();

    cout << endl << endl;

    --p3;
    --p4;

    p3.print();
    p4.print();

    cout << endl << endl;

    p1 = p3 + p4;
    p2 = p4 = p3;

    p1.print();
    p2.print();

}