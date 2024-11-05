#include "disciplina.hpp"

Disciplina::Disciplina(std::string nomeU) {
    nome = nomeU;
}

Disciplina::~Disciplina() {
}

void Disciplina::setNome(std::string nomeU) {
    nome = nomeU;
}

std::string getNome() {
    return nome;
}
