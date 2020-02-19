#include "NodoListD.h"
/*
Este metodo es el constructor de la clase
*/
NodoListD::NodoListD(string letra1)
{
    this->letra = letra1;
    this->next = nullptr;
    this->backa = nullptr;
}

NodoListD::~NodoListD()
{
    //dtor
}

