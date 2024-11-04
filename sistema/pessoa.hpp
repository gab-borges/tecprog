
#pragma once

#include <string>
#include "universidade.hpp"

class Pessoa {
private:
    int diaN;
    int mesN;
    int anoN;
    int idade;
    Universidade* uni;
    std::string nome;

public:
    /* Métodos Básicos */
    Pessoa(int dia, int mes, int ano, std::string nomeP);
    Pessoa();
    ~Pessoa();

    /* Métodos Principais */
    void inicializa(int dia, int mes, int ano, std::string nomeP);

    void calcIdade(int diaAtual, int mesAtual, int anoAtual);

    int getIdade();

    std::string getNome();

    void setUni(Universidade* uniP);

    std::string getUni();
};
