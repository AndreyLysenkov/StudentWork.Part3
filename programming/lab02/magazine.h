#include "printing.h"
#pragma once

class Magazine : public Printing
{
protected:
    int year;
    int month;
    void Init(int year, int mounth);
public:
    Magazine();
    Magazine(float price, char* title);
    Magazine(const Magazine&);
    ~Magazine();

    int GetYear();
    void SetYear(int);

    int GetMonth();
    void SetMonth(int);
};
