#include <string.h>
#include "global.h"
#include "schoolbook.h"

void SchoolBook::Init(const char* _subject, int _grade)
{
    this -> subject = new char[MAX_STRING_SIZE];
    strcpy(subject, _subject);
    this -> grade = _grade;
}

SchoolBook::SchoolBook(float _price, char* _title, char* _author, char* _subject, int _grade)
    : Book(_price, _title, _author)
{
    this -> Init(_subject, _grade);
}

SchoolBook::SchoolBook(const SchoolBook& obj)
    : Book(obj)
{
    this -> Init(obj.subject, obj.grade);
}

SchoolBook::SchoolBook()
    : Book()
{
    this -> Init(DEFAULT_SUBJECT, DEFAULT_GRADE);
}

SchoolBook::~SchoolBook()
{
    delete subject;
}

void SchoolBook::Show()
{
    Book::Show();
    PrintKeyValuePair("   Subject", subject);
    PrintKeyValuePair("   Grade", grade);
}
