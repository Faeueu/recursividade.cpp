#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 0){
        return 0;
    } else if(n == 1){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int num;

    cout << "Digite um numero para calcular o fibonacci: ";
    cin >> num;

    if (num < 0){
        cout << "Numero negativo e invalido!!";
    } else {
        int resultado = fibonacci(num);
        cout << "Fibonacci(" << num << ") = " << resultado << endl;
    }
    return 0;
}