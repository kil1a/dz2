#pragma once
#include<iostream>
using namespace std;
class phonebook
{
    char* FIO;
    int Homephone;
    int Mobilephone;
    int Workphone;
public:
    phonebook();
    phonebook(char* aFIO, int aHomephone, int aMobilephone, int aWorkphone);
    phonebook(const phonebook& aTelbook);
    phonebook operator=(const phonebook& aTelbook);
    void setFIO(char* aFIO);
    void setHomephone(int aHomephone);
    void setMobilephone(int aMobilephone);
    void setWorkphone(int aWorkphone);
    const char* getFIO()const;
    int getHomephone() const;
    int getMobilephone() const;
    int getWorkphone() const;
    ~phonebook();
    void show();
}; 