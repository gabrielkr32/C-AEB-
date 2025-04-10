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


//002 armazenamento  = agora vamos guardar os dados e crurar as variaveis adicionais parar trablhar

int temperaturaKelvin;  //guardar o valor convertido
int pressaoAjustada;     // guardar um valor modificado pela variavel pressao
bool sistemasDeSegurancaAtivo; // verifica se o ssitema foi ativo

//003 processo de dados - operações aritimeticas com dados
temperaturaKelvin = temperatura + 273; //celsis para kelvin
pressaoAjustada = pressao * 2; //sumala a dobra de pressao por ajuste tecnico 


///04 condições para o sistema de segurança
if (temperatura > 100 && pressao < 5000) {
    sistemasDeSegurancaAtivo = true;

} else {
    sistemasDeSegurancaAtivo = false;
}

//05 saida de dados - mosntar os resultados para o operador do sistema

cout << "\n ====RELATORIO DO SISTEMA======\n";
cout << "Temperatura convertida: " << temperaturaKelvin << "K\n";
cout << "Pressão ajustada : " << pressaoAjustada << "Pascal\n";
cout << "Sistema de segurança: " << (sistemasDeSegurancaAtivo ? "Ativado" : "Desativado") << endl;

   return 0;

}
