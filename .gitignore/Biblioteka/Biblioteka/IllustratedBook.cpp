#include "IllustratedBook.h"



IllustratedBook::IllustratedBook(System::String^ a, System::String^ t, System::String^ rd, System::String^ g,
	int c, bool il, System::String^ ila):Book(a,t,rd,g,c), ilustrated(il), ilauthor(ila)
{
}

bool IllustratedBook::get_ilustrated()
{
	return ilustrated;
}
System::String^ IllustratedBook::get_ilauthor()
{
	return ilauthor;
}
System::String^ IllustratedBook::Show()
{
	System::String^ s = Book::Show() + "\nIlustracje:\n" + ilauthor;
	return s;
}
System::String^  IllustratedBook::get_information()
{
	System::String^ s = Book::get_information() + "Ilustracje:\r\n" + ilauthor+"\r\n";
	return s;
}
