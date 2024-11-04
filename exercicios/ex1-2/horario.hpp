
#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Horario {
private:
    int hora;
    int min;

public:
    Horario();
    Horario(int nHora, int nMin);
    ~Horario();

    int getHora() {return hora;}
    int getMin() {return min;}

    bool setHora(int nHora);
    bool setMin(int nMin);

    int calcularIntervalo(Horario h);
};
