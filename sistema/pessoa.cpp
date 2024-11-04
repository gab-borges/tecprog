#include "pessoa.hpp"

Pessoa::Pessoa(int dia, int mes, int ano, std::string nomeP) {
    inicializa(dia, mes, ano, nomeP);
}

Pessoa::Pessoa() {
    inicializa(0, 0, 0, "");
}

Pessoa::~Pessoa() {
}

void Pessoa::inicializa(int dia, int mes, int ano, std::string nomeP) {
    diaN = dia;
    mesN = mes;
    anoN = ano;
    nome = nomeP;

    uni = nullptr;
    idade = -1;
}

void Pessoa::calcIdade(int diaAtual, int mesAtual, int anoAtual) {
    idade = anoAtual - anoN;

    if (mesN < mesAtual)
        idade--;

    else if (mesN == mesAtual && diaN > diaAtual)
        idade--;
}

int Pessoa::getIdade() {
    return idade;
}

std::string Pessoa::getNome() {
    return nome;
}

void Pessoa::setUni(Universidade* uniP) {
    uni = uniP;
}

std::string Pessoa::getUni() {
    if (uni != nullptr)
        return uni->getNome();
    
    return "";
}