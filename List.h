#include <iostream>
#include <vector>
#include "Notebook.h"
#define Iter vector<Notebook>::iterator

using namespace std;

#pragma once

class List {
private:
    vector<Notebook> list;
public:
    List();
    Iter GetFromSurname(string surname);
    Iter GetFromDate(string date);
    Iter GetFromPhone(string phone);

    void Add();
    void Remove(string surname);

    void Sort(int when); // 0 - surname, 1 - date, 2 - phone
    void Print();
};