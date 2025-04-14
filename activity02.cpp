//programa que ira ler um valor, calcular seus 5 sucessores


//estrutura de repeticao com teste no inico, é considerado a mais simpples
// 




#include <iostream> 
using namespace std;
int main() {
    int numero, cont = 1;
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    cout << "Sucessores: ";

    while (cont <=2) {                                 // repete uma condição do bloco quando uma paermanecer verdadeira
        cout << (numero + cont) << " ";                //caso nao tenha uma verdadeira, ela ira para fora do bloco de repetição
        cont++;                                         // para que o processo ocorra corretamente, é necessario que que a varialvel sofra
    }                                                     // alteracao durante a repeticao
}