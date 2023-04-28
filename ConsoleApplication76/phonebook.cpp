#include "phonebook.h"
#include <string.h>
#include <iostream>
using namespace std;
phonebook::phonebook()
{
    FIO = NULL;
    Homephone = 0;
    Mobilephone = 0;
    Workphone = 0;
}

phonebook::phonebook(char* aFIO, int aHomephone, int aMobilephone, int aWorkphone)
{
    if (aFIO && strlen(aFIO)) {
        FIO = new char[strlen(aFIO) + 1];
        strcpy_s(FIO, strlen(aFIO) + 1, aFIO);
    }
    else {
        FIO = NULL;
    }
    Homephone = aHomephone;
    Mobilephone = aMobilephone;
    Workphone = aWorkphone;
}

phonebook::phonebook(const phonebook& aTelbook)  // ŒÕ—“–” “Œ–  Œœ»–Œ¬¿Õ»ﬂ
{
    if (aTelbook.FIO && strlen(aTelbook.FIO)) {
        FIO = new char[strlen(aTelbook.FIO) + 1];
        strcpy_s(FIO, strlen(aTelbook.FIO) + 1, aTelbook.FIO);
    }
    Homephone = aTelbook.Homephone;
    Mobilephone = aTelbook.Mobilephone;
    Workphone = aTelbook.Workphone;
}

phonebook phonebook:: operator =(const phonebook& aTelbook) //ÓÔÂ‡ÚÓ ÔËÒ‚‡Ë‚‡ÌËˇ
{
    if (aTelbook.FIO && strlen(aTelbook.FIO)) {
        delete[] FIO;
        FIO = new char[strlen(aTelbook.FIO) + 1];
        strcpy_s(FIO, strlen(aTelbook.FIO) + 1, aTelbook.FIO);
    }
    Homephone = aTelbook.Homephone;
    Mobilephone = aTelbook.Mobilephone;
    Workphone = aTelbook.Workphone;
    return *this;
}

void phonebook::setFIO(char* aFIO)
{
    if (aFIO && strlen(aFIO)) {
        delete[] FIO;
        FIO = new char[strlen(aFIO) + 1];
        strcpy_s(FIO, strlen(aFIO) + 1, aFIO);
    }
}

void phonebook::setHomephone(int aHomephone)
{
    Homephone = aHomephone;
}

void phonebook::setMobilephone(int aMobilephone)
{
    Mobilephone = aMobilephone;
}

void phonebook::setWorkphone(int aWorkphone)
{
    Workphone = aWorkphone;
}

const char* phonebook::getFIO() const
{
    return FIO;
}

int phonebook::getHomephone() const
{
    return Homephone;
}

int phonebook::getMobilephone() const
{
    return Mobilephone;
}

int phonebook::getWorkphone() const
{
    return Workphone;
}

phonebook::~phonebook()
{
    delete[] FIO;
}

void phonebook::show()
{
    cout << "FIO ABONENTA:  " << FIO << endl;
    cout << " Homephone:      " << Homephone << endl;
    cout << "Mobilephone:       " << Mobilephone << endl;
    cout << "Workphone:    " << Workphone << endl;
}