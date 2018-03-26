#include <iostream>
#include <string>

using namespace std;

#pragma once

class Notebook {
private:    
    string surname;
    string date;
    string phone;
public:
    Notebook();
    Notebook(string surnme, string date, string phone);
    
    string GetSurname();
    string GetDate();
    string GetPhone();

    void SetSurname(string surname);
    void SetDate(string date);
    void SetPhone(string phone);

    void Input();
    void Print();
};