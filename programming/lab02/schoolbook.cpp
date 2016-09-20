#include "schoolbook.h"

SchoolBook::Init(char* _subject, int _grade)
{
    this -> subject = new char[MAX_STRING_SIZE];
    strcpy(subject, _subject);
    this -> grade = _grade;
}

SchoolBook::SchoolBook(char* _subject, int _grade)
{
    this -> Init(_subject, _grade);
}

SchoolBook::SchoolBook(const SchoolBook& obj)
{
    this -> Init(obj.subject, obj.grade);
}

SchoolBook::SchoolBook()
{
    this -> Init(DEFAULT_SUBJECT, DEFAULT_GRADE);
}

SchoolBook::~SchoolBook()
{
    delete subject;
}
