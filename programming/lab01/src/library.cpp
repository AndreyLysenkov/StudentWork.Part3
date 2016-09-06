/*
 * library.cpp
 *
 *  Created on: Sep 6, 2016
 *      Author: walpy
 */

#include <iostream>
#include <string.h>
#include "library.h"

  const int MAX_CHAR_SIZE = 100;

  Library::Library(char* _name,  char* _author, float _price)
  {
	Log("Calling constructor with parametrs");
    this -> name = new char[MAX_CHAR_SIZE];
    strcpy(name, _name);
    this -> author = new char[MAX_CHAR_SIZE];
    strcpy(author, _author);
    this -> price = price;
  }

  Library::Library()
  {
	Log("Calling constructor without parametrs");
    this -> name = new char[MAX_CHAR_SIZE];
    strcpy(name, "How to spend a time doing nothing?");
    this -> author = new char[MAX_CHAR_SIZE];
    strcpy(author, "Allan Walpy");
    this -> price = 0.0f;
  }

  Library::Library(Library *obj)
  {
	Log("Calling copy constructor");
    this -> name = new char[MAX_CHAR_SIZE];
    strcpy(name, obj -> GetName());
    this -> author = new char[MAX_CHAR_SIZE];
    strcpy(author,  obj -> GetAuthor());
    this -> price = obj -> GetPrice();
  }

  Library::~Library()
  {
	Log("Calling destructor");
    delete name;
    delete author;
  }

  void Library::SetAuthor(char* _author)
  {
	Log("Set author");
    this->author = new char[MAX_CHAR_SIZE];
    strcpy(author, _author);
  }

  char* Library::GetAuthor()
  {
     return this -> author;
  }

  void Library::SetName(char* _name)
  {
	Log("Set title");
    this->name = new char[MAX_CHAR_SIZE];
    strcpy(name, _name);
  }

  char* Library::GetName()
  {
    return this -> name;
  }

  void Library::SetPrice(float price)
  {
	Log("Set price");
    this -> price = price;
  }

  float Library::GetPrice()
  {
     return this -> price;
  }

  void PrintString(const char* valueName, const char* str)
  {
	  std::cout << valueName << "  : " << str << std::endl;
  }

  void Library::Print()
  {
	  std::cout << "Book(ish): " << std::endl;
	  PrintString("   Author", this -> author);
	  PrintString("   Title ", this -> name);
	  std::cout << std::endl;

  }
