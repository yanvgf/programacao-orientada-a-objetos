#ifndef CONHECIDO_H
#define CONHECIDO_H

#include "Pessoa.hpp"

class Conhecido: public Pessoa{
    private:
    string email;

    public:
    Conhecido(): email("Indefinido"){}
    virtual ~Conhecido(){}
    string getEmail() const{ return email; }
    void setEmail(const string &_email){ email = _email; }
};

#endif