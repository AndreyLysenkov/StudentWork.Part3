//============================================================================
// Name        : lab01.cpp
// Author      : Andrey Lysenkov
// Copyright   : Walpy (Anrey Lysenkov)
// Description : Hello World in C++, Ansi-style
// Lab number  : 02
// Lab variant : 06
//============================================================================

#include <iostream>
#include "magazine.h"

int main() {
/*
    NewLine();
    Log("Creating books...");
    NewLine();
    NewLine();

    Library sherlockHolmes;
    sherlockHolmes.SetAuthor("Arthur Conan Doyle");
    sherlockHolmes.SetName("Sherlock Holmes");
    sherlockHolmes.SetPrice(0.1f);
    sherlockHolmes.Print();

    Library sherlockHolmes2 (sherlockHolmes);
    sherlockHolmes2.SetName("Adventures of Sherlock Holmes");
    sherlockHolmes2.Print();

    Library itBook (
        "C# 4.0: The Complete Reference",
        "Herbert Schildt",
        1.5f
    );
    itBook.Print();

    Library *itBook2 = new Library(itBook);
    itBook2.Print();

    char* (Library::*getParametrPtr) ();
    getParametrPtr = NULL;

    std::cout << "What to see?" << std::endl;
    std::cout << "0. name" << std::endl;
    std::cout << "1. author" << std::endl;
    int choice;
    std::cin >> choice;

    switch (choice)
    {
        case(0):
            getParametrPtr = &Library::GetName;
            break;

        case(1):
            getParametrPtr = &Library::GetAuthor;
            break;
    }
    if (getParametrPtr != NULL)
    {
        std::cout << "Property is: " << (itBook2->*getParametrPtr) () << std::endl;
    }

    delete itBook2;
    //std::cin >> choice;*/
    return 0;
}
