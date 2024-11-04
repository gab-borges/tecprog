
#pragma once

#include <string>

class Departamento {
private:
    int id;
    std::string nome;

public:
    Departamento(int idU=0, std::string nomeU = "");
    ~Departamento();

    void setNome(std::string nomeU);
    std::string getNome();

    int getId();
};
