#include <iostream>
using namespace std;

int main() {
// 1. Pedir un numero al usuario
double numero;
cin >> numero;

// 2. Multiplicarlo por 2 
double doble = numero * 2;


// 3. Mostrar el resultado
cout << doble << endl;


cin >> numero;
double triple = numero * 3;
cout <<"El triple del numero es:" <<triple<< endl;

cin >> numero;
double cuadrado = numero * numero;
cout <<"El cuadrado del numero es:" <<cuadrado<< endl;

cin >> numero;
double fahrenheit = (numero * 9.0/5) + 32;
cout <<"La temperatura en fahrenheit es:" <<fahrenheit<< endl;

cin >> numero;
double area = 3.1416 * numero * numero;
cout <<"El area del circulo es:" <<area<< endl;

cin >> numero;
double mitad = numero / 2;
cout<< mitad << endl;
return 0;
}

