#pragma once
ref class Book
{private:
	System::String^ tittle, ^author, ^relase_date, ^gatunek;
	int copy;
	int number;
public:
	Book(System::String^ a, System::String^ t, System::String^ rd, System::String^ gat, int c);
	System::String^ get_tittle();
	System::String^ get_author();
	System::String^ get_relase_date();
	int get_copy();
	virtual System::String^ Show();
	void borrow();
	virtual System::String^ get_information();
};

