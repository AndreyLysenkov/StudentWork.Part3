#pragma once
#include "book.h"

class SchoolBook : public Book
{
protected:
    char* subject;
    int grade;
    void Init(const char*, int);
public:
    SchoolBook();
    SchoolBook(float price, char* title, char* author, char* subject, int grade);
    SchoolBook(const SchoolBook&);
    ~SchoolBook();

    char* GetSubject();
    void SetSubject(char*);

    int GetGrade();
    void SetGrade(int);

    virtual void Show();
};
