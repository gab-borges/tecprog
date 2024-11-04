#include "departamento.hpp"

Departamento::Departamento(int idU, std::string nomeU) {
    id = idU;
    nome = nomeU;
}

Departamento::~Departamento() {
}

void Departamento::setNome(std::string nomeU) {
    nome = nomeU;
}

std::string Departamento::getNome() {
    return nome;
}

int Departamento::getId() {
    return id;
}
