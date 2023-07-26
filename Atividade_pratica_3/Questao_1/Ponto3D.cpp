#include "Ponto3D.hpp"

ostream& operator<< (ostream &op, const Ponto3D &p){
    op << endl;
    op << "x = " << p.get_x() << endl;
    op << "y = " << p.get_y() << endl;
    op << "z = " << p.z << endl;
    return op;
}

Ponto3D& Ponto3D::operator= (const Ponto2D &p){
    set( p.get_x(), p.get_y() );
    return *this;
}

Ponto3D& Ponto3D::operator= (const Ponto3D &p){
    set( p.get_x(), p.get_y(), p.z );
    return *this;
}
            