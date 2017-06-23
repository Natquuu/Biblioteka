#include "AdditionBook.h"


AdditionBook::AdditionBook(System::String^ a, System::String^ t, System::String^ rd, System::String^ g,
	int c, bool ad):Book(a,t,rd,g,c), addition(ad)
{
}
bool AdditionBook::get_addition()
{
	return addition;
}
System::String^ AdditionBook::Show()
{
	System::String^ s = Book::Show() + "\n Materialy dodatkowe"	;	
	return s;
}

System::String^  AdditionBook::get_information()
{
	System::String^ s = Book::get_information() + " Materialy dodatkowe\r\n";
	return s;
	 }