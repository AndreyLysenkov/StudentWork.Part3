#pragma once
#include "printing.h"

class Magazine : public Printing
{
protected:
    int year;
    int month;
    void Init(int year, int month);
public:
    Magazine();
    Magazine(float price, char* title, int year, int month);
    Magazine(const Magazine&);
    ~Magazine();

    int GetYear();
    void SetYear(int);

    int GetMonth();
    void SetMonth(int);
};
