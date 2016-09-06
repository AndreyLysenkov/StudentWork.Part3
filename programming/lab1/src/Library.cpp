/*
 * library.cpp
 *
 *  Created on: Sep 6, 2016
 *      Author: walpy
 */

#include <string.h>
#include "Library.h"


  void Library::Init(char* _name,  char* _author, float _price)
  {
	this->name = new char[MAX_CHAR_SIZE];
	strcpy(name, _name);
	this->author = new char[MAX_CHAR_SIZE];
    strcpy(author, _author);
    this -> price = price;
  }

  Library::Library(char* _name,  char* _author, float _price)
  {
	this->Init(_name, _author, _price);
  }

  Library::Library()
  {
     this -> Init(NAME_DEFAULT, AUTHOR_DEFAULT, 0.0f);
  }

  Library::Library(Library *obj)
  {
	  this -> Init(obj -> name, obj -> author, obj -> price);
  }

   Library::~Library()
   {
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


