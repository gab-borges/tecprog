#include "departamento.hpp"
#include "universidade.hpp"

Departamento::Departamento(std::string nomeU) {
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

void Departamento::setUni(Universidade* uniU) {
    uni = uniU;
}

std::string Departamento::getUni() {
    return uni->getNome();
}

void Departamento::setId(int idU) {
    id = idU;
}

int Departamento::getId() {
    return id;
}
