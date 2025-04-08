// Elabore um programa de computador que acesse e altere os dados armazenados na memoria utilizando
// as expressões aritmieticas, logicas e relacionais. 



// 001 pegar os valores do Sensor de temperatura e pressão

#include <iostream>
using namespace std;

int main() {
    //Essa sao as variaeis de armazenamento na memoria
    int temperatura; // temperadura media
    int pressao;     // pressão media em pascal

    cout << "Digirte a temperatura da nave (em C°): ";
    cin >> temperatura;

    cout << "Digite a pressão da cabine (Em Pascal): ";
    cin >> pressao;
}

//002 armazenamento  = agora vamos guardar os dados e crurar as variaveis adicionais parar trablhar

int temperaturaKelvin;  //guardar o valor convertido
int pressaoAjustada;     // guardar um valor modificado pela variavel pressao
bool sistemasDeSegurancaAtivo; // verifica se o ssitema foi ativo


//