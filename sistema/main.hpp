
#pragma once

#include <iostream>
#include "pessoa.hpp"
#include "universidade.hpp"

class Principal {
private:
    Pessoa Einstein;
    Pessoa Newton;
    Universidade UTFPR;
    Universidade MIT;

public:
    Principal();
    void executar();
};
