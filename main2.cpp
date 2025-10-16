#include <iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

// Exercicio dia 16\10 
// - Calcule a soma de todos os números impares entre 1 a 100.
/*
int main() {
    int soma = 0;

    for (int i = 1; i < 100; i += 2) {
        soma += i;
    }

    cout << "A soma dos numeros impares de 1 a 100 e: " << soma << endl;

    return 0;
}
*/

/* - Crie um jogo simples: o programa define um número secreto entre 1 e 10 e o usuario deve advinhar.
Dê dicas se o numero é maior ou menor.
int main(){
    int numsecreto, palpite;
    
    srand(time(0));
    numsecreto = rand() % 10 + 1; 

    cout << "Tente advinhar o numero secreto: \n";

    do{
        cout << "Tente um palpite: ";
        cin >> palpite;

        if(palpite > numsecreto){
            cout << "O numero secreto e menor!" << endl;
        }
        else if(palpite < numsecreto){
            cout << "O numero secreto e maior!" << endl;
        }
        else{
            cout << "Voce acertou!" << endl;
        }
    }
    while(palpite != numsecreto);

    return 0;
}
*/

// - Mostre todos os números pares de 1 a 50 usando um laço for.
/*
int main(){

    cout << "Todos os numeros pares de 1 a 50:\n ";

    for(int i = 2; i <= 50; i += 2){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
*/