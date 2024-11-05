
#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "departamento.hpp"

class Departamento;

class Universidade {
private:
    std::string nome;
    std::vector<Departamento*> dptos;

public:
    Universidade(std::string nomeU = "");
    ~Universidade();

    void setNome(std::string nomeU);
    std::string getNome();

    void setDpto(Departamento* dptoU);
    void printDptos();
};
