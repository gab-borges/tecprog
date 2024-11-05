
#pragma once

#include <string>

class Universidade;

class Departamento {
private:
    std::string nome;
    Universidade* uni;
    int id;

public:
    Departamento(std::string nomeU = "");
    ~Departamento();

    void setNome(std::string nomeU);
    std::string getNome();

    void setUni(Universidade* uniU);
    std::string getUni();

    void setId(int idU);
    int getId();
};
