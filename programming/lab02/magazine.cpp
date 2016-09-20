#include "global.h"
#include "magazine.h"

void Magazine::Init(int _year, int _month)
{
    this -> year = _year;
    this -> month = _month;
}

Magazine::Magazine(float _price, char* _title, int _year, int _mounth)
    : Printing(_price, _title)
{
    this -> Init(_year, _mounth);
}

Magazine::Magazine(const Magazine& obj)
    : Printing(obj)
{
    this -> Init(obj.year, obj.month);
}

Magazine::Magazine()
    : Printing()
{
    this -> Init(DEFAULT_YEAR, DEFAULT_MONTH);
}

Magazine::~Magazine()
{   }

void Magazine::SetYear(int _year)
{
    this -> year = _year;
}

int Magazine::GetYear()
{
    return this -> year;
}

void Magazine::SetMonth(int _month)
{
    this -> month = _month;
}

int Magazine::GetMonth()
{
    return this -> month;
}

void Magazine::Show()
{
    Printing::Show();
    PrintKeyValuePair("   Year:", year);
    PrintKeyValuePair("   Month:", month);
}
