#include "magazine.h"

Magazine::Init(int _year, int _month)
{
    this -> year = _year;
    this -> mounth = _mounth;
}

Magazine::Magazine(float _price, char* _title, int _year, int _mounth)
    : base(_price, _title)
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
class Magazine : Printing
{
protected:
    int year;
    int month;
    void Init(int year, int mounth);
public:
    Magazine();
    Magazine(float price, char* title);
    Magazine(const &Magazine);
    ~Magazine();

    int GetYear();
    void SetYear(int);

    int GetMonth();
    void SetMonth(int);
};
