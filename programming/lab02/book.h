#pragma once

class Book : public Printing
{
protected:
    char* author;
    void Init(char*);
public:
    Book();
    Book(float price, char* title, char* author);
    Book(const &Book);
    ~Book();

    char* GetAuthor();
    void SetAuthor(char*);
};
