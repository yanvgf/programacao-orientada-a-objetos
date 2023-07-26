#ifndef TEMPO_H
#define TEMPO_H

class Tempo {
    private:
    int dia,
        hora,
        min,
        seg;

    public:
    Tempo(int dia = 0, int hora = 0, int min = 0, int seg = 0);
    ~Tempo();
    void checaConsistencia();
    void somaTempo(Tempo t);
    int getDia();
    int getHora();
    int getMin();
    int getSeg();
    void setDia();
    void setHora();
    void setMin();
    void setSeg();
    void mais1segundo();
    void menos1segundo();
};

#endif