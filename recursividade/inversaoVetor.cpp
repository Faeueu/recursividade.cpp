#include <iostream>
using namespace std;

void vetorReverso(int vetor[], int inicio, int final){
    if(inicio >= final){
        return;
    }

    swap(vetor[inicio], vetor[final]);

    vetorReverso(vetor, inicio+1, final-1);

}

int main()
{
    int vetor[] = {1, 3, 16, 47, 77};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    cout << "Vetor original: ";
    for(int i = 0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    vetorReverso(vetor, 0, tamanho-1);
    cout << "Vetor invertido: ";
    for(int i = 0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}