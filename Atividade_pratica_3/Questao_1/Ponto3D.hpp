#ifndef PONTO3D_H
#define PONTO3D_H

#include "Ponto2D.hpp"

class Ponto3D: public Ponto2D{
    
    public:
        Ponto3D(double xx = 0, double yy = 0, double zz = 0): Ponto2D(xx, yy), z(zz) {};
        friend ostream& operator<< (ostream &op, const Ponto3D &p);
        Ponto3D& operator= (const Ponto2D &p);
        Ponto3D& operator= (const Ponto3D &p);
        void set(double nx = 0.0, double ny = 0.0, double nz=0.0) { Ponto2D::set(nx, ny); z = nz;}
        double get_z() { return z; }
            
    
    private:
        double z;
};  

#endif