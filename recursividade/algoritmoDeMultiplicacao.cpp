#include <iostream>
using namespace std;

int multiplicacao(int a, int b){
    if (b == 0){
        return 0;
    }

    if (b == 1){
        return a;
    }else{
        return a + multiplicacao(a,b-1);
    }
}

int main()
{
    int num1;
    int num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    int resultado = multiplicacao(num1, num2);
    cout << "Resultado da multiplicacao e: " << resultado << endl;

    return 0;
}