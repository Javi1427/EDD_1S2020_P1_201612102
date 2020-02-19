#include<iostream>
#include<conio.h>
#include<string.h>
#include<ListDouble.h>
using namespace std;

ListDouble *pito = new ListDouble();

void guardarCadena(string);
void insertar(char);
void insertDouble(string);

int main()
{
    string arr;
    int tamano = 0;

    cout << "cadena: ";
    getline(cin,arr);
    tamano = sizeof(arr);
    guardarCadena(arr);

    return 0;
}

void guardarCadena(string cadena)
{
    const char *p = cadena.c_str();
    while(*p && *p != '\0'){
            insertar(*p);
        p++;
    }
}

void insertar(char l){
    string letra;
    letra.push_back(l);

    pito->insertDouble(letra);
}


