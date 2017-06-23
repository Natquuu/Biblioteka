#pragma once
#include "Catalog.h"
#include "BorrowWindow.h"

namespace Biblioteka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CatalogWindow
	/// </summary>
	public ref class CatalogWindow : public System::Windows::Forms::Form
	{
	public:
		int b = 0;
		CatalogWindow(int a)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			b = a;
			label1->Text=Catalog::lista[b]->Show();
			if (a==0) button2->Hide();
			else if (a >= Catalog::lista.Count-1) button1->Hide();
			if (Catalog::lista[b]->get_copy() == 0)
			{
				button3->Hide();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CatalogWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &CatalogWindow::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(272, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L">>";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CatalogWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(4, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"<<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CatalogWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(234, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Wypozycz";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CatalogWindow::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(41, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(225, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Katalog Alfabetyczny (wg autorow)";
			this->label2->Click += gcnew System::EventHandler(this, &CatalogWindow::label2_Click);
			// 
			// CatalogWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 327);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"CatalogWindow";
			this->Text = L"CatalogWindow";
			this->Load += gcnew System::EventHandler(this, &CatalogWindow::CatalogWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CatalogWindow_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	b--;
	button1->Show();
	label1->Text = Catalog::lista[b]->Show();
	if (b == 1)
	{
		button2->Hide();
	}
	if (Catalog::lista[b]->get_copy() == 0)
	{
		button3->Hide();
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	b++;
	button2->Show();
	label1->Text = Catalog::lista[b]->Show();
	if (b == Catalog::lista.Count-1)
	{
		button1->Hide();
	}
	if (Catalog::lista[b]->get_copy() == 0)
	{
		button3->Hide();
	}
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	BorrowWindow^ c = gcnew BorrowWindow(b);
	c->ShowDialog();
}
};
}
