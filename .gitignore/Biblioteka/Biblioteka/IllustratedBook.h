#pragma once
#include "Book.h"
ref class IllustratedBook:public Book
{private:
	bool ilustrated;
	System::String^ ilauthor;
public:
	IllustratedBook(System::String^ a, System::String^ t, System::String^ rd, System::String^ g, int c, bool il,
		System::String^ ila);
	bool get_ilustrated();
	System::String^ get_ilauthor();
	System::String^ Show() override;

	System::String^ get_information() override;
};

