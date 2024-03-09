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
	/// Summary for MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm15(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm15(Form^ obj1)
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
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button20;
	protected:
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button15;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;

	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;

	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;

	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;

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
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(152, 460);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 75);
			this->button20->TabIndex = 6;
			this->button20->Text = L"sqrt";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(228, 302);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 82);
			this->button18->TabIndex = 24;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(228, 380);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 83);
			this->button16->TabIndex = 23;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(228, 221);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 83);
			this->button12->TabIndex = 22;
			this->button12->Text = L"x";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(228, 143);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 83);
			this->button8->TabIndex = 21;
			this->button8->Text = L"DLT";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm15::button8_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(1, 460);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 75);
			this->button19->TabIndex = 20;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm15::button19_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(77, 460);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 75);
			this->button17->TabIndex = 19;
			this->button17->Text = L"± ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm15::button17_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(307, 460);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(306, 83);
			this->button4->TabIndex = 18;
			this->button4->Text = L"AC";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm15::button4_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(152, 382);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 83);
			this->button15->TabIndex = 17;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(152, 301);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 83);
			this->button11->TabIndex = 16;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(152, 221);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 83);
			this->button7->TabIndex = 25;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(152, 144);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 83);
			this->button3->TabIndex = 15;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(77, 380);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 83);
			this->button14->TabIndex = 14;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm15::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(1, 380);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 83);
			this->button13->TabIndex = 13;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(77, 301);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 83);
			this->button10->TabIndex = 12;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(1, 301);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 83);
			this->button9->TabIndex = 11;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(77, 221);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 83);
			this->button6->TabIndex = 10;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(1, 221);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 83);
			this->button5->TabIndex = 9;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(77, 144);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 83);
			this->button2->TabIndex = 8;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(1, 144);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 83);
			this->button1->TabIndex = 7;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm15::EnterNumber);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(614, 106);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
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
			this->menuStrip1->Size = System::Drawing::Size(632, 30);
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
			this->moodToolStripMenuItem->Size = System::Drawing::Size(63, 26);
			this->moodToolStripMenuItem->Text = L"Mood";
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			this->generalToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->generalToolStripMenuItem->Text = L"General";
			this->generalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm15::generalToolStripMenuItem_Click);
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
			this->equationToolStripMenuItem->Size = System::Drawing::Size(257, 26);
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
			this->vectorToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->vectorToolStripMenuItem->Text = L"Vector";
			// 
			// trigonometryToolStripMenuItem
			// 
			this->trigonometryToolStripMenuItem->Name = L"trigonometryToolStripMenuItem";
			this->trigonometryToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->trigonometryToolStripMenuItem->Text = L"Trigonometry & Logarithm";
			// 
			// baseToolStripMenuItem
			// 
			this->baseToolStripMenuItem->Name = L"baseToolStripMenuItem";
			this->baseToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->baseToolStripMenuItem->Text = L"Base";
			// 
			// comoplexNumberToolStripMenuItem
			// 
			this->comoplexNumberToolStripMenuItem->Name = L"comoplexNumberToolStripMenuItem";
			this->comoplexNumberToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->comoplexNumberToolStripMenuItem->Text = L"Complex Number";
			// 
			// matrixToolStripMenuItem
			// 
			this->matrixToolStripMenuItem->Name = L"matrixToolStripMenuItem";
			this->matrixToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->matrixToolStripMenuItem->Text = L"Matrix";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 26);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm15::helpToolStripMenuItem_Click);
			// 
			// developerInfoToolStripMenuItem
			// 
			this->developerInfoToolStripMenuItem->Name = L"developerInfoToolStripMenuItem";
			this->developerInfoToolStripMenuItem->Size = System::Drawing::Size(122, 26);
			this->developerInfoToolStripMenuItem->Text = L"Developer Info";
			this->developerInfoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm15::developerInfoToolStripMenuItem_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(307, 302);
			this->button23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 83);
			this->button23->TabIndex = 22;
			this->button23->Text = L"x² ";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(307, 380);
			this->button24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(81, 83);
			this->button24->TabIndex = 23;
			this->button24->Text = L"sin^-1";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(533, 380);
			this->button25->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(80, 83);
			this->button25->TabIndex = 24;
			this->button25->Text = L"x^-x";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(383, 302);
			this->button28->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(80, 83);
			this->button28->TabIndex = 22;
			this->button28->Text = L"e^x";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(383, 380);
			this->button29->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(80, 83);
			this->button29->TabIndex = 23;
			this->button29->Text = L"cos^-1";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(457, 301);
			this->button33->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(80, 83);
			this->button33->TabIndex = 22;
			this->button33->Text = L"x^x";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(457, 380);
			this->button34->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(80, 83);
			this->button34->TabIndex = 23;
			this->button34->Text = L"tan^-1";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(533, 301);
			this->button38->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(80, 83);
			this->button38->TabIndex = 22;
			this->button38->Text = L"x^-1";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(228, 460);
			this->button39->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(80, 75);
			this->button39->TabIndex = 23;
			this->button39->Text = L"π";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(307, 222);
			this->button22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 83);
			this->button22->TabIndex = 22;
			this->button22->Text = L"nPr";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(382, 222);
			this->button27->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(80, 83);
			this->button27->TabIndex = 22;
			this->button27->Text = L"nCr";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(456, 222);
			this->button32->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(80, 83);
			this->button32->TabIndex = 22;
			this->button32->Text = L"!";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(532, 221);
			this->button37->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(81, 83);
			this->button37->TabIndex = 22;
			this->button37->Text = L"%";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(307, 144);
			this->button21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 83);
			this->button21->TabIndex = 22;
			this->button21->Text = L"sin";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(382, 144);
			this->button26->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(80, 83);
			this->button26->TabIndex = 22;
			this->button26->Text = L"cos";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(456, 144);
			this->button31->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(80, 83);
			this->button31->TabIndex = 22;
			this->button31->Text = L"tan";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(532, 143);
			this->button36->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(81, 83);
			this->button36->TabIndex = 22;
			this->button36->Text = L"ln";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(314, 380);
			this->button30->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(81, 83);
			this->button30->TabIndex = 23;
			this->button30->Text = L"sin^-1";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(390, 380);
			this->button35->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(80, 83);
			this->button35->TabIndex = 23;
			this->button35->Text = L"cos^-1";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(306, 380);
			this->button40->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(81, 83);
			this->button40->TabIndex = 23;
			this->button40->Text = L"sin^-1";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(382, 380);
			this->button41->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(80, 83);
			this->button41->TabIndex = 23;
			this->button41->Text = L"cos^-1";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(307, 380);
			this->button42->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(81, 83);
			this->button42->TabIndex = 23;
			this->button42->Text = L"sin^-1";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm15::EnterOperator);
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 551);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button15);
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
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MaximumSize = System::Drawing::Size(650, 598);
			this->Name = L"MyForm15";
			this->Text = L"Calculator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double d1, d2, r;
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
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	//For operator
	Button^ Numbersop = safe_cast<Button^>(sender);
	if (textBox1->Text != "0")d1 = Double::Parse(textBox1->Text);
	op = Numbersop->Text;
	textBox1->Text = "0";
	if (op == "sqrt")label1->Text = op;
	else if (op == "nCr")label1->Text = d1 + "C";
	else if (op == "nPr")label1->Text = d1 + "P";
	else if(op=="sin")label1->Text = op;
	else if (op == "cos")label1->Text = op;
	else if (op == "tan")label1->Text = op;
	else if (op == "sin^-1")label1->Text = op;
	else if (op == "cos^-1")label1->Text = op;
	else if (op == "tan^-1")label1->Text = op;
	else if (op == "e^x")label1->Text = "e^";
	else if (op == "x²")label1->Text = d1+"^2";
	else if (op == "ln")label1->Text = op;
	else if (op == "x^x")label1->Text = d1 + "^";
	else if (op == "x^-x")label1->Text = d1 + "^-";
	else if (op == "x^-1")label1->Text = d1 + "^-1";
	else label1->Text =d1+ op;
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
	label1->Text = "";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	// Equal button
	d2 = Double::Parse(textBox1->Text);
	if (op == "+") {
		r = d1 + d2;
		r = double(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = d1 + " + " + d2;
		d1 = 0; d2 = 0;
	}
	else if (op == "-") {
		r = d1 - d2;
		r = double(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = d1 + " - " + d2;
		d1 = 0; d2 = 0;
	}
	else if (op == "x") {
		r = d1 * d2;
		r = double(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = d1 + " x " + d2;
		d1 = 0; d2 = 0;
	}
	else if (op == "/") {
		if (d2 == 0) {
			label1->Text = "Mathe error !";
			d1 = 0; d2 = 0;
		}
		else {
			r = d1 / d2;
			r = double(r * 100.) / 100.;
			textBox1->Text = System::Convert::ToString(r);
			label1->Text = d1 + " / " + d2;
			d1 = 0; d2 = 0;
		}
	}
	else if (op == "sqrt") {
		if (d2 < 0)textBox1->Text = "Mathe error !";
		else {
			r = Math::Sqrt(d2);
			r = Int32(r * 100.) / 100.;
			textBox1->Text = System::Convert::ToString(r);
			label1->Text = "sqrt(" + d2 + ")";
			d1 = 0; d2 = 0,r=0;
		}
	}
	else if (op == "!") {
		if (d1 < 0)textBox1->Text = "Math error !",d1=0,d2=0;
		else {
			double fact = 1;
			for (int i = 1; i <= d1; i++) {
				fact *= i;
			}
			textBox1->Text= System::Convert::ToString(fact);
			label1->Text = d1 + op; d1 = 0; d2 = 0;
		}
	}
	else if (op == "nCr") {
		if (d2 > d1)textBox1->Text = "Math error !", d1 = 0, d2 = 0;
		else {
			double nfact = 1,rfact=1,nrfact=1;
			for (int i = 1; i <= d1; i++) {
				nfact *= i;
			}
			for (int i = 1; i <= d2; i++) {
				rfact *= i;
			}
			for (int i = 1; i <= d1-d2; i++) {
				nrfact *= i;
			}
			r = (nfact) / ((nrfact * rfact));
			textBox1->Text = System::Convert::ToString(r);
			label1->Text = d1 + "C" + d2; d1 = 0, d2 = 0, r = 0;
		}
	}
	else if (op == "nPr") {
		if (d2 > d1)textBox1->Text = "Math error !", d1 = 0, d2 = 0;
		else {
			double nfact = 1, nrfact = 1;
			for (int i = 1; i <= d1; i++) {
				nfact *= i;
			}
			for (int i = 1; i <= d1 - d2; i++) {
				nrfact *= i;
			}
			r = (nfact) / (nrfact);
			textBox1->Text = System::Convert::ToString(r);
			label1->Text = d1+"P"+d2; d1 = 0, d2 = 0, r = 0;
		}
	}
	else if (op == "%") {
		int a, b;
		a = Int64(d1); b = Int64(d2);
		if (a < 0)a *= (-1); if (b < 0)b *= (-1);
		textBox1->Text = System::Convert::ToString(a % b);
		label1->Text = d1 + op + d2; d1 = 0; d2 = 0;
	}
	else if (op == "π") {
		if (d1 != 0) {
			textBox1->Text = System::Convert::ToString(d1* 3.1415926535897932384626433);
			label1->Text = d1 + "π"; d1 = 0; d2 = 0;
		}
	}
	else if (op == "sin") {
		r = (3.1416 / 180) * d2;
		r = Math::Sin(r);
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = op + d2;
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "cos") {
		r = (3.1416 / 180) * d2;
		r = Math::Cos(r);
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = op + d2;
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "tan") {
		r = (3.1416 / 180) * d2;
		r = Math::Tan(r);
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = op + d2;
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "sin^-1") {
		r = Math::Sinh(d2);
		r = (180 / 3.1415926535897932384626433) * r;
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = op +"(" + d2+")";
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "cos^-1") {
		r = Math::Cosh(d2);
		r = (180 / 3.1415926535897932384626433) * r;
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = op + "(" + d2 + ")";
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "tan^-1") {
		r = Math::Tanh(d2);
		r = (180 / 3.1416) * r;
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = op + "(" + d2 + ")";
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "x²") {
		r = Math::Sqrt(d1);
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = d1+"^2";
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "x^-1") {
		r = 1/d1;
		r = Int64(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = d1 + "^-1";
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "x^x") {
		r = Math::Pow(d1,d2);
		r = double(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = d1 + "^"+d2;
		d1 = 0; d2 = 0; r = 0;
	}
	else if (op == "x^-x") {
		r =1/( Math::Pow(d1, d2));
		if (r > double::MaxValue)textBox1->Text = "Math error !";
		else {
			r = double(r * 100.) / 100.;
			textBox1->Text = System::Convert::ToString(r);
			label1->Text = d1 + "^-" + d2;
			d1 = 0; d2 = 0; r = 0;
		}
	}
	else if (op == "ln") {
		if (d2 < 0)textBox1->Text = "Math error !";
		else {
			r = Math::Log(d2);
			r = double(r * 100.) / 100.;
			textBox1->Text = System::Convert::ToString(r);
			label1->Text = op + d2;
			d1 = 0; d2 = 0; r = 0;
		}
	}
	else if(op=="e^x"){
		r = Math::Exp(d2);
		r = double(r * 100.) / 100.;
		textBox1->Text = System::Convert::ToString(r);
		label1->Text = op + d2;
		d1 = 0; d2 = 0; r = 0;
		}
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
