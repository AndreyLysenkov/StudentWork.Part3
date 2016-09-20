#include <string.h>
#include "global.h"
#include "book.h"

void Book::Init(const char* _author)
{
    this -> author = new char[MAX_STRING_SIZE];
    strcpy(author, _author);
}

Book::Book(float _price, char* _title, char* _author)
 : Printing(_price, _title)
{
    this -> Init(_author);
}

Book::Book(const Book& obj)
    : Printing(obj)
{
    this -> Init(obj.author);
}

Book::Book()
    : Printing()
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

char* Book::GetAuthor()
{
    return this -> author;
}

void Book::Show()
{
    Printing::Show();
    PrintKeyValuePair("   Price", this -> price);
    PrintKeyValuePair("   Title", this -> title);
    NewLine();
}
