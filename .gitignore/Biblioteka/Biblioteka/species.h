#pragma once
#include "Book.h"
using namespace System::Collections::Generic;
ref class species
{private:
	System::String^ name;
	List <Book^> books;
public:
	species(System::String^ n);
};

