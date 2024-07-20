#include <iostream>

using namespace std;

int main() {
    int num1, num2, resultado;
    float div;
    char op;

    cout << "Digite o primeiro número:";
    cin >> num1;
    cout << "Digite o segundo numero:";
    cin >> num2;
    cout << "Digite a operacao:";
    cin >> op;

    switch(op) {
        case '+':
            resultado = num1 + num2;
            cout << "Soma:" << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Subtracao:" << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Multiplicacao:" << resultado << endl;
            break;
        case '/':
            if(num2 != 0){
            div = (float) num1 / num2;
            cout << "Divicao:" << div << endl;
            } else {
                cout << "Divicao por 0 !" << endl;
            }
            break;
        default:
            cout << "Operacao inexistenete !" << endl;
    }

    return(0);
}
