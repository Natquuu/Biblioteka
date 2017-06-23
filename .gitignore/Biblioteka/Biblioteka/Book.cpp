#include "Book.h"
#include "Catalog.h"



Book::Book(System::String^ a, System::String^ t, System::String^ rd, System::String^ gat,int c)
{
	author = a;
	tittle = t;
	relase_date = rd;
	gatunek = gat;
	copy = c;
	number = Catalog::lista.Count+1;
}
System::String^ Book::get_tittle()
{
	return tittle;
}
System::String^ Book::get_author()
{
	return author;
}
System::String^ Book::get_relase_date()
{
	return relase_date;
}
int Book::get_copy()
{
	return copy;
}
System::String^ Book::Show()
{
	System::String^ s = "Autor: \n" + author + "\nTytul: \n" + tittle + "\nData wydania: \n" + relase_date +
		"\nIlosc egzemplarzy: \n" + copy.ToString() + "\nGatunek:\n" +gatunek+ "\nNumer:\n" + number.ToString();
	return s;
}
void  Book::borrow()
{
	copy--;
};

System::String^ Book::get_information()
{
	System::String^ s = author + "\r\n" + tittle + "\r\n" + relase_date + "\r\n" + copy.ToString() + "\r\n" + gatunek + "\r\n";
	return s;
 }