#pragma once
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
	/// Summary for MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm13(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm13(Form^ obj1)
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
		~MyForm13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button14;
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
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button25);
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(425, 229);
			this->groupBox1->TabIndex = 45;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Equation";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"start";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm13::label1_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(341, 180);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(79, 40);
			this->textBox13->TabIndex = 1;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(341, 143);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(79, 40);
			this->textBox9->TabIndex = 1;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(341, 105);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(79, 40);
			this->textBox8->TabIndex = 1;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(234, 180);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(44, 40);
			this->textBox12->TabIndex = 1;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(234, 143);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 40);
			this->textBox6->TabIndex = 1;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 108);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 40);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(234, 106);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 40);
			this->textBox7->TabIndex = 1;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(118, 181);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(51, 39);
			this->textBox11->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(3, 145);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 39);
			this->textBox4->TabIndex = 1;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(3, 181);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(44, 41);
			this->textBox10->TabIndex = 1;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(118, 145);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(51, 38);
			this->textBox5->TabIndex = 1;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(118, 107);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(51, 39);
			this->textBox3->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(6, 21);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(417, 68);
			this->textBox1->TabIndex = 1;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::Window;
			this->button25->Location = System::Drawing::Point(163, 180);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(71, 41);
			this->button25->TabIndex = 0;
			this->button25->Text = L"y +";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::Window;
			this->button24->Location = System::Drawing::Point(277, 181);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(71, 41);
			this->button24->TabIndex = 0;
			this->button24->Text = L"z  = ";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::Window;
			this->button22->Location = System::Drawing::Point(163, 143);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(71, 41);
			this->button22->TabIndex = 0;
			this->button22->Text = L"y +";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::Window;
			this->button16->Location = System::Drawing::Point(277, 144);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(71, 41);
			this->button16->TabIndex = 0;
			this->button16->Text = L"z  = ";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button23->Location = System::Drawing::Point(46, 181);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(72, 41);
			this->button23->TabIndex = 0;
			this->button23->Text = L"x   +   ";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::Window;
			this->button21->Location = System::Drawing::Point(163, 106);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(71, 41);
			this->button21->TabIndex = 0;
			this->button21->Text = L"y +";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(46, 144);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(72, 41);
			this->button15->TabIndex = 0;
			this->button15->Text = L"x   +   ";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Window;
			this->button12->Location = System::Drawing::Point(277, 105);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(71, 41);
			this->button12->TabIndex = 0;
			this->button12->Text = L"z  = ";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(46, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 41);
			this->button4->TabIndex = 0;
			this->button4->Text = L"x   +   ";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(278, 454);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(139, 70);
			this->button20->TabIndex = 28;
			this->button20->Text = L"sqrt";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm13::button20_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::Highlight;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(0, 592);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(417, 62);
			this->button18->TabIndex = 41;
			this->button18->Text = L"AC";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm13::button18_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(278, 523);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(139, 70);
			this->button8->TabIndex = 42;
			this->button8->Text = L"DLT";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm13::button8_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(0, 523);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(139, 70);
			this->button19->TabIndex = 40;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm13::button19_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(139, 523);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(139, 70);
			this->button17->TabIndex = 39;
			this->button17->Text = L"± ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm13::button17_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(278, 387);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(139, 70);
			this->button11->TabIndex = 38;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(278, 321);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(139, 70);
			this->button7->TabIndex = 43;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(278, 255);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 70);
			this->button3->TabIndex = 37;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(139, 454);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(139, 70);
			this->button14->TabIndex = 36;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm13::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(0, 454);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(143, 70);
			this->button13->TabIndex = 35;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(139, 387);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(139, 70);
			this->button10->TabIndex = 34;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(0, 387);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(139, 70);
			this->button9->TabIndex = 33;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(139, 321);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(139, 70);
			this->button6->TabIndex = 32;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(0, 321);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 70);
			this->button5->TabIndex = 31;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(139, 256);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 70);
			this->button2->TabIndex = 30;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(0, 256);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 70);
			this->button1->TabIndex = 29;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::EnterNumber);
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
			this->menuStrip1->Size = System::Drawing::Size(426, 28);
			this->menuStrip1->TabIndex = 44;
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
			this->generalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm13::generalToolStripMenuItem_Click);
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
			this->equationToolStripMenuItem->Size = System::Drawing::Size(209, 26);
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
			this->vectorToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->vectorToolStripMenuItem->Text = L"Vector";
			// 
			// trigonometryToolStripMenuItem
			// 
			this->trigonometryToolStripMenuItem->Name = L"trigonometryToolStripMenuItem";
			this->trigonometryToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->trigonometryToolStripMenuItem->Text = L"Trigonometry";
			// 
			// baseToolStripMenuItem
			// 
			this->baseToolStripMenuItem->Name = L"baseToolStripMenuItem";
			this->baseToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->baseToolStripMenuItem->Text = L"Base";
			// 
			// comoplexNumberToolStripMenuItem
			// 
			this->comoplexNumberToolStripMenuItem->Name = L"comoplexNumberToolStripMenuItem";
			this->comoplexNumberToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->comoplexNumberToolStripMenuItem->Text = L"Complex Number";
			// 
			// matrixToolStripMenuItem
			// 
			this->matrixToolStripMenuItem->Name = L"matrixToolStripMenuItem";
			this->matrixToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->matrixToolStripMenuItem->Text = L"Matrix";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm13::helpToolStripMenuItem_Click);
			// 
			// developerInfoToolStripMenuItem
			// 
			this->developerInfoToolStripMenuItem->Name = L"developerInfoToolStripMenuItem";
			this->developerInfoToolStripMenuItem->Size = System::Drawing::Size(122, 24);
			this->developerInfoToolStripMenuItem->Text = L"Developer Info";
			this->developerInfoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm13::developerInfoToolStripMenuItem_Click);
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 663);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MaximumSize = System::Drawing::Size(444, 710);
			this->Name = L"MyForm13";
			this->Text = L"Calculator";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double a, b, c, d, a1, b1, c1, d1,a2,b2,c2,d2, x, y, z, r,D;
		String^ op;
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
		textBox1->Text = textBox1->Text->Remove(0,1);
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
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	//sqrt
	Button^ Numbersop = safe_cast<Button^>(sender);
	//if (textBox1->Text != "0")d1 = Double::Parse(textBox1->Text);
	op = Numbersop->Text;
	textBox1->Text = "";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	//label
	label1->Text = "a = ?";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	//equal button
	if (op == "sqrt") {
		r = Double::Parse(textBox1->Text);
		if (r < 0)textBox1->Text = "Math error !";
		else {
			r = Math::Sqrt(r);
			r = int(r * 100.) / 100.;
			textBox1->Text = System::Convert::ToString(r);
			op = " ";
		}
	}
	static int test = 0;
	if (test == 0 && textBox1->Text != "") {
		a = double::Parse(textBox1->Text);
		textBox2->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "b = ?";
	}
	else if (test == 1 && textBox1->Text != "") {
		b = double::Parse(textBox1->Text);
		textBox3->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "c = ?";
	}
	else if (test == 2 && textBox1->Text != "") {
		c = double::Parse(textBox1->Text);
		textBox7->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "d = ?";
	}
	else if (test == 3 && textBox1->Text != "") {
		d = double::Parse(textBox1->Text);
		textBox8->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "a1 = ?";
	}
	else if (test == 4 && textBox1->Text != "") {
		a1 = double::Parse(textBox1->Text);
		textBox4->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "b1 = ?";
	}
	else if (test == 5 && textBox1->Text != "") {
		b1 = double::Parse(textBox1->Text);
		textBox5->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "c1 = ?";
	}
	else if (test == 6 && textBox1->Text != "") {
		c1 = double::Parse(textBox1->Text);
		textBox6->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "d1 = ?";
	}
	else if (test == 7 && textBox1->Text != "") {
		d1 = double::Parse(textBox1->Text);
		textBox9->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "a2 = ?";
	}
	else if (test == 8 && textBox1->Text != "") {
		a2 = double::Parse(textBox1->Text);
		textBox10->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "b2 = ?";
	}
	else if (test == 9 && textBox1->Text != "") {
		b2 = double::Parse(textBox1->Text);
		textBox11->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "c2 = ?";
	}
	else if (test == 10 && textBox1->Text != "") {
		c2 = double::Parse(textBox1->Text);
		textBox12->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		label1->Text = "d2 = ?";
	}
	else if (test == 11 && textBox1->Text != "") {
		d2 = double::Parse(textBox1->Text);
		textBox13->Text = textBox1->Text;
		textBox1->Text = ""; test++;
		//label1->Text = "a2 = ?";
	}if (test == 12) {
		D = ((a * b1 * c2) + (b * a2 * c1) + (c * a1 * b2)) - ((a * c1 * b2) + (b * a1 * c2) + (c * b1 * a2));
		if (D == 0) {
			textBox1->Text = "Math error !";
		}
		else {
			x = (((b * c2 * d1) + (c * b1 * d2) + (d * c1 * b2)) - ((b * c1 * d2) + (c * b2 * d1) + (d * b1 * c2))) / D;
			y = (((a * c1 * d2) + (c * a2 * d1) + (d * a1 * c2)) - ((a * c2 * d1) + (c * a1 * d2) + (d * c1 * a2))) / D;
			z = (((a * b2 * d1) + (b * a1 * d2) + (d * b1 * a2)) - ((a * b1 * d2) + (b * a2 * d1) + (d * a1 * b2))) / D;
			x = int(x * 100.) / 100.;
			y = int(y * 100.) / 100.;
			z = int(z * 100.) / 100.;
			textBox1->Text = "x = " + x + "," + "y = " + y+","+"z = "+z;
			test = 0;
		}
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	//All clear button
	textBox1->Text = "0";
	label1->Text = "start";
	textBox2->Text = "0";
	textBox3->Text = "0";
	textBox4->Text = "0";
	textBox5->Text = "0";
	textBox6->Text = "0";
	textBox7->Text = "0";
	textBox8->Text = "0";
	textBox9->Text = "0";
	textBox10->Text = "0";
	textBox11->Text = "0";
	textBox12->Text = "0";
	textBox13->Text = "0";
}
private: System::Void generalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//General mood
	this->Hide();
	obj->Show();
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
