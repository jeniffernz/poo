#include <iostream>

using namespace std;

/*
int soma (int n, int n2){
    return n + n2;
}

int subtrair (int n, int n2){
    return n - n2;
}

int multiplicar (int n, int n2){
    return n * n2;
}

int dividir (int n, int n2){
    return n / n2;
}

int resto (int n, int n2){
    return n % n2;
}

int main() {
    int n, n2, resultado = 0;
    char op;

    cout << "Digite um numero: ";
    cin >> n;

    cout << "Digite outro numero: ";
    cin >> n2;

    cout << "Escolha uma operacao (+, -, *, /, %): ";
    cin >> op;

    if (op == '+') {
        resultado = soma(n, n2);
    } 
    else if (op == '-') {
        resultado = subtrair(n, n2);
    } 
    else if (op == '*') {
        resultado = multiplicar(n, n2);
    } 
    else if (op == '/') {
        resultado = dividir(n, n2);
    } 
    else if (op == '%') {
        resultado = resto(n, n2);
    } 
    cout << "Resultado: " << resultado << endl;
    return 0;
}
*/

/*
int main(){
    int contador = 0;

    do {
        cout << "Valor de contador: " << contador << endl;
        contador++;
    }while (contador < 5);
}
*/

/*
int main(){

    for(int contador = 0; contador < 5 ; contador++){
        cout << "Dentro do for. Valor do contador: " << contador << endl;

        cout << "Fora do for: " << endl;
    }
}
*/

// Escreva um programa que utilize um laço while para fazer uma contagem regressiva de 10 até 1
/*
int main(){
    int contador = 10;

    do {
         cout << "Contagem Regressiva: " << contador << endl;
         contador++;
    }while (contador > 0);
}
*/

// Escreva um programa que peça ao ususário para digitar números inteiros.
// O programa deve continuar pedindo até que o número 0 seja digitado. Use while.
/*int main(){
    int num = 0;

    do{
        cout <<"Digite um numero: ";
        cin >> num;

    }while(num != 0);
}
*/

// Faça um programa que leia um número inteiro e imprima sua tabuada de 1 a 10 usando for.
/*
int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    for (int contagem = 0; contagem <= 10; contagem++){
        cout << num << "x" << contagem << "=" << num * contagem << endl;
    }
}
*/

// exercício propostos:
// - leia um inteiro e informe se é par ou ímpar.
/*
int main(){
    int num = 0;

    cout << "Digite um numero: ";
    cin >> num;

    if (num % 2 == 0){
        cout << "O numero " << num << " e PAR" << endl;
    }
    else{
        cout << "O numero " << num << " e IMAPR" << endl;
    }

    return 0;
}
*/

/*
-  leia notas (double) até que o usuário digite -1. 
   Exiba a média. Valide se houve ao menos uma nota

   int main()
{
	int contador = 0;
	double media = 0;
	double notas = 0;
	double nota = -2;
	
	do{
		cout << "Digite uma nota:";
		cin >> nota;
		
		if(nota > -1 ){

			contador++;
			notas += nota;
			media = notas / contador;
			cout << "A media e: " << media << endl;
			
			nota = -2;
		} 			
		
	}while(nota != -1);
	
	return 0;
}
*/

// - crie um menu com 3 opções: somar, subtrair e sair. 
// Use do while para repetir até escolher sair.

// - leia um número n e imprima a tabuada de 1 a 10.

// - leia um inteiro (pode ser negativo) e conte quantos
// dígitos ele possui.

// - implemente bool ehPrimo(int) e conte quantos números primos 
// há no intervalo [a,b].

// Exercicios dia 14/10.
/*
// - Leia a idade de uma pessoa e informe se ela é maior ou menor de idade.
int main(){
    int idade;
    string resultado;

    cout << "Digite sua idade: ";
    cin >> idade;

    if(idade >= 18){
        resultado = "Voce e maior de idade";
    }
    else{
        resultado = "Voce e menor de idade";
    }

    cout << "Resulrado: " << resultado << endl;

    return 0;
}
*/
/*
// - Escreva um programa que exiba uma contagem regressiva de 10 até 1, usando o laço while.
int main(){
    int num = 10;

    while(num < 11 and num > 0 ){
        cout << "Contagem Regressiva: " << num << endl;
        num = num -1;
    }

    return 0;
}
*/
/*
// - Peça ao usuário números até que ele digite 0. Mostre a soma total.
int main(){
    int num;
    int soma = 0;

    do{
        cout <<"Digite um numero ou 0 para parar: ";
        cin >> num;

        soma += num;
    } 
    
    while(num != 0);
        cout << "A soma total e: " << soma << endl;


    return 0;
}
*/
/*
// - Solicite um número e mostre sua tabuada de 1 a 10.
int main(){
    int num;

    cout << "Digite um numero: ";
    cin >>  num;

    for(int contagem = 0; contagem <= 10; contagem++){
        cout << num << "x" << contagem << " = " << num * contagem << endl;
    }

    return 0;
}
*/
/*
// - Leia 10 números e mostre quantos deles são positivos.
int main(){
    int num;
    int positivos = 0;

    for(int contagem = 0; contagem < 10; contagem++){
        cout << "Digite 10 numeros: ";
        cin >> num;

        if(num > 0)
        positivos++;
    }

    cout << "A quantidade de numeros positivos e: " << positivos << endl;

    return 0;
}
*/
/*
// - Leia notas até que o usuário digite uma nota negativa. Exiba a média das notas válidas.
int main(){
    float nota = 0;
    float soma = 0;
    float notas = 0;

        do{
            cout << "Digite uma nota ou negativo para parar: ";
            cin >> nota;

            if(nota >= 0){
                soma += nota;
                notas++;
            }
    }
        while(nota >= 0);
            if(notas > 0){
                float media = soma / notas;
                cout << "A media e: " << media << endl;
            }
            else{   
            }

    return 0;
}
*/
// - Mostre todos os números pares de 1 a 50 usando um laço for.

// - Crie um jogo simples: o programa define um número secreto entre 1 e 10 e o usuário deve adivinhar. Dê dicas se o número é maior ou menor.

// - Calcule a soma de todos os números ímpares entre 1 e 10