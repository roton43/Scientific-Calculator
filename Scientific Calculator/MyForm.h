#pragma once
#include "MyForm12.h"
#include "MyForm13.h"
#include "MyForm14.h"
#include "MyForm15.h"
#include "MyForm16.h"
#include "MyForm17.h"
#include "MyForm18.h"
#include "MyForm19.h"

namespace ScientificCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
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

	private: System::Windows::Forms::ToolStripMenuItem^ trigonometryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ baseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ comoplexNumberToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ developerInfoToolStripMenuItem;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
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
			this->trigonometryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->baseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comoplexNumberToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->developerInfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(10, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 106);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 19);
			this->label1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(10, 144);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 83);
			this->button1->TabIndex = 2;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(86, 144);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 83);
			this->button2->TabIndex = 2;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(161, 144);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 83);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(236, 144);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 83);
			this->button4->TabIndex = 2;
			this->button4->Text = L"AC";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(10, 221);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 83);
			this->button5->TabIndex = 2;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(86, 221);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 83);
			this->button6->TabIndex = 2;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(161, 221);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 83);
			this->button7->TabIndex = 2;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(236, 221);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 83);
			this->button8->TabIndex = 2;
			this->button8->Text = L"DLT";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(10, 301);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 83);
			this->button9->TabIndex = 2;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(86, 301);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 83);
			this->button10->TabIndex = 2;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(161, 301);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 83);
			this->button11->TabIndex = 2;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(236, 301);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 83);
			this->button12->TabIndex = 2;
			this->button12->Text = L"x";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(10, 380);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 83);
			this->button13->TabIndex = 2;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(86, 380);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 83);
			this->button14->TabIndex = 2;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(161, 380);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 83);
			this->button15->TabIndex = 2;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(236, 380);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 83);
			this->button16->TabIndex = 2;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(86, 460);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 75);
			this->button17->TabIndex = 2;
			this->button17->Text = L"± ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(236, 460);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 75);
			this->button18->TabIndex = 2;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(10, 460);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 75);
			this->button19->TabIndex = 2;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(161, 460);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 75);
			this->button20->TabIndex = 2;
			this->button20->Text = L"sqrt";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
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
			this->menuStrip1->Size = System::Drawing::Size(330, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// moodToolStripMenuItem
			// 
			this->moodToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->generalToolStripMenuItem,
					this->scientificToolStripMenuItem
			});
			this->moodToolStripMenuItem->Name = L"moodToolStripMenuItem";
			this->moodToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->moodToolStripMenuItem->Text = L"Mod";
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			this->generalToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->generalToolStripMenuItem->Text = L"General";
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->equationToolStripMenuItem,
					this->trigonometryToolStripMenuItem, this->baseToolStripMenuItem, this->comoplexNumberToolStripMenuItem, this->exitToolStripMenuItem
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
			this->degreeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::degreeToolStripMenuItem_Click);
			// 
			// degreeToolStripMenuItem1
			// 
			this->degreeToolStripMenuItem1->Name = L"degreeToolStripMenuItem1";
			this->degreeToolStripMenuItem1->Size = System::Drawing::Size(153, 26);
			this->degreeToolStripMenuItem1->Text = L"3 Degree";
			this->degreeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::degreeToolStripMenuItem1_Click);
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
			this->unknownToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::unknownToolStripMenuItem_Click);
			// 
			// unknownToolStripMenuItem1
			// 
			this->unknownToolStripMenuItem1->Name = L"unknownToolStripMenuItem1";
			this->unknownToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->unknownToolStripMenuItem1->Text = L"3 Unknown";
			this->unknownToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::unknownToolStripMenuItem1_Click);
			// 
			// trigonometryToolStripMenuItem
			// 
			this->trigonometryToolStripMenuItem->Name = L"trigonometryToolStripMenuItem";
			this->trigonometryToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->trigonometryToolStripMenuItem->Text = L"Trigonometry and logarithm";
			this->trigonometryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::trigonometryToolStripMenuItem_Click);
			// 
			// baseToolStripMenuItem
			// 
			this->baseToolStripMenuItem->Name = L"baseToolStripMenuItem";
			this->baseToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->baseToolStripMenuItem->Text = L"Base";
			this->baseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::baseToolStripMenuItem_Click);
			// 
			// comoplexNumberToolStripMenuItem
			// 
			this->comoplexNumberToolStripMenuItem->Name = L"comoplexNumberToolStripMenuItem";
			this->comoplexNumberToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->comoplexNumberToolStripMenuItem->Text = L"Complex Number";
			this->comoplexNumberToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::comoplexNumberToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// developerInfoToolStripMenuItem
			// 
			this->developerInfoToolStripMenuItem->Name = L"developerInfoToolStripMenuItem";
			this->developerInfoToolStripMenuItem->Size = System::Drawing::Size(122, 24);
			this->developerInfoToolStripMenuItem->Text = L"Developer Info";
			this->developerInfoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::developerInfoToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 543);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button16);
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
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximumSize = System::Drawing::Size(348, 590);
			this->Name = L"MyForm";
			this->Text = L"Scientific Calculator";
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
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	//For operator
	Button^ Numbersop = safe_cast<Button^>(sender);
	if(textBox1->Text!="0")d1 = Double::Parse(textBox1->Text);
	op = Numbersop->Text;
	textBox1->Text = "0";
	if (op != "sqrt")label1->Text = d1 + op;
	else label1->Text = op;
	
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
		if (d2 < 0)textBox1->Text = "Math error !";
		else {
			r = Math::Sqrt(d2);
			r = Int32(r * 100.) / 100.;
			textBox1->Text = System::Convert::ToString(r);
			label1->Text = "sqrt(" + d2 + ")";
			d1 = 0; d2 = 0;
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//All clear button
	textBox1->Text = "0";
	label1->Text = " ";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	//Plus-minus
	if (textBox1 -> Text->Contains("-")) {
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else {
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//DLT Button
	if (textBox1->Text->Length > 0) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 2, 1);
	}
}
private: System::Void unknownToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//2 unknown simual eqn
	this->Hide();
	MyForm1^ obj1 = gcnew MyForm1(this);
	obj1->ShowDialog();
	//label1->Text = "a = ?";
}
private: System::Void unknownToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	//3 unknown simual eqn
	this->Hide();
	MyForm13^ obj1 = gcnew MyForm13(this);
	obj1->ShowDialog();
}
private: System::Void degreeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//2 Degree eqn
	this->Hide();
	MyForm14^ obj1 = gcnew MyForm14(this);
	obj1->Show();
}
private: System::Void trigonometryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Trigonometry & logarithm
	this->Hide();
	MyForm15^ obj1 = gcnew MyForm15(this);
	obj1->Show();
}
private: System::Void baseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Base
	this->Hide();
	MyForm16^ obj1 = gcnew MyForm16(this);
	obj1->Show();
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
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//exit
	Application::Exit();
}
private: System::Void comoplexNumberToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Complex number
	this->Hide();
	MyForm19^ obj1 = gcnew MyForm19(this);
	obj1->Show();
}
private: System::Void degreeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	//3 degree
	this->Hide();
	MyForm18^ obj1 = gcnew MyForm18(this);
	obj1->Show();
}
};
}
