#include "List.h"

template <typename T>
void swap(T *f, T *s)
{
    T temp = *f;
    *f = *s;
    *s = temp;
}

List::List()
{

}

Iter List::GetFromSurname(string surname)
{
    for (auto i = this->list.begin(); i != this->list.end(); i++)
    {
        if ((*i).GetSurname() == surname)
            return i;
    }
}

Iter List::GetFromDate(string date)
{
    for (auto i = this->list.begin(); i != this->list.end(); i++)
    {
        if ((*i).GetDate() == date)
            return i;
    }
}

Iter List::GetFromPhone(string phone)
{
    for (auto i = this->list.begin(); i != this->list.end(); i++)
    {
        if ((*i).GetPhone() == phone)
            return i;
    }
}

void List::Add()
{
    Notebook n;
    n.Input();

    this->list.push_back(n);
}

void List::Remove(string surname)
{
    this->list.erase(this->GetFromSurname(surname));
}

void List::Sort(int when)
{
    int n = this->list.size();
    for (int i = 0; i < n-1; i++)      
        for (int j = 0; j < n-i-1; j++) 
        {
            if (!when)
            {
                if (this->list[j].GetSurname() > this->list[j+1].GetSurname())
                    swap(&this->list[j], &this->list[j+1]);
            } else if (when)
            {
                if (this->list[j].GetDate() > this->list[j+1].GetDate())
                    swap(&this->list[j], &this->list[j+1]);               
            } else if (when == 2)
            {
                if (this->list[j].GetPhone() > this->list[j+1].GetPhone())
                    swap(&this->list[j], &this->list[j+1]);                
            }
        }
}

void List::Print()
{
    for(auto var : this->list)
    {
        var.Print();
    }
}