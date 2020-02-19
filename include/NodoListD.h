#include<string>
#ifndef NODOLISTD_H
#define NODOLISTD_H

using namespace std;

class NodoListD
{
    public:
        NodoListD(string);
        virtual ~NodoListD();
        string letra;
        NodoListD *next;
        NodoListD *backa;

    protected:

    private:

};

#endif // NODOLISTD_H
