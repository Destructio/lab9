﻿#pragma once
#include "Header.h"

namespace lab9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(210, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Преобразовать каждую строку текстового файла,\r\n удалив из каждого слова нечетной "
				L"длины средний символ,\r\n и найти строку с минимальным количеством удалений.  ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Путь входящего файла";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(276, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(276, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Файл выхода";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(607, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Указать входящий файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(607, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Указать файл выхода";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(675, 243);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Решить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(675, 304);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(73, 190);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(276, 355);
			this->listBox1->TabIndex = 9;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->Location = System::Drawing::Point(370, 190);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(276, 355);
			this->listBox2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(370, 564);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(248, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Строка с минимальным количеством удалений";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(370, 581);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(380, 20);
			this->textBox3->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 674);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №9";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		
		if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0)
		{
			MessageBox::Show("Укажите файлы!", "Укажите файлы!",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else 
		{
			int count = 0;
			String^ f1 = textBox1->Text;
			String^ f2 = textBox2->Text;

			StreamReader^ sr = nullptr;
			StreamWriter^ sw = nullptr;

			try
			{
				sr = gcnew StreamReader(f1);
				sw = gcnew StreamWriter(f2, false);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				if (sr) sr->Close();
				if (sw) sw->Close();
				return;
			}

			String^ o = f(sr,sw,listBox1, listBox2);
			textBox3->Text = o;

			sr->Close();
			sw->Close();
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	openFileDialog->Title = "Открытие входного файла";
	openFileDialog->InitialDirectory = "d:\\";
	openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt";
	openFileDialog->FilterIndex = 1;
	openFileDialog->ShowReadOnly = true;
	openFileDialog->ReadOnlyChecked = true;
	openFileDialog->RestoreDirectory = true;
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		textBox1->Text = openFileDialog->FileName;
	else
		textBox1->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Title = "Открытие выходного файла";
	saveFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt";
	saveFileDialog->FilterIndex = 1;
	saveFileDialog->OverwritePrompt = true;
	if (saveFileDialog->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK)
		textBox2->Text = saveFileDialog->FileName;
	else
		textBox2->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
