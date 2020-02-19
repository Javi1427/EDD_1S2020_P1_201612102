#ifndef LISTDOUBLE_H
#define LISTDOUBLE_H
#include<NodoListD.h>

class ListDouble
{
    public:
        ListDouble();
        virtual ~ListDouble();
        NodoListD *firstdouble;
        NodoListD *latestdouble;
        void insertDouble(string);

    protected:

    private:
};

#endif // LISTDOUBLE_H
