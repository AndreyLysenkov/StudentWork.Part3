/*
 * library.h
 *
 *  Created on: Sep 6, 2016
 *      Author: walpy
 */

#pragma once

class Library
{

private:

   /*
    * Fields
    * */

   char* name;
   char* author;
   float price;

public:

   /*
    * Constructors & destructors
    * */

    Library();
   Library(char* _name, char* _author, float _price);
   Library(const Library &obj);
   ~Library();

   /*
    * Getters & setters
    * */

   // author
   char* GetAuthor();
   void SetAuthor(char* _author);

   // name
   char* GetName();
   void SetName(char* _name);

   // price
   float GetPrice();
   void SetPrice(float _price);

   /*
    * Methods
    * */

   void Print();

};
