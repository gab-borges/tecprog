#include "main.hpp"

Principal::Principal() {
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    UTFPR.setNome("Universidade Tecnológica Federal do Paraná");
    MIT.setNome("Massachusetts Institute of Technology");

    DAINF.setNome("Departamento de Informática");
    DAELT.setNome("Departamento de Eletricidade");
    DAEST.setNome("Departamento de Estatística");
    CSD.setNome("Computer Science Department");

    UTFPR.setDpto(&DAINF);
    UTFPR.setDpto(&DAELT);
    UTFPR.setDpto(&DAEST);
    MIT.setDpto(&CSD);

    Einstein.setUni(&UTFPR);
    Newton.setUni(&MIT);
    Einstein.setDpto(&DAINF);
    Newton.setDpto(&CSD);

    executar();
}

void Principal::executar() {
    Einstein.calcIdade(3, 11, 2024);
    Newton.calcIdade(3, 11, 2024);

    Einstein.imprimirFicha();
    std::cout << "---------------------" << std::endl;
    Newton.imprimirFicha();
    std::cout << "---------------------" << std::endl;

    UTFPR.printDptos();
    std::cout << "---------------------" << std::endl;
    MIT.printDptos();
    std::cout << "---------------------" << std::endl;
}

int main() {
    Principal principal;

    return 0;
}
