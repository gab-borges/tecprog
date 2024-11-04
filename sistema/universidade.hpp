
#pragma once

#include <string>

class Universidade {
private:
    std::string nome;

public:
    Universidade(std::string nomeU = "");
    ~Universidade();

    void setNome(std::string nomeU);
    std::string getNome();
};
