#include "main.hpp"

Principal::Principal() {
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    UTFPR.setNome("Universidade Tecnológica Federal do Paraná");
    MIT.setNome("Massachusetts Institute of Technology");

    Einstein.setUni(&UTFPR);
    Newton.setUni(&MIT);

    executar();
}

void Principal::executar() {
    Einstein.calcIdade(3, 11, 2024);
    Newton.calcIdade(3, 11, 2024);

    std::cout << Einstein.getNome() << " tem "
        << Einstein.getIdade() << " anos. Trabalha em: "
        << Einstein.getUni() << std::endl;

    std::cout << Newton.getNome() << " tem "
        << Newton.getIdade() << " anos. Trabalha em: "
        << Newton.getUni() << std::endl;
}

int main() {
    Principal principal;

    return 0;
}
