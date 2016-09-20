#pragma once

class SchoolBook : public Book
{
protected:
    char* Subject;
    int Grade;
    void Init(char*, int);
public:
    SchoolBook();
    SchoolBook(float price, char* title, char* author, char* subject, int grade);
    SchoolBook(const &SchoolBook);
    ~Book();

    char* GetSubject();
    void SetSubject(char*);

    int GetGrade();
    void SetGrade(int);
}
