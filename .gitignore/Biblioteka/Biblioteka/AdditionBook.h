#pragma once
#include "Book.h"
ref class AdditionBook:public Book
{
	bool addition;
public:
	AdditionBook(System::String^ a, System::String^ t, System::String^ rd, System::String^ g, int c, bool ad);
	bool AdditionBook::get_addition();
	System::String^ Show() override;
	System::String^ get_information() override;
};

