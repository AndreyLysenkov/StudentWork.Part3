#pragma once
#include "printing.h"

class Book : public Printing
{
protected:
    char* author;
    void Init(const char*);
public:
    Book();
    Book(float price, char* title, char* author);
    Book(const Book&);
    ~Book();

    char* GetAuthor();
    void SetAuthor(char*);

    virtual void Show();
};
