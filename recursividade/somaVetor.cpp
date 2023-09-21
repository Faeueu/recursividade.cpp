#include <iostream>
using namespace std;

int somaVetor(int vetor[], int tamanho){
    if(tamanho == 0){
        return 0;
    }

    return vetor[tamanho -1] + somaVetor(vetor, tamanho - 1);
}

int main()
{
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    if(tamanho <= 0){
        cout << "Tamanho do vetor deve ser maior que zero!!" << endl;
        return 1;
    }

    int vetor[tamanho];
    cout << "Digite os elementos do vetor: #";
    for(int i =0; i<tamanho; i++){
        cin >> vetor[i];
    }

    int resultado = somaVetor(vetor, tamanho);
    cout << "A soma dos elementos no vetor e: " << resultado << endl;

    return 0;
}