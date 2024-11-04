#include "horario.hpp"

Horario::Horario() : hora(0), min(0) 
{
}

Horario::Horario(int nHora, int nMin) {
    setHora(nHora);
    setMin(nMin);
}

Horario::~Horario()
{
}

bool Horario::setHora(int nHora) {
    if (nHora >= 0 && nHora < 24) {
        hora = nHora;
        return true;
    }

    return false;
}

bool Horario::setMin(int nMin) {
    if (nMin >= 0 && nMin < 60) {
        min = nMin;
        return true;
    }

    return false;
}

int Horario::calcularIntervalo(Horario h) {
    int h1 = hora, m1 = min;
    int h2 = h.hora, m2 = h.min;

    int intervaloH = 0, intervaloM = 0;

    if (h2 >= h1) {
        intervaloH = h2 - h1;
    }

    else {
        intervaloH = (24-h1) + h2;
    }

    if (m2 >= m1) {
        intervaloM = m2 - m1;
    }

    else {
        intervaloM = (60-m1) + m2;
    }

    return intervaloH*60 + intervaloM;
}