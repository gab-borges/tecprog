
#pragma once

#include <iostream>
#include "pessoa.hpp"
#include "universidade.hpp"
#include "departamento.hpp"

class Principal {
private:
    Pessoa Einstein;
    Pessoa Newton;

    Universidade UTFPR;
    Universidade MIT;

    Departamento DAINF;
    Departamento DAELT;
    Departamento DAEST;
    Departamento CSD;

public:
    Principal();
    void executar();
};
