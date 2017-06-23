#include "TranslatedBook.h"



TranslatedBook::TranslatedBook(System::String^ a, System::String^ t, System::String^ rd, System::String^ g,
	int c, System::String^ tr) : Book(a,t,rd,g,c), translate(tr)
{
}
System::String^ TranslatedBook::get_translate()
{
	return translate;
}
System::String^ TranslatedBook::Show()
{
	System::String^ s = Book::Show() + "\nPrzeklad:\n" + translate;
	return s;
}
System::String^ TranslatedBook::get_information()
{
	System::String^ s = Book::get_information() + "Przeklad:\r\n" + translate + "\r\n";
	return s;
}