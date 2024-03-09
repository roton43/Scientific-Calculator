#pragma once
#include <bitset>
#include <bitset>
#include "MyForm17.h"
#include "MyForm18.h"

namespace ScientificCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm16
	/// </summary>
	public ref class MyForm16 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm16(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm16(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm16()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button19;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ moodToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ equationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ polynomialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ degreeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ degreeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ simualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ unknownToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ unknownToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ vectorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trigonometryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ baseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ comoplexNumberToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ matrixToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ developerInfoToolStripMenuItem;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button18;

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
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->moodToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->equationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->polynomialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->degreeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->degreeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->simualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unknownToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unknownToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vectorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trigonometryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->baseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comoplexNumberToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->matrixToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->developerInfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(237, 196);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(163, 160);
			this->button8->TabIndex = 21;
			this->button8->Text = L"DLT";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm16::button8_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(8, 512);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 75);
			this->button19->TabIndex = 20;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm16::button19_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(84, 512);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(310, 75);
			this->button4->TabIndex = 18;
			this->button4->Text = L"AC";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm16::button4_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(159, 353);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 83);
			this->button11->TabIndex = 16;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(159, 273);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 83);
			this->button7->TabIndex = 25;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(159, 196);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 83);
			this->button3->TabIndex = 15;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(8, 432);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 83);
			this->button13->TabIndex = 13;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(84, 353);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 83);
			this->button10->TabIndex = 12;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(8, 353);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 83);
			this->button9->TabIndex = 11;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(84, 273);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 83);
			this->button6->TabIndex = 10;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(8, 273);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 83);
			this->button5->TabIndex = 9;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(84, 196);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 83);
			this->button2->TabIndex = 8;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(8, 196);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 83);
			this->button1->TabIndex = 7;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->moodToolStripMenuItem,
					this->helpToolStripMenuItem, this->developerInfoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(400, 28);
			this->menuStrip1->TabIndex = 26;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// moodToolStripMenuItem
			// 
			this->moodToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->generalToolStripMenuItem,
					this->scientificToolStripMenuItem
			});
			this->moodToolStripMenuItem->Name = L"moodToolStripMenuItem";
			this->moodToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->moodToolStripMenuItem->Text = L"Mood";
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			this->generalToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->generalToolStripMenuItem->Text = L"General";
			this->generalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm16::generalToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->equationToolStripMenuItem,
					this->vectorToolStripMenuItem, this->trigonometryToolStripMenuItem, this->baseToolStripMenuItem, this->comoplexNumberToolStripMenuItem,
					this->matrixToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			// 
			// equationToolStripMenuItem
			// 
			this->equationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->polynomialToolStripMenuItem,
					this->simualToolStripMenuItem
			});
			this->equationToolStripMenuItem->Name = L"equationToolStripMenuItem";
			this->equationToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->equationToolStripMenuItem->Text = L"Equation";
			// 
			// polynomialToolStripMenuItem
			// 
			this->polynomialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->degreeToolStripMenuItem,
					this->degreeToolStripMenuItem1
			});
			this->polynomialToolStripMenuItem->Name = L"polynomialToolStripMenuItem";
			this->polynomialToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->polynomialToolStripMenuItem->Text = L"Polynomial Equation";
			// 
			// degreeToolStripMenuItem
			// 
			this->degreeToolStripMenuItem->Name = L"degreeToolStripMenuItem";
			this->degreeToolStripMenuItem->Size = System::Drawing::Size(153, 26);
			this->degreeToolStripMenuItem->Text = L"2 Degree";
			// 
			// degreeToolStripMenuItem1
			// 
			this->degreeToolStripMenuItem1->Name = L"degreeToolStripMenuItem1";
			this->degreeToolStripMenuItem1->Size = System::Drawing::Size(153, 26);
			this->degreeToolStripMenuItem1->Text = L"3 Degree";
			// 
			// simualToolStripMenuItem
			// 
			this->simualToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->unknownToolStripMenuItem,
					this->unknownToolStripMenuItem1
			});
			this->simualToolStripMenuItem->Name = L"simualToolStripMenuItem";
			this->simualToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->simualToolStripMenuItem->Text = L"Simual Equation";
			// 
			// unknownToolStripMenuItem
			// 
			this->unknownToolStripMenuItem->Name = L"unknownToolStripMenuItem";
			this->unknownToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->unknownToolStripMenuItem->Text = L"2 Unknown";
			// 
			// unknownToolStripMenuItem1
			// 
			this->unknownToolStripMenuItem1->Name = L"unknownToolStripMenuItem1";
			this->unknownToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->unknownToolStripMenuItem1->Text = L"3 Unknown";
			// 
			// vectorToolStripMenuItem
			// 
			this->vectorToolStripMenuItem->Name = L"vectorToolStripMenuItem";
			this->vectorToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->vectorToolStripMenuItem->Text = L"Vector";
			// 
			// trigonometryToolStripMenuItem
			// 
			this->trigonometryToolStripMenuItem->Name = L"trigonometryToolStripMenuItem";
			this->trigonometryToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->trigonometryToolStripMenuItem->Text = L"Trigonometry and logarithm";
			// 
			// baseToolStripMenuItem
			// 
			this->baseToolStripMenuItem->Name = L"baseToolStripMenuItem";
			this->baseToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->baseToolStripMenuItem->Text = L"Base";
			// 
			// comoplexNumberToolStripMenuItem
			// 
			this->comoplexNumberToolStripMenuItem->Name = L"comoplexNumberToolStripMenuItem";
			this->comoplexNumberToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->comoplexNumberToolStripMenuItem->Text = L"Complex Number";
			// 
			// matrixToolStripMenuItem
			// 
			this->matrixToolStripMenuItem->Name = L"matrixToolStripMenuItem";
			this->matrixToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->matrixToolStripMenuItem->Text = L"Matrix";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm16::helpToolStripMenuItem_Click);
			// 
			// developerInfoToolStripMenuItem
			// 
			this->developerInfoToolStripMenuItem->Name = L"developerInfoToolStripMenuItem";
			this->developerInfoToolStripMenuItem->Size = System::Drawing::Size(122, 24);
			this->developerInfoToolStripMenuItem->Text = L"Developer Info";
			this->developerInfoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm16::developerInfoToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(4, 23);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(380, 68);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 23);
			this->label1->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(8, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(386, 163);
			this->groupBox1->TabIndex = 46;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Base";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"DEC", L"HEX", L"OCT", L"BIN" });
			this->comboBox2->Location = System::Drawing::Point(201, 97);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(179, 32);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"DEC", L"HEX", L"OCT", L"BIN" });
			this->comboBox1->Location = System::Drawing::Point(4, 97);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(157, 32);
			this->comboBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(160, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L" to";
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(237, 432);
			this->button21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 83);
			this->button21->TabIndex = 7;
			this->button21->Text = L"c";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(237, 353);
			this->button22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 83);
			this->button22->TabIndex = 9;
			this->button22->Text = L"d";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(314, 353);
			this->button23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 83);
			this->button23->TabIndex = 11;
			this->button23->Text = L"e";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(314, 432);
			this->button24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(80, 83);
			this->button24->TabIndex = 13;
			this->button24->Text = L"f";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(84, 432);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 83);
			this->button12->TabIndex = 7;
			this->button12->Text = L"a";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(159, 432);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 83);
			this->button18->TabIndex = 9;
			this->button18->Text = L"b";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm16::EnterNumber);
			// 
			// MyForm16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 589);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MaximumSize = System::Drawing::Size(418, 636);
			this->Name = L"MyForm16";
			this->Text = L"Calculator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Int64 a, b, r;
		String^ op1;String^ op2;
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		//For input numbers
		Button^ numbers = safe_cast<Button^>(sender);

		if (textBox1->Text == "0") {
			textBox1->Text = numbers->Text;
		}
		else {
			textBox1->Text += numbers->Text;
		}
	}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	//Plus-minus
	if (textBox1->Text->Contains("-")) {
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else {
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	//For dot
	Button^ numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0") {
		textBox1->Text = "0" + numbers->Text;
	}
	else {
		textBox1->Text += numbers->Text;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//DLT Button
	if (textBox1->Text->Length > 0) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//All clear Button
	textBox1->Text = "0";
	label1->Text = "label1";
	a = 0; b = 0; r = 0; op1 = ""; op2 = "";
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	//For operator
	Button^ Numbersop = safe_cast<Button^>(sender);
	if (textBox1->Text != "0")a = Int64::Parse(textBox1->Text);
	op1 = Numbersop->Text;
	textBox1->Text = "0";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	// Equal button
	if (comboBox1->Text != "" && comboBox2->Text != "") {
		op1 = comboBox1->Text;
		op2 = comboBox2->Text;
	}
	if (op1 == "BIN" && (op2 == "OCT" || op2=="HEX" || op2=="DEC")) {
		String^ bin; int i = 0,test=0;
		bin = textBox1->Text;
		char s[100]{};
		char* p;
		for (i = 0; i<bin->Length; i++) {
			s[i] = bin[i];
			if (bin[i] != '0' && bin[i] != '1') {
				test = 1; textBox1->Text = "Invalid number !"; break;
			}
		}
		if ((test == 0 ) && op2=="OCT") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 2); b = z;
			textBox1->Text = System::Convert::ToString(z, 8);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "HEX") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 2); b = z;
			textBox1->Text = System::Convert::ToString(z, 16);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "DEC") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 2); b = z;
			textBox1->Text = System::Convert::ToString(z, 10);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
	}
	else if (op1 == "OCT" && (op2 == "BIN" || op2 == "HEX" || op2 == "DEC")) {
		String^ bin; int i = 0, test = 0;
		bin = textBox1->Text;
		char s[100]{};
		char* p;
		for (i = 0; i < bin->Length; i++) {
			s[i] = bin[i];
			if (bin[i] < '0' || bin[i] > '7') {
				test = 1; textBox1->Text = "Invalid number !"; break;
			}
		}
		if ((test == 0) && op2 == "BIN") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 8); b = z;
			textBox1->Text = System::Convert::ToString(z, 2);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "HEX") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 8); b = z;
			textBox1->Text = System::Convert::ToString(z, 16);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "DEC") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 8); b = z;
			textBox1->Text = System::Convert::ToString(z, 10);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
	}
	else if (op1 == "HEX" && (op2 == "BIN" || op2 == "OCT" || op2 == "DEC")) {
		String^ bin; int i = 0, test = 0;
		bin = textBox1->Text;
		char s[100]{};
		char* p;
		for (i = 0; i < bin->Length; i++) {
			s[i] = bin[i];
			if (bin[i] < '0' || bin[i] > 'f') {
				test = 1; textBox1->Text = "Invalid number !"; break;
			}
		}
		if ((test == 0) && op2 == "BIN") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 16); b = z;
			textBox1->Text = System::Convert::ToString(z, 2);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "OCT") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 16); b = z;
			textBox1->Text = System::Convert::ToString(z, 8);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "DEC") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 16); b = z;
			textBox1->Text = System::Convert::ToString(z, 10);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		//UInt16 a = Convert::ToUInt32(textBox1->Text, 16);
		//char a = textBox1->Text[0];
		//textBox1->Text = System::Convert::ToString(a,10);
	}
	else if (op1 == "DEC" && (op2 == "BIN" || op2 == "OCT" || op2 == "HEX")) {
		String^ bin; int i = 0, test = 0;
		bin = textBox1->Text;
		char s[100]{};
		char* p;
		for (i = 0; i < bin->Length; i++) {
			s[i] = bin[i];
			if (bin[i] < '0' || bin[i] > '9') {
				test = 1; textBox1->Text = "Invalid number !"; break;
			}
		}
		if ((test == 0) && op2 == "BIN") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 10); b = z;
			textBox1->Text = System::Convert::ToString(z, 2);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "OCT") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 10); b = z;
			textBox1->Text = System::Convert::ToString(z, 8);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
		else if ((test == 0) && op2 == "HEX") {
			s[i] = '\0';
			int z = (int)strtol(s, &p, 10); b = z;
			textBox1->Text = System::Convert::ToString(z, 16);
			label1->Text = op1 + "(" + bin + ")" + "=" + op2 + "(" + textBox1->Text + ")";
		}
	}
}
private: System::Void generalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//General mood
	this->Hide();
	obj->Show();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//help
	this->Hide();
	MyForm17^ obj1 = gcnew MyForm17(this);
	obj1->Show();
}
private: System::Void developerInfoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Developer info
	this->Hide();
	MyForm18^ obj1 = gcnew MyForm18(this);
	obj1->Show();
}
};
}
