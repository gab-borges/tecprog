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

void Universidade::setDpto(Departamento* dptoU) {
    dptos.push_back(dptoU);

    dptoU->setUni(this);
}

void Universidade::printDptos() {
    for (auto it : dptos)
        std::cout << it->getNome() << std::endl;
}
