#include "FileOperation.h"
#include "Book.h"
#include "Catalog.h"
#include "AdditionBook.h"
#include "IllustratedBook.h"
#include "TranslatedBook.h"
#using<system.dll>  
	using namespace System;
	using namespace System::IO;



FileOperation::FileOperation()
{
}

void FileOperation::SaveFromFIle()
{
	String^ fileName = "C:\\Users\\admin\\Desktop\\XXX\\NAUKA\\II_Semestr\\JPWP\\Biblioteka\\ListOfBooks.txt";
	String^ tit;
	String^ aut;
	String^ data;
	String^ spec;
	int copy;
	try
	{
		StreamReader^ din = File::OpenText(fileName);

		int count = 0;
		int line = 0;
		String^ str;
		while ((str = din->ReadLine()) != nullptr)
		{
			count++;
			if (str == "---" && line != 5)
			{
				line = -1;
			}
			if (line == 0)
			{
				aut = str;
			}
			else if (line == 1)
			{
				tit = str;
			}
			else if (line == 2)
			{
				data = str;
			}
			else if (line == 3)
			{
				copy = Convert::ToInt32(str);
			}

			else if (line == 4)
			{
				spec = str;
			}
			else if (line == 5)
			{
				if (str == "Tlumaczenie:")
				{
					line = 6;
					continue;
				}
				else if (str == "Ilustracje:")
				{
					line = 7;
					continue;
				}
				else if (str == "material dodatkowy")
				{
					Book^ a = gcnew  AdditionBook(aut, tit, data, spec, copy, true);
					Catalog::Add(a);
					line = 0;
				}
				else if (str == "---")
				{
					Book^ a = gcnew Book(aut, tit, data, spec, copy);
					Catalog::Add(a);
					line = 0;
					continue;
				}
			}
			else if (line == 6)
			{
				Book^ a = gcnew  TranslatedBook(aut, tit, data, spec, copy, str);
				Catalog::Add(a);
				line = 0;
				continue;
			}
			else if (line == 7)
			{
				Book^ a = gcnew  IllustratedBook(aut, tit, data, spec, copy, true, str);
				Catalog::Add(a);
				line = 0;
				continue;
			}
			line++;
		}
		din->Close();
	}
	catch (Exception^ e)
	{
	}
}

void FileOperation::SaveToFile(String^ s)
{
	String^ fileName = "C:\\Users\\admin\\Desktop\\XXX\\NAUKA\\II_Semestr\\JPWP\\Biblioteka\\BorrowHistory.txt";
	StreamWriter^ sw = gcnew StreamWriter(fileName, true);
	sw->Write(s);
	sw->Close();
}
void FileOperation::SaveNewList()
{
	String^ fileName = "C:\\Users\\admin\\Desktop\\XXX\\NAUKA\\II_Semestr\\JPWP\\Biblioteka\\ListOfBooks.txt";
	StreamWriter^ sw = gcnew StreamWriter(fileName, false);
	String^ s="";
	for (int i = 0; i < Catalog::lista.Count; i++)
	{
		s = s + Catalog::lista[i]->get_information() + "---\r\n";
	}
	sw->Write(s);
	sw->Close();
}

