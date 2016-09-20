#pragma once

class Book
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
}