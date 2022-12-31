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
	vector<student>V_dataUp;
	vector<student>V_dataLess;
	int ndqty;
	int stqty;
	int exTemp;
	int rez = 0;
	string s;
	string temp;
	string id_naTemp;
	string id_suTemp;


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
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->richTextBox1->Location = System::Drawing::Point(12, 17);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(640, 387);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(12, 508);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 26);
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
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(660, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 26);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(93, 508);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 26);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Save ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(174, 508);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 26);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Save as";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(660, 251);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 26);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Sort Avrg";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(660, 283);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 26);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Reset";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button7->Location = System::Drawing::Point(660, 508);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 26);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Close";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(658, 17);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 26);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Edit";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(658, 49);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 26);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Save Edit";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(660, 219);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 26);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Sort A-Z";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button11->Enabled = false;
			this->button11->Location = System::Drawing::Point(658, 110);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 26);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Split Less";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(660, 142);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(73, 20);
			this->numericUpDown1->TabIndex = 12;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(513, 507);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 26);
			this->label1->TabIndex = 13;
			this->label1->Text = L"<";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->Enabled = false;
			this->button12->Location = System::Drawing::Point(658, 168);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 26);
			this->button12->TabIndex = 14;
			this->button12->Text = L"Split Up";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(594, 507);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 26);
			this->label2->TabIndex = 15;
			this->label2->Text = L">";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(18, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(165, 17);
			this->radioButton1->TabIndex = 16;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Date base by avrerage  value";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			this->radioButton1->MouseCaptureChanged += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(189, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(157, 17);
			this->radioButton2->TabIndex = 17;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Date base by median  value";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			this->radioButton2->MouseCaptureChanged += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(352, 20);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(223, 17);
			this->radioButton3->TabIndex = 18;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Date base by avrerage and median  value";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			this->radioButton3->MouseCaptureChanged += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Enabled = false;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(12, 406);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(640, 50);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 546);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
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
		button3->Enabled = true;
		button4->Enabled = true;
		button6->Enabled = true;
		button8->Enabled = true;
		groupBox1->Enabled = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		V_dataUp.clear();
		V_dataLess.clear();
		dataV.clear();

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
		button11->Enabled = true;
		button12->Enabled = true;
		numericUpDown1->Enabled = true;
		label1->Enabled = true;
		label2->Enabled = true;
		groupBox1->Enabled = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
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
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
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
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		sort(dataV.begin(), dataV.end(), maziau);
		for (auto& a : dataV) {
			cout << a;
		}
		ofstream rez("temp_pr.txt");
		rez << "Vardas" << "\t" << "Pavarde"
			<< "\t" << setw(25) << "Galutinis (Vid.)" << "  /  " << "Galutinis (Med.)" << "\n";
		for (auto& a : dataV) {
			rez << a;
		}
		rez.close();
		richTextBox1->Text = File::ReadAllText("temp_pr.txt");
		system("del temp_pr.txt");
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
		system("del temp.txt");
		richTextBox1->Clear();
		V_dataUp.clear();
		V_dataLess.clear();
		dataV.clear();
		groupBox1->Enabled = false;
		button5->Enabled = false;
		button1->Enabled = true;
		button10->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = false;
		numericUpDown1->Enabled = false;
		label1->Enabled = false;
		label2->Enabled = false;
		button8->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button2->Enabled = false;
		button6->Enabled = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		system("del temp.txt");
		Form1::Close();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBox1->BackColor = System::Drawing::SystemColors::Window;
		this->richTextBox1->ReadOnly = false;
		button9->Enabled = true;
		button8->Enabled = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBox1->BackColor = System::Drawing::SystemColors::Control;
		StreamWriter^ outFile = gcnew StreamWriter("temp.txt");
		outFile->Write(richTextBox1->Text);
		outFile->Close();
		this->richTextBox1->ReadOnly = true;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBox1->Clear();
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
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < 5; i++) {
			separ = Convert::ToInt32(numericUpDown1->Text);
			partition_copy(dataV.begin(), dataV.end(), back_inserter(V_dataUp), back_inserter(V_dataLess), lygu5);
			sort(V_dataLess.begin(), V_dataLess.end(), maziau);
			ofstream outlessvf("temp_pr.txt");
			outlessvf << "Vardas" << "\t" << "Pavarde" << "\t" << "Vidurkis < " << separ << "\n";
			for (auto& a : V_dataLess) {
				outlessvf << a;
			}
			outlessvf.close();
			V_dataLess.clear();
			richTextBox1->Text = File::ReadAllText("temp_pr.txt");
			system("del temp_pr.txt");
		}
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		separ = Convert::ToInt32(numericUpDown1->Text);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < 5; i++) {
			separ = Convert::ToInt32(numericUpDown1->Text);
			partition_copy(dataV.begin(), dataV.end(), back_inserter(V_dataUp), back_inserter(V_dataLess), lygu5);
			sort(V_dataUp.begin(), V_dataUp.end(), maziau);
			ofstream outupvf("temp_pr.txt");
			outupvf << "Vardas" << "\t" << "Pavarde" << "\t" << "Vidurkis >=" << separ << "\n";
			for (auto& a : V_dataUp) {
				outupvf << a;
			}
			outupvf.close();
			V_dataUp.clear();
			richTextBox1->Text = File::ReadAllText("temp_pr.txt");
			system("del temp_pr.txt");
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		option = 3;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		option = 4;
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		option = 5;
	}
	};
}
