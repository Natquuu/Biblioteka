#pragma once
#include "Book.h"
using namespace System::Collections::Generic;
ref class Catalog
{
public:
	static List <Book^> lista;
	Catalog();
	void Sort();
	List <Book^>^ Find( System::String^ b);
	int FindIndex(Book^);
	static void Add(Book^ a);
};

