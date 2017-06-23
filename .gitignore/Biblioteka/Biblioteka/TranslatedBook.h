#pragma once
#include "Book.h"
ref class TranslatedBook:public Book
{private:
	System::String^ translate;
public:
	TranslatedBook(System::String^ a, System::String^ t, System::String^ rd, System::String^ g, int c, System::String^ tr);
	System::String^ get_translate();
	System::String^ Show() override;
	System::String^ get_information() override;
};

