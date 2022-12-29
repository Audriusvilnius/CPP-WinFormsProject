#pragma once
#include "Header.h"
#include "global.h"
#include "student.h"
#include <string.h>

int option = 5;

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/*srand(time(NULL));*/

	vector<student> dataV;
	vector<float> nd;
	int ndqty;
	int stqty;
	int exTemp;
	int rez = 0;
	string s;
	string temp;
	string id_naTemp;
	string id_suTemp;
	char n = 'z';

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ failo_vardas = "";
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button2;
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(13, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(681, 303);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 488);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this-> button2->Enabled = false;
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 523);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->InitialDirectory = "..\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		openFileDialog1->InitialDirectory = "..\\";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
			richTextBox1->Text = (sr->ReadToEnd());
			failo_vardas = openFileDialog1->FileName;
			sr->Close();
		}
		StreamWriter^ outFile = gcnew StreamWriter("temp.txt");

		outFile->Write(richTextBox1->Text);
		outFile->Close();
		button2->Enabled = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream ins("temp.txt");
		getline(ins, s);
		while (ins)
		{
			getline(ins, s);
			if (!ins) break;
			istringstream sts(s);
			sts >> id_naTemp >> id_suTemp;
			while (sts)
			{
				sts >> rez;
				nd.push_back(rez);
			}
			exTemp = nd.at(nd.size() - 1);
			nd.pop_back();
			student getObj(id_naTemp, id_suTemp, nd, exTemp);
			cin >> getObj;
			nd.clear();
			dataV.push_back(getObj);
			getObj.~student();
		}

		ofstream rez("temp_pr.txt");
		rez << "Vardas" << "\t"<< "Pavarde"<< "\t" << "Galutinis (Vid.)" << " / " << "Galutinis (Med.)\n";
		for (auto& a : dataV) {
			rez <<a;
		}
		dataV.clear();
		rez.close();
		richTextBox1->Text = File::ReadAllText("temp_pr.txt");
		//system("pause");
		system("del temp_pr.txt");
		button2->Enabled = false;
	}
};
}
