//============================================================================
// Name        : lab01.cpp
// Author      : Andrey Lysenkov
// Copyright   : Walpy (Anrey Lysenkov)
// Description : Hello World in C++, Ansi-style
// Lab number  : 01
// Lab variant : 07
//============================================================================

#include <iostream>
#include "library.h"


void Log(char* message)
{
  std::cout << message << std::endl;
}

void NewLine()
{
	std::cout << std::endl;
}

int main() {

	NewLine();
	Log(Books);
	NewLine();

	Library lib_empty = new Library();
	Library lib_params = new Library(
			"Sherlock Holmes",
			"Arthur Conan Doyle",
			0.5f);
	Library lib_copy = new Library(lib_params);

	NewLine();
	Log("Books printing...");
	NewLine();

	lib_empty.Print();
	lib_params.Print();
	lib_copy.Print();

	NewLine();
	Log("Books changing ...");
	NewLine();

	lib_copy.SetName("Heaven has claws");
	lib_copy.SetPrice(1.0f);

	lib_empty.SetAuthor("Andrey Lysenkov");

	NewLine();
	Log("Books printing...");
	NewLine();

	lib_empty.Print();
	lib_params.Print();
	lib_copy.Print();


	return 0;
}
