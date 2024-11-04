#include "horario.hpp"

class Principal {
private:
    Horario x1, x2;

public:
    Principal() {
        int h1, m1;
        int h2, m2;
        int error = 0;
        
        do {
            cout << "Insira hora e minuto 1: " << endl;
            cin >> h1 >> m1;

            error = !x1.setHora(h1) || !x1.setMin(m1);

            if (error)
                cout << "ERRO: Horário inválido!" << endl;
        } while (error);

        do {
        cout << "Insira hora e minuto 2: " << endl;
        cin >> h2 >> m2;

        error = !x2.setHora(h2) || !x2.setMin(m2); 
        
        if (error)
            cout << "ERRO: Horário inválido!" << endl;
        } while (error);
    }

    void executar() {
        int intervalo = x1.calcularIntervalo(x2);

        if (intervalo > 12*60)
            cout << "R$ 33,00" << endl;

        else if (intervalo >= 3*60)
            cout << "R$ " << 4.50+0.75*(intervalo-3.0*60)/15 << endl;

        else
            cout << "R$ 4,50" << endl;
    }
};


int main() {
    Principal p;

    p.executar();

    return 0;
}