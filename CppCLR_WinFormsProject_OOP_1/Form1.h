#pragma once
#include "Header.h"
#include "global.h"
#include "student.h"
#include <string.h>

int option = 5;
int separ = 5;

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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox1->Location = System::Drawing::Point(13, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(477, 303);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(509, 13);
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
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(13, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(509, 42);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Save ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(509, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Save as";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(94, 488);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Sort br grade";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(509, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Reset";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(509, 231);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Close";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(336, 331);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Edit";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(417, 331);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Save Edit";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(175, 488);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Sort A-Z";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 523);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->BackColor = System::Drawing::SystemColors::Control;
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
		button8->Enabled = true;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->BackColor = System::Drawing::SystemColors::Info;
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
		rez << "Vardas" << "\t" << "Pavarde" << "\t" << "Galutinis (Vid.)" << " / " << "Galutinis (Med.)\n";
		for (auto& a : dataV) {
			rez << a;
		}
		//dataV.clear();
		rez.close();
		richTextBox1->Text = File::ReadAllText("temp_pr.txt");
		//system("pause");
		system("del temp_pr.txt");
		button2->Enabled = false;
		button5->Enabled = true;
		button1->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = true;
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ z;
		if (richTextBox1->Text == "") z = " ";
		else z = richTextBox1->Text;
		if (failo_vardas != "")
		{
			StreamWriter^ sw = gcnew StreamWriter(failo_vardas);
			sw->Write(z);
			sw->Close();
			MessageBox::Show("The file has been successfully\nrewritten",
				"Information", MessageBoxButtons::OK);
		}
		else MessageBox::Show("You forgot open file", "File open Error", MessageBoxButtons::OK);

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->InitialDirectory = "..\\";
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt";
		String^ z = richTextBox1->Text;
	rep:
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
			sw->Write(z);
			sw->Close();
		}
		else MessageBox::Show("Error on file input", "Error", MessageBoxButtons::OK);

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		sort(dataV.begin(), dataV.end(), maziau);
		for (auto& a : dataV) {
			cout << a;
		}
		
		ofstream rez("temp_pr.txt");
		rez << "Vardas" << "\t\t" << "Pavarde"
			<< "\t" << setw(25) << "Galutinis (Vid.)" << "  /  " << "Galutinis (Med.)" << "\n";
		for (auto& a : dataV) {
			rez << a;
		}
		rez.close();
		richTextBox1->Text = File::ReadAllText("temp_pr.txt");
		system("del temp_pr.txt");
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
		system("del temp.txt");
		richTextBox1->Clear();
		dataV.clear();
		button5->Enabled = false;
		button1->Enabled = true;
		button10->Enabled = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		system("del temp.txt");
		Form1::Close();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->BackColor = System::Drawing::SystemColors::Window;
		this->richTextBox1->ReadOnly = false;
		button9->Enabled = true;
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->BackColor = System::Drawing::SystemColors::Control;
	StreamWriter^ outFile = gcnew StreamWriter("temp.txt");
	outFile->Write(richTextBox1->Text);
	outFile->Close();
	this->richTextBox1->ReadOnly = true;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	sort(dataV.begin(), dataV.end(), surname);
	for (auto& a : dataV) {
		cout << a;
	}
	ofstream rez("temp_pr.txt");
	rez << "Vardas" << "\t\t" << "Pavarde"
		<< "\t" << setw(25) << "Galutinis (Vid.)" << "  /  " << "Galutinis (Med.)" << "\n";
	for (auto& a : dataV) {
		rez << a;
	}
	rez.close();
	richTextBox1->Text = File::ReadAllText("temp_pr.txt");
	system("del temp_pr.txt");
}
};
}
