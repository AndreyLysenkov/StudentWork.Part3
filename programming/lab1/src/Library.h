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

	void Init(char* _name, char* _time, float _price);

public:

	/*
	 * Constants
	 * */

	const int MAX_CHAR_SIZE = 100;
	const char* NAME_DEFAULT = "Andrey Lysenkov";
	const char* AUTHOR_DEFAULT = "Andrey Lysenkov";

	/*
	 * Constructors & destructors
	 * */

	Library(char* _name, char* _time, float _price);
	Library();
	Library(Library* obj);
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
