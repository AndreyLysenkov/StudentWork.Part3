#include "magazine.h"

Magazine::Init(int _year, int _month)
{
    this -> year = _year;
    this -> mounth = _mounth;
}

Magazine::Magazine(float _price, char* _title, int _year, int _mounth)
    : Printing(_price, _title)
{
    this -> Init(_year, _mounth);
}

Magazine::Magazine(const Magazine& obj)
{
    this -> Init(obj.year, obj.mounth);
}

Magazine::Magazine()
{
    this -> Init(DEFAULT_YEAR, DEFAULT_MOUNTH);
}

Magazine::~Magazine()
{   }

void Magazine::SetYear(int _year)
{
    this -> year = _year;
}

float Magazine::GetYear()
{
    return this -> year;
}

void Magazine::SetMounth(int _mounth)
{
    this -> mounth = _mounth;
}

float Magazine::GetMounth()
{
    return this -> mounth;
}
