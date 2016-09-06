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

void NewLine()
{
	std::cout << std::endl;
}

int main() {

	NewLine();
	std::cout << "Creating books...";
	NewLine();
	NewLine();

	Library *lib_empty = new Library();
	Library lib_params("Sherlock Holmes", "Arthur Conan Doyle", 0.5f);
	Library *lib_copy = new Library(lib_empty);

	NewLine();
	std::cout << "Books printing...";
	NewLine();
	NewLine();

	lib_empty -> Print();
	lib_params.Print();
	lib_copy -> Print();

	NewLine();
	std::cout << "Books changing ...";
	NewLine();
	NewLine();

	lib_copy -> SetName("Heaven has claws");
	lib_copy -> SetPrice(1.0f);

	lib_empty -> SetAuthor("Andrey Lysenkov");

	NewLine();
	std::cout << "Books printing...";
	NewLine();
	NewLine();

	lib_empty -> Print();
	lib_params.Print();
	lib_copy ->Print();

	/**/
	return 0;
}
