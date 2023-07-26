#ifndef PONTO2D_H
#define PONTO2D_H

#include <cmath>
#include <vector>

using namespace std;

class Ponto2D {

    private:
    double x;
    double y;
    int id;
    static vector<int> lista_id;
    int getNextId();

    public:
    Ponto2D(const double &_x = 0.0, const double &_y = 0.0);
    Ponto2D(const Ponto2D &p);
    ~Ponto2D();
    Ponto2D& operator= (const Ponto2D &p);
    void print() const;
    inline double distToOrig() const { return sqrt( x*x + y*y ); } 
    inline double distTo(const Ponto2D &p) const { return sqrt( (x-p.x)*(x-p.x) + (y-p.y)*(y-p.y) ); }
    void sumOf(const Ponto2D &p);
    Ponto2D sumOfWithReturn(const Ponto2D &p) const;
    Ponto2D& operator-- ();
    Ponto2D operator+ (const Ponto2D &p) const;

};

#endif