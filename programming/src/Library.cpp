/*
 * library.cpp
 *
 *  Created on: Sep 6, 2016
 *      Author: walpy
 */

#include "Library.h"

  Library::Library(char* &name,  char* &time, float price)
  {
     this -> name = name;
     this -> author = author;
     this -> price = price;
  }

  Library::Library()
  {
      this -> name = "How to spend a day, doing nothing?";   ///correct these lines
      this -> author = "Andrey Lysenkov";
      this -> price = 0.0f;
  }

  Library::Library(Library *obj)
  {
      this -> name = obj -> name;
      this -> author = obj -> author;
      this -> price= obj -> price;
   }

   Library::~Library()
   {
      delete name;
      delete author;
   }

   char* Library::GetAuthor()
   {
	   return this -> author;
   }

   void Library::SetAuthor(char* author)
   {
      this -> author = new char[MAX_CHAR_SIZE];
	  strcpy(author);
   }

   char* Library::GetName()
   {
	   return &(this -> name);
   }

   void Library::SetName(char *name)
   {
      this -> name = &name;
   }

   float Library::GetPrice()
   {
	   return &(this -> price);
   }

   void Library::SetPrice(float price)
   {
      this -> price = &price;
   }


