#include "printing.h"
#include "global.h"

Printing::Init(float _price, char* _title)
{
    this -> title = new char[MAX_STRING_SIZE];
    strcpy(name, _title);
    this -> price = _price;
}

Printing::Printing(float _price, char* _title)
{
    this -> Init(_price, _title);
}

Printing::Printing(const Library &obj)
{
    this -> Init(obj.title, obj.price);
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
    this->author = new char[MAX_STRING_SIZE];
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
    PrintKeyValuePair("   Price", this -> price);
    PrintKeyValuePair("   Title", this -> title);
    std::cout << std::endl;
}

void Printing::Add()
{
    this -> next = Printing::Top;
    Printing::Top = this;
}

void Printing::GetNext()
{
    return this -> next;
}

void Printing::Print()
{
    Printing* current = Printing::Top;
    Log("Printing list: ");
    for(int i = 0; current != NULL; current = current -> GetNext())
    {
        Log("--- element #", i);
        current -> Show();
        Log("--- end ---");
    }
}
