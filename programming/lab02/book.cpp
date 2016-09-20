#include "book.h"


Book::Init(char* _author)
{
    this -> author = new char[MAX_STRING_SIZE];
    strcpy(author, _author);
}

Book::Book(char* _author)
{
    this -> Init(_author);
}

Book::Book(const Book& obj)
{
    this -> Init(obj.author);
}

Book::Book()
{
    this -> Init(DEFAULT_AUTHOR);
}

Book::~Book()
{
    delete author;
}

void Book::SetAuthor(char* _author)
{
    this->author = new char[MAX_STRING_SIZE];
    strcpy(author, _author);
}

char* Printing::GetAuthor()
{
    return this -> author;
}
