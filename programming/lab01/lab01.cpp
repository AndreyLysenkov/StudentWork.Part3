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

typedef void (Library::*setFunc)(char*);

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
	Library *lib_copy = new Library(*lib_empty);

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

    std::cout << "What to change?" << std::endl;
    std::cout << "0. name" << std::endl;
    std::cout << "1. author" << std::endl;
    int choice;
    std::cin >> choice;

    setFunc setField = NULL;
    switch (choice)
    {
        case(0):
            //setFunc = &Library::SetName;
            break;

        case(1):
            //setFunc = &Library::SetAuthor;
            break;
    }
    if (setField != NULL)
    {
        std::cout << "New value: ";
        char* value;
        std::cin >> value;
        //(lib_empty -> *setField)(value);
    }
    lib_empty -> Print();

	/**/
	return 0;
}
