/*
 * library.cpp
 *
 *  Created on: Sep 6, 2016
 *      Author: walpy
 */

#include <iostream>
#include <string.h>
#include "library.h"

void Log(char* message)
{
    std::cout << message << std::endl;
}

void Log(char* message, Library* obj)
{
    Log(message);
    std::cout << "       Object #" << obj << std::endl;
}

const int MAX_CHAR_SIZE = 100;
const char* DEFAULT_BOOK_NAME = "How to spend a time doing nothing?";
const char* DEFAULT_AUTHOR_NAME = "Allan Walpy";

Library::Library()
{
    Log("Calling constructor without parametrs", this);
    this -> name = new char[MAX_CHAR_SIZE];
    strcpy(name, DEFAULT_BOOK_NAME);
    this -> author = new char[MAX_CHAR_SIZE];
    strcpy(author, DEFAULT_AUTHOR_NAME);
    this -> price = 0.0f;
}

Library::Library(char* _name,  char* _author, float _price)
{
    Log("Calling constructor with parametrs", this);
    this -> name = new char[MAX_CHAR_SIZE];
    strcpy(name, _name);
    this -> author = new char[MAX_CHAR_SIZE];
    strcpy(author, _author);
    this -> price = _price;
}

Library::Library(const Library &obj)
{
    Log("Calling copy constructor", this);
    this -> name = new char[MAX_CHAR_SIZE];
    strcpy(name, obj.name);
    this -> author = new char[MAX_CHAR_SIZE];
    strcpy(author,  obj.author);
    this -> price = obj.price;
}

Library::~Library()
{
    Log("Calling destructor", this);
    delete name;
    delete author;
}

void Library::SetAuthor(char* _author)
{
    this->author = new char[MAX_CHAR_SIZE];
    strcpy(author, _author);
}

char* Library::GetAuthor()
{
    return this -> author;
}

void Library::SetName(char* _name)
{
    this->name = new char[MAX_CHAR_SIZE];
    strcpy(name, _name);
}

char* Library::GetName()
{
    return this -> name;
}

void Library::SetPrice(float price)
{
    this -> price = price;
}

float Library::GetPrice()
{
    return this -> price;
}

void PrintKeyValuePair(const char* key, const char* value)
{
    std::cout << key << "  : " << value << std::endl;
}

void PrintKeyValuePair(const char* key, float value)
{
    std::cout << key << "  : " << value << std::endl;
}

void Library::Print()
{
    std::cout << " Book(ish): " << std::endl;
    PrintKeyValuePair("   Author", this -> author);
    PrintKeyValuePair("   Title ", this -> name);
    PrintKeyValuePair("   Price", this -> price);
    std::cout << std::endl;
}
