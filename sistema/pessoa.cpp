#include "pessoa.hpp"

Pessoa::Pessoa(int dia, int mes, int ano, std::string nomeU) {
    inicializa(dia, mes, ano, nomeU);
}

Pessoa::Pessoa() {
    inicializa(0, 0, 0, "");
}

Pessoa::~Pessoa() {
}

void Pessoa::inicializa(int dia, int mes, int ano, std::string nomeU) {
    diaN = dia;
    mesN = mes;
    anoN = ano;
    nome = nomeU;

    uni = nullptr;
    idade = -1;
}

void Pessoa::imprimirFicha() {
    std::cout <<
    "Nome: " << nome << std::endl <<
    "Idade: " << idade << std::endl <<
    "Universidade: " << uni->getNome() << std::endl <<
    "Departamento: " << dpto->getNome() << std::endl;
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

void Pessoa::setUni(Universidade* uniU) {
    uni = uniU;
}

std::string Pessoa::getUni() {
    if (uni != nullptr)
        return uni->getNome();
    
    return "";
}

void Pessoa::setDpto(Departamento* dptoU) {
    dpto = dptoU;
}

std::string Pessoa::getDpto() {
    return dpto->getNome();
}

void Pessoa::setId(int idU) {
    id = idU;
}

int Pessoa::getId() {
    return id;
}
