#include "universidade.hpp"

Universidade::Universidade(std::string nomeU) {
    nome = nomeU;
}

Universidade::~Universidade() {
}

void Universidade::setNome(std::string nomeU) {
    nome = nomeU;
}

std::string Universidade::getNome() {
    return nome;
}