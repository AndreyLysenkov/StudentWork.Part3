//============================================================================
// Name        : lab01.cpp
// Author      : Andrey Lysenkov
// Copyright   : Walpy (Anrey Lysenkov)
// Description : Hello World in C++, Ansi-style
// Lab number  : 02
// Lab variant : 06
//============================================================================

#include <iostream>
#include "global.h"
#include "printing.h"
#include "magazine.h"
#include "book.h"
#include "schoolbook.h"

int main() {

    Printing::Top = NULL;

    NewLine();
    Log("Creating books...");
    NewLine();
    NewLine();

    Book sherlockHolmes;
    sherlockHolmes.SetAuthor("Arthur Conan Doyle");
    sherlockHolmes.SetTitle("Sherlock Holmes");
    sherlockHolmes.SetPrice(0.1f);

    Book sherlockHolmes2 (sherlockHolmes);
    sherlockHolmes2.SetTitle("Adventures of Sherlock Holmes");

    SchoolBook itBook (
        1.5f,
        "C# 4.0: The Complete Reference",
        "Herbert Schildt",
        "Informatics",
        11
    );

    //itBook.Add();

    Printing::Print();

    //std::cin >> choice;*/
    return 0;
}
