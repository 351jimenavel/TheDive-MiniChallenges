#include <iostream>
#include <string> 
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>
#include <stdio.h>
#include <vector> 

using namespace std;

///////////// Ejercicios de Ana ////////////////
// 22. Escribir un programa que pida al usuario dos números y los sume. ✅

int main(){
    int numero1, numero2, suma;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;

    cout << "Ingresa el segundo numero: ";
    cin >> numero2;

    suma = numero1 + numero2;

    cout << "El resultado de la suma de los numeros ingresados es: " << suma;
}


// 23. Escribir un programa que ordene un array de enteros ✅
// Ordenamiento de burbuja

void clasificar(int numeros[], int tamanho);

int main(){
    int numeros[] = {100,69,9,1,4,50,43,-1,8,10,23};
    int tamanho = sizeof(numeros) / sizeof(int);
    
    clasificar(numeros, tamanho);

    for (int elementos : numeros){
        cout << elementos << " ";
    }
    
    return 0;
}

void clasificar(int numeros[], int tamanho){
    int temp; 
    for (int i=0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - i - 1;j++){
            if(numeros[j] > numeros[j+1]){
                temp = numeros[j];
                numeros[j]= numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }
}

// 24. Escribir un programa que determine si una cadena de caracteres ingresada por el usuario es un palíndromo ✅

int main(){
    string palabraUsuario, copia;

    cout << "Ingresa una palabra ";
    cin >> palabraUsuario;
    
    copia = palabraUsuario;
    reverse(copia.begin(), copia.end());
    
    if (palabraUsuario == copia){
        cout << "La palabra " << palabraUsuario << " es igual a que la invertida: " << copia <<endl;
    }else{
        cout << "La palabra " << palabraUsuario << " no es un palindromo.";
    }
}