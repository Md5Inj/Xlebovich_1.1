#include "Notebook.h"

Notebook::Notebook()
{
    this->surname = "";
    this->date = "";
    this->phone = "";
}

Notebook::Notebook(string surnme, string date, string phone)
{
    this->surname = surname;
    this->date = date;
    this->phone = phone;
}

string Notebook::GetSurname()
{
    return this->surname;
}

string Notebook::GetDate()
{
    return this->date;
}

string Notebook::GetPhone()
{
    return this->phone;
}

void Notebook::SetDate(string date)
{
    this->date = date;
}

void Notebook::SetSurname(string surname)
{
    this->surname = surname;
}

void Notebook::SetPhone(string phone)
{
    this->phone = phone;
}

void Notebook::Print()
{
    cout << "Surname: " << this->surname << endl
         << "Date: "    << this->date    << endl
         << "Phone: "   << this->phone   << endl;
}

void Notebook::Input()
{
    char c[30];
    cout << "Input surname: "; cin >> c;
    this->surname =  c;
    cout << "Input date: "; cin >> c;
    this->date = c;
    cout << "Input phone: "; cin >> c;
    this->phone = c;
}