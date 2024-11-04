
#pragma once

#include <string>
#include "departamento.hpp"

class Universidade {
private:
    std::string nome;
    Departamento dpto;

public:
    Universidade(std::string nomeU = "");
    ~Universidade();

    void setNome(std::string nomeU);
    std::string getNome();

    void setNomeDpto(std::string nomeDpto);
    std::string getNomeDpto();
};
