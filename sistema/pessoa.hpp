
#pragma once

#include <string>
#include "universidade.hpp"

class Pessoa {
private:
    std::string nome;
    Universidade* uni;
    int idade;
    int diaN; int mesN; int anoN;

public:
    /* Métodos Básicos */
    Pessoa(int dia, int mes, int ano, std::string nomeU);
    Pessoa();
    ~Pessoa();

    /* Métodos Principais */
    void inicializa(int dia, int mes, int ano, std::string nomeU);

    void calcIdade(int diaAtual, int mesAtual, int anoAtual);
    int getIdade();

    void setNome(std::string nomeU);
    std::string getNome();

    void setUni(Universidade* uniU);
    std::string getUni();
};
