#include <string.h>
#include "printing.h"
#include "global.h"

Printing* Printing::Top = NULL;

void Printing::Init(float _price, const char* _title)
{
    this -> title = new char[MAX_STRING_SIZE];
    strcpy(title, _title);
    this -> price = _price;
    this -> Add();
}

Printing::Printing(float _price, char* _title)
{
    this -> Init(_price, _title);
}

Printing::Printing(const Printing& obj)
{
    this -> Init(obj.price, obj.title);
}

Printing::Printing()
{
    this -> Init(DEFAULT_PRICE, DEFAULT_TITLE);
}

Printing::~Printing()
{
    delete title;
}

void Printing::SetTitle(char* _title)
{
    this -> title = new char[MAX_STRING_SIZE];
    strcpy(title, _title);
}

char* Printing::GetTitle()
{
    return this -> title;
}

void Printing::SetPrice(float _price)
{
    this -> price = _price;
}

float Printing::GetPrice()
{
    return this -> price;
}

void Printing::Show()
{
    NewLine();
    PrintKeyValuePair("   Price", this -> price);
    PrintKeyValuePair("   Title", this -> title);
}

void Printing::Add()
{
    Log("Adding");
    this -> next = NULL;
    if (Printing::Top != NULL)
        this -> next = Printing::Top;

    Printing::Top = this;
}

Printing* Printing::GetNext()
{
    return this -> next;
}

void Printing::Print()
{
    Printing* current = Printing::Top;
    Log("Printing list: ");
    for(int i = 0; (current != NULL); i++)
    {
        Log("--- element #", i);
        current -> Show();
        Log("--- end ---");
        current = current -> GetNext();
    }
}
