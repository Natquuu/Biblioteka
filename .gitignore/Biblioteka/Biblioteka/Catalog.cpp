#include "Catalog.h"
#include <algorithm>



Catalog::Catalog()
{
}

void Catalog::Sort()
{
	Book^ b;
	for (int i = 0; i < lista.Count; i++)
	{
		for (int j = 0; j < lista.Count - 1; j++)
		{
			if (System::String::Compare(lista[j]->get_author(), lista[j + 1]->get_author())>0)
			{
				b = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = b;
			}
			else if (System::String::Compare(lista[j]->get_author(), lista[j + 1]->get_author()) == 0)
			{
				if (System::String::Compare(lista[j]->get_tittle(), lista[j + 1]->get_tittle()) > 0)
				{
					b = lista[j];
					lista[j] = lista[j + 1];
					lista[j + 1] = b;
				}
			}
		}
		
	}
}
List <Book^>^ Catalog::Find(System::String^ b)
{
	List <Book^> ^ found = gcnew List <Book^>;
	for (int i = 0; i < lista.Count; i++)
	{
		int a=lista[i]->Show()->IndexOf(b, System::StringComparison::OrdinalIgnoreCase);
		if (a >= 0)
		{
			found->Add(lista[i]);
		}
	}
	return found;
}
int Catalog::FindIndex(Book^ ks)
{
	for (int i = 0; i < lista.Count; i++)
	{
		if (ks == lista[i])
		{
			return i;
		}
	}
	return -1;
}

 void Catalog::Add(Book^ a)
 {
	 lista.Add(a);
 }
