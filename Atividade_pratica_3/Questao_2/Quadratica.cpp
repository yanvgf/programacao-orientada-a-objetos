#include "Quadratica.hpp"

double Quadratica::func(const double &input) const{
   return a*pow(input,2) + b*input + c;
}

