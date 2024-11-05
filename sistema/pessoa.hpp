
#pragma once

#include <iostream>
#include <string>
#include "universidade.hpp"

class Pessoa {
private:
    std::string nome;
    int idade;
    int diaN; int mesN; int anoN;
    Universidade* uni;
    Departamento* dpto;
    int id;

public:
    /* Métodos Básicos */
    Pessoa(int dia, int mes, int ano, std::string nomeU="");
    Pessoa();
    ~Pessoa();

    /* Métodos Principais */
    void inicializa(int dia, int mes, int ano, std::string nomeU);
    void imprimirFicha();

    void calcIdade(int diaAtual, int mesAtual, int anoAtual);
    int getIdade();

    void setNome(std::string nomeU);
    std::string getNome();

    void setUni(Universidade* uniU);
    std::string getUni();

    void setDpto(Departamento* dptoU);
    std::string getDpto();

    void setId(int idU);
    int getId();
};
