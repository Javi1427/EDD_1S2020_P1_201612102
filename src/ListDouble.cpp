#include "ListDouble.h"
#include<iostream>
ListDouble::ListDouble()
{
    //ctor
    firstdouble = nullptr;
    latestdouble = nullptr;
}

ListDouble::~ListDouble()
{
    //dtor
}
void ListDouble::insertDouble(string cadena1){
    NodoListD* nuevo = new NodoListD(cadena1);

    if(firstdouble == NULL){
        firstdouble = nuevo;
        firstdouble->next = NULL;
        firstdouble->backa = NULL;
        latestdouble = firstdouble;
    }else{
        latestdouble->next = nuevo;
        nuevo->next = NULL;
        nuevo->backa = latestdouble;
        latestdouble = nuevo;
    }
    cout <<"Nodo ingresado: "<<cadena1<<endl;
}
