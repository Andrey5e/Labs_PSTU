#pragma once
#include <string>

namespace Calculator2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::ComboBox^ comboBox1;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;












	protected:

	protected:

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Российский", L"Американский", L"Английский" });
			this->comboBox1->Location = System::Drawing::Point(651, 15);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(187, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(6, 37);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(119, 22);
			this->dateTimePicker1->TabIndex = 5;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(6, 95);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(119, 22);
			this->dateTimePicker2->TabIndex = 6;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker2_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(378, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyChar);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(637, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyChar);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(378, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyChar);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(637, 224);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 10;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyChar);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(94, 286);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyChar);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(378, 286);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 12;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyChar);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(638, 284);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 13;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyChar);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(637, 97);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 14;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyChar);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(584, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Дней:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(311, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Недель:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(584, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Дней:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(303, 225);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Месяцев:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(584, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Дней:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 287);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Лет:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(303, 286);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Месяцев:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(584, 285);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Дней:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(861, 392);
			this->tabControl1->TabIndex = 23;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Controls->Add(this->button18);
			this->tabPage1->Controls->Add(this->button17);
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->dateTimePicker2);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(853, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Калькулятор дат";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(200, 284);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(95, 26);
			this->button18->TabIndex = 30;
			this->button18->Text = L"Посчитать";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(484, 284);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(95, 26);
			this->button17->TabIndex = 29;
			this->button17->Text = L"Посчитать";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(743, 282);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(95, 26);
			this->button16->TabIndex = 28;
			this->button16->Text = L"Посчитать";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(484, 224);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(95, 26);
			this->button15->TabIndex = 27;
			this->button15->Text = L"Посчитать";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(743, 222);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(95, 26);
			this->button14->TabIndex = 26;
			this->button14->Text = L"Посчитать";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(484, 157);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(95, 26);
			this->button13->TabIndex = 25;
			this->button13->Text = L"Посчитать";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(743, 157);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(95, 26);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Посчитать";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(743, 95);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(95, 26);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Посчитать";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button22);
			this->tabPage2->Controls->Add(this->button21);
			this->tabPage2->Controls->Add(this->button20);
			this->tabPage2->Controls->Add(this->button19);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(853, 363);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Калькулятор чисел";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 109);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 17);
			this->label10->TabIndex = 23;
			this->label10->Text = L"=";
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(728, 221);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(62, 50);
			this->button23->TabIndex = 22;
			this->button23->Text = L"=";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(650, 258);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(58, 49);
			this->button22->TabIndex = 21;
			this->button22->Text = L"/";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(557, 258);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(62, 49);
			this->button21->TabIndex = 20;
			this->button21->Text = L"*";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(650, 185);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(58, 51);
			this->button20->TabIndex = 19;
			this->button20->Text = L"-";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(557, 185);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(61, 51);
			this->button19->TabIndex = 18;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 55);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 17);
			this->label9->TabIndex = 17;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(16, 129);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(709, 22);
			this->textBox11->TabIndex = 12;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(16, 75);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(709, 22);
			this->textBox10->TabIndex = 11;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(16, 22);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(709, 22);
			this->textBox9->TabIndex = 10;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(436, 258);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 52);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(337, 258);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 53);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(239, 260);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 51);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(128, 258);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 51);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(16, 258);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 51);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(436, 185);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 51);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(338, 185);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 51);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(239, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(851, 357);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n!= 8 && n != 44)
		{
			e->Handled = true;
		}

	}

	private: System::Void textBox8_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n != 8 && n != 44)
		{
			e->Handled = true;
		}
	
	}

	private: System::Void textBox2_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n != 8 && n != 44)
		{
			e->Handled = true;
		}

	}

	private: System::Void textBox3_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n != 8 && n != 44)
		{
			e->Handled = true;
		}

	}

	private: System::Void textBox4_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n != 8 && n != 44)
		{
			e->Handled = true;
		}

	}

	private: System::Void textBox5_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n != 8 && n != 44)
		{
			e->Handled = true;
		}

	}

	private: System::Void textBox6_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n != 8 && n != 44)
		{
			e->Handled = true;
		}

	}

	private: System::Void textBox7_KeyChar(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		char n = e->KeyChar;

		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && n != 8 && n != 44)
		{
			e->Handled = true;
		}

	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (comboBox1->SelectedIndex)
		{
		case 0: dateTimePicker1->CustomFormat = "dd.MM.yyyy";

			dateTimePicker2->CustomFormat = "dd.MM.yyyy";

			break;

		case 1:  dateTimePicker1->CustomFormat = "M/dd/yyyy";

			dateTimePicker2->CustomFormat = "M/dd/yyyy";

			break;

		case 2: dateTimePicker1->CustomFormat = "dd/MM/yyyy";

			dateTimePicker2->CustomFormat = "dd/MM/yyyy";

			break;

		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text=="")textBox9->Text += button1->Text;
		else textBox10->Text += button1->Text;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button2->Text;
		else textBox10->Text += button2->Text;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button3->Text;
		else textBox10->Text += button3->Text;
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button4->Text;
		else textBox10->Text += button4->Text;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button5->Text;
		else textBox10->Text += button5->Text;
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button6->Text;
		else textBox10->Text += button6->Text;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button7->Text;
		else textBox10->Text += button7->Text;
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button8->Text;
		else textBox10->Text += button8->Text;
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button9->Text;
		else textBox10->Text += button9->Text;
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label9->Text == "")textBox9->Text += button10->Text;
		else textBox10->Text += button10->Text;
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		label9->Text = "+";
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		label9->Text = "-";
	}

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		label9->Text = "*";
	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		label9->Text = "/";
	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (Convert::ToChar(label9->Text))
		{
		case '+':textBox11->Text = Convert::ToString(Convert::ToDouble(textBox9->Text) + Convert::ToDouble(textBox10->Text)); break;
		case '-':textBox11->Text = Convert::ToString(Convert::ToDouble(textBox9->Text) - Convert::ToDouble(textBox10->Text)); break;
		case '*':textBox11->Text = Convert::ToString(Convert::ToDouble(textBox9->Text) * Convert::ToDouble(textBox10->Text)); break;
		case '/':textBox11->Text = Convert::ToString(Convert::ToDouble(textBox9->Text) / Convert::ToDouble(textBox10->Text)); break;
		default:break;
		}
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8->Text == "")
		{
			textBox8->Text = "0";
		}

		int day = Convert::ToInt32(textBox8->Text);
		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));

		int dayt;

		while (day > 0)
		{

			switch (month1)
			{
			case 1: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 2: day -= 28; if (year1 % 4 == 0) day -= 1; dayt = day; month1 += 1; if (dayt < 0 && year1 % 4 != 0) dayt += 28; else if (dayt < 0 && year1 % 4 == 0) dayt += 29; break;
			case 3: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 4: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 5: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 6: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 7: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 8: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 9: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 10:day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 11:day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 12:day -= 31;  dayt = day; if (day > 0) { month1 = 1; year1 += 1; } if (dayt < 0) { dayt += 31; month1 += 1; } break;
			}
			if (day < 0) month1 -= 1;
		}

		switch (month1)
		{
		case 1: if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 2:if (day1 + dayt > 28 && year1 % 4 != 0)
		{
			month1 += 1;
			day1 = day1 + dayt - 28;
			dayt = 0;
		}
			  else if (day1 + dayt > 29 && year1 % 4 == 0) { month1 += 1; day1 = day1 + dayt - 29; dayt = 0; }
			  break;
		case 3:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 4:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 5:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 6:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 7:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 8:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 9:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 10:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			   break;
		case 11:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			   break;
		case 12:if (day1 + dayt > 31)
		{
			year1 += 1;
			month1 = 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			   break;
		}
		day1 += dayt;

		stra = Convert::ToString(day1) + "." + Convert::ToString(month1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			textBox1->Text = "0";
		}

		if (textBox2->Text == "")
		{
			textBox2->Text = "0";
		}

		if (Convert::ToInt16(textBox2->Text) >= 7)
		{
			textBox2->Text = "0";
		}

		int day = Convert::ToInt16(textBox1->Text) * 7 + Convert::ToInt16(textBox2->Text);
		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));

		int dayt;

		while (day > 0)
		{

			switch (month1)
			{
			case 1: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 2: day -= 28; if (year1 % 4 == 0) day -= 1; dayt = day; month1 += 1; if (dayt < 0 && year1 % 4 != 0) dayt += 28; else if (dayt < 0 && year1 % 4 == 0) dayt += 29; break;
			case 3: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 4: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 5: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 6: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 7: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 8: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 9: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 10:day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 11:day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 12:day -= 31;  dayt = day; if (day > 0) { month1 = 1; year1 += 1; } if (dayt < 0) { dayt += 31; month1 += 1; } break;
			}
			if (day < 0) month1 -= 1;
		}

		switch (month1)
		{
		case 1: if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 2:if (day1 + dayt > 28 && year1 % 4 != 0)
		{
			month1 += 1;
			day1 = day1 + dayt - 28;
			dayt = 0;
		}
			  else if (day1 + dayt > 29 && year1 % 4 == 0) { month1 += 1; day1 = day1 + dayt - 29; dayt = 0; }
			  break;
		case 3:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 4:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 5:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 6:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 7:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 8:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 9:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 10:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			   break;
		case 11:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			   break;
		case 12:if (day1 + dayt > 31)
		{
			year1 += 1;
			month1 = 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			   break;
		}
		day1 += dayt;

		stra = Convert::ToString(day1) + "." + Convert::ToString(month1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			textBox1->Text = "0";
		}

		if (textBox2->Text == "")
		{
			textBox2->Text = "0";
		}

		int day = Convert::ToInt16(textBox1->Text) * 7 + Convert::ToInt16(textBox2->Text);
		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));

		int dayt;

		while (day > 0)
		{

			switch (month1)
			{
			case 1: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 2: day -= 28; if (year1 % 4 == 0) day -= 1; dayt = day; month1 += 1; if (dayt < 0 && year1 % 4 != 0) dayt += 28; else if (dayt < 0 && year1 % 4 == 0) dayt += 29; break;
			case 3: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 4: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 5: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 6: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 7: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 8: day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 9: day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 10:day -= 31;  dayt = day; month1 += 1; if (dayt < 0) dayt += 31; break;
			case 11:day -= 30;  dayt = day; month1 += 1; if (dayt < 0) dayt += 30; break;
			case 12:day -= 31;  dayt = day; if (day > 0) { month1 = 1; year1 += 1; } if (dayt < 0) { dayt += 31; month1 += 1; } break;
			}
			if (day < 0) month1 -= 1;
		}

		switch (month1)
		{
		case 1: if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 2:if (day1 + dayt > 28 && year1 % 4 != 0)
		{
			month1 += 1;
			day1 = day1 + dayt - 28;
			dayt = 0;
		}
			  else if (day1 + dayt > 29 && year1 % 4 == 0) { month1 += 1; day1 = day1 + dayt - 29; dayt = 0; }
			  break;
		case 3:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 4:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 5:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 6:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 7:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 8:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			  break;
		case 9:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			  break;
		case 10:if (day1 + dayt > 31)
		{
			month1 += 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			   break;
		case 11:if (day1 + dayt > 30)
		{
			month1 += 1;
			day1 = day1 + dayt - 30;
			dayt = 0;
		}
			   break;
		case 12:if (day1 + dayt > 31)
		{
			year1 += 1;
			month1 = 1;
			day1 = day1 + dayt - 31;
			dayt = 0;
		}
			   break;
		}
		day1 += dayt;

		stra = Convert::ToString(day1) + "." + Convert::ToString(month1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "")
		{
			textBox3->Text = "0";
		}

		if (textBox4->Text == "")
		{
			textBox4->Text = "0";
		}

		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));
		int month = Convert::ToInt16(textBox3->Text);

		while (month + month1 >= 12)
		{
			month -= 12;
			year1 += 1;
		}

		int monthtest1 = month + month1;
		if (monthtest1 > 12) monthtest1 %= 12;

		switch (monthtest1)
		{
		case 1:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 2:if (Convert::ToInt16(textBox4->Text) > 28 && year1 % 4 != 0) textBox4->Text = "0"; else if (Convert::ToInt16(textBox4->Text) > 29 && year1 % 4 == 0) textBox4->Text = "0"; break;
		case 3:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 4:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 5:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 6:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 7:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 8:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 9:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 10:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 11:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 12:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 0:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		}

		int day = Convert::ToInt16(textBox4->Text);
		day1 += day;

		switch (monthtest1)
		{
		case 1:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 2:if (day1 > 28 && year1 % 4 != 0) { day1 -= 28; monthtest1 += 1; } else if (day1 > 29 && year1 % 4 == 0) { day1 -= 29; monthtest1 += 1; } break;
		case 3:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 4:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 5:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 6:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 7:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 8:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 9:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 10:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 11:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 12:if (day1 > 31) { day1 -= 31; monthtest1 = 1; } break;
		case 0:if (day1 > 31) { day1 -= 31; monthtest1 = 1; } else monthtest1 = 12; break;
		}


		stra = Convert::ToString(day1) + "." + Convert::ToString(monthtest1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "")
		{
			textBox3->Text = "0";
		}

		if (textBox4->Text == "")
		{
			textBox4->Text = "0";
		}

		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));
		int month = Convert::ToInt16(textBox3->Text);

		while (month + month1 >= 12)
		{
			month -= 12;
			year1 += 1;
		}

		int monthtest1 = month + month1;
		if (monthtest1 > 12) monthtest1 %= 12;

		switch (monthtest1)
		{
		case 1:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 2:if (Convert::ToInt16(textBox4->Text) > 28 && year1 % 4 != 0) textBox4->Text = "0"; else if (Convert::ToInt16(textBox4->Text) > 29 && year1 % 4 == 0) textBox4->Text = "0"; break;
		case 3:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 4:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 5:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 6:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 7:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 8:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 9:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 10:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 11:if (Convert::ToInt16(textBox4->Text) > 30) textBox4->Text = "0"; break;
		case 12:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		case 0:if (Convert::ToInt16(textBox4->Text) > 31) textBox4->Text = "0"; break;
		}

		int day = Convert::ToInt16(textBox4->Text);
		day1 += day;

		switch (monthtest1)
		{
		case 1:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 2:if (day1 > 28 && year1 % 4 != 0) { day1 -= 28; monthtest1 += 1; }
			  else if (day1 > 29 && year1 % 4 == 0) { day1 -= 29; monthtest1 += 1; } break;
		case 3:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 4:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 5:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 6:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 7:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 8:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 9:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 10:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 11:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 12:if (day1 > 31) { day1 -= 31; monthtest1 = 1; } break;
		case 0:if (day1 > 31) { day1 -= 31; monthtest1 = 1; }
			  else monthtest1 = 12; break;
		}


		stra = Convert::ToString(day1) + "." + Convert::ToString(monthtest1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}
	
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text == "")
		{
			textBox5->Text = "0";
		}

		if (textBox6->Text == "")
		{
			textBox6->Text = "0";
		}

		if (textBox7->Text == "")
		{
			textBox7->Text = "0";
		}

		if (Convert::ToInt16(textBox6->Text) >= 12)
		{
			textBox2->Text = "0";
		}

		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));
		int month = Convert::ToInt16(textBox6->Text);
		int year = Convert::ToInt16(textBox5->Text);

		while (month + month1 >= 12)
		{
			month -= 12;
			year1 += 1;
		}
		year1 += year;

		int monthtest1 = month + month1;
		if (monthtest1 > 12) monthtest1 %= 12;

		switch (monthtest1)
		{
		case 1:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 2:if (Convert::ToInt16(textBox7->Text) > 28 && year1 % 4 != 0) textBox7->Text = "0"; else if (Convert::ToInt16(textBox7->Text) > 29 && year1 % 4 == 0) textBox7->Text = "0"; break;
		case 3:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 4:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 5:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 6:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 7:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 8:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 9:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 10:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 11:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 12:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 0:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		}

		int day = Convert::ToInt16(textBox7->Text);
		day1 += day;

		switch (monthtest1)
		{
		case 1:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 2:if (day1 > 28 && year1 % 4 != 0) { day1 -= 28; monthtest1 += 1; }
			  else if (day1 > 29 && year1 % 4 == 0) { day1 -= 29; monthtest1 += 1; } break;
		case 3:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 4:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 5:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 6:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 7:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 8:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 9:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 10:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 11:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 12:if (day1 > 31) { day1 -= 31; monthtest1 = 1; } break;
		case 0:if (day1 > 31) { day1 -= 31; monthtest1 = 1; }
			  else monthtest1 = 12; break;
		}


		stra = Convert::ToString(day1) + "." + Convert::ToString(monthtest1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text == "")
		{
			textBox5->Text = "0";
		}

		if (textBox6->Text == "")
		{
			textBox6->Text = "0";
		}

		if (textBox7->Text == "")
		{
			textBox7->Text = "0";
		}

		if (Convert::ToInt16(textBox6->Text) >= 12)
		{
			textBox2->Text = "0";
		}

		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));
		int month = Convert::ToInt16(textBox6->Text);
		int year = Convert::ToInt16(textBox5->Text);

		while (month + month1 >= 12)
		{
			month -= 12;
			year1 += 1;
		}
		year1 += year;

		int monthtest1 = month + month1;
		if (monthtest1 > 12) monthtest1 %= 12;

		switch (monthtest1)
		{
		case 1:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 2:if (Convert::ToInt16(textBox7->Text) > 28 && year1 % 4 != 0) textBox7->Text = "0"; else if (Convert::ToInt16(textBox7->Text) > 29 && year1 % 4 == 0) textBox7->Text = "0"; break;
		case 3:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 4:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 5:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 6:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 7:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 8:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 9:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 10:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 11:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 12:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 0:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		}

		int day = Convert::ToInt16(textBox7->Text);
		day1 += day;

		switch (monthtest1)
		{
		case 1:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 2:if (day1 > 28 && year1 % 4 != 0) { day1 -= 28; monthtest1 += 1; }
			  else if (day1 > 29 && year1 % 4 == 0) { day1 -= 29; monthtest1 += 1; } break;
		case 3:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 4:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 5:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 6:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 7:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 8:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 9:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 10:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 11:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 12:if (day1 > 31) { day1 -= 31; monthtest1 = 1; } break;
		case 0:if (day1 > 31) { day1 -= 31; monthtest1 = 1; }
			  else monthtest1 = 12; break;
		}


		stra = Convert::ToString(day1) + "." + Convert::ToString(monthtest1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5->Text == "")
		{
			textBox5->Text = "0";
		}

		if (textBox6->Text == "")
		{
			textBox6->Text = "0";
		}

		if (textBox7->Text == "")
		{
			textBox7->Text = "0";
		}

		if (Convert::ToInt16(textBox6->Text) >= 12)
		{
			textBox2->Text = "0";
		}

		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");

		int day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		int month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		int year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));
		int month = Convert::ToInt16(textBox6->Text);
		int year = Convert::ToInt16(textBox5->Text);

		while (month + month1 >= 12)
		{
			month -= 12;
			year1 += 1;
		}
		year1 += year;

		int monthtest1 = month + month1;
		if (monthtest1 > 12) monthtest1 %= 12;

		switch (monthtest1)
		{
		case 1:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 2:if (Convert::ToInt16(textBox7->Text) > 28 && year1 % 4 != 0) textBox7->Text = "0"; else if (Convert::ToInt16(textBox7->Text) > 29 && year1 % 4 == 0) textBox7->Text = "0"; break;
		case 3:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 4:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 5:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 6:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 7:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 8:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 9:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 10:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 11:if (Convert::ToInt16(textBox7->Text) > 30) textBox7->Text = "0"; break;
		case 12:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		case 0:if (Convert::ToInt16(textBox7->Text) > 31) textBox7->Text = "0"; break;
		}

		int day = Convert::ToInt16(textBox7->Text);
		day1 += day;

		switch (monthtest1)
		{
		case 1:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 2:if (day1 > 28 && year1 % 4 != 0) { day1 -= 28; monthtest1 += 1; }
			  else if (day1 > 29 && year1 % 4 == 0) { day1 -= 29; monthtest1 += 1; } break;
		case 3:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 4:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 5:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 6:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 7:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 8:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 9:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 10:if (day1 > 31) { day1 -= 31; monthtest1 += 1; } break;
		case 11:if (day1 > 30) { day1 -= 30; monthtest1 += 1; } break;
		case 12:if (day1 > 31) { day1 -= 31; monthtest1 = 1; } break;
		case 0:if (day1 > 31) { day1 -= 31; monthtest1 = 1; }
			  else monthtest1 = 12; break;
		}


		stra = Convert::ToString(day1) + "." + Convert::ToString(monthtest1) + "." + Convert::ToString(year1);
		dateTimePicker2->Text = stra;
	}

	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");
		String^ stra1 = dateTimePicker2->Value.ToString("dd/MM/yyyy");

		int day, month, year, dayt, yeart;
		int day1, month1, year1;
		int day2, month2, year2;

		day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));

		day2 = Convert::ToInt16(Convert::ToString(stra1[0]) + Convert::ToString(stra1[1]));
		month2 = Convert::ToInt16(Convert::ToString(stra1[3]) + Convert::ToString(stra1[4]));
		year2 = Convert::ToInt16(Convert::ToString(stra1[6]) + Convert::ToString(stra1[7]) + Convert::ToString(stra1[8]) + Convert::ToString(stra1[9]));

		dayt = day1;
		yeart = year1;

		year = year2 - year1;

		if (year >= 1 && month2 == month1 && day2 < day1) year -= 1;
		if (year >= 1 && month2 < month1) year -= 1;

		day = year * 365;
		month = year * 12;

		textBox5->Text = Convert::ToString(year);

		if (month1 <= 2 && yeart % 4 == 0)
		{
			day += 1;
			yeart += 1;
		}
		else
		{
			yeart += 1;
		}

		while (yeart < year2)
		{
			if (yeart % 4 == 0)
			{
				day += 1;
			}
			yeart += 1;
		}

		if (month2 > 2 && year2 % 4 == 0)
		{
			day += 1;
		}

		if (month1 == month2 && day2 < day1 && year1 != year2)
		{
			switch (month1)
			{
			case 1:day += 31; month1 += 1; month += 1; break;
			case 2:day += 28; month1 += 1; month += 1; break;
			case 3:day += 31; month1 += 1; month += 1; break;
			case 4:day += 30; month1 += 1; month += 1; break;
			case 5:day += 31; month1 += 1; month += 1; break;
			case 6:day += 30; month1 += 1; month += 1; break;
			case 7:day += 31; month1 += 1; month += 1; break;
			case 8:day += 31; month1 += 1; month += 1; break;
			case 9:day += 30; month1 += 1; month += 1; break;
			case 10:day += 31; month1 += 1; month += 1; break;
			case 11:day += 30; month1 += 1; month += 1; break;
			case 12:day += 31; month1 = 1; month += 1; break;
			}
		}

		while (month1 != month2 || day1 != day2)
		{
			if (month1 == month2)
			{
				if (day2 > day1)day += day2 - day1;
				else day -= day1 - day2;
				day1 = day2;
			}
			else
			{
				switch (month1)
				{
				case 1:day += 31; month1 += 1; month += 1; break;
				case 2:day += 28; month1 += 1; month += 1; break;
				case 3:day += 31; month1 += 1; month += 1; break;
				case 4:day += 30; month1 += 1; month += 1; break;
				case 5:day += 31; month1 += 1; month += 1; break;
				case 6:day += 30; month1 += 1; month += 1; break;
				case 7:day += 31; month1 += 1; month += 1; break;
				case 8:day += 31; month1 += 1; month += 1; break;
				case 9:day += 30; month1 += 1; month += 1; break;
				case 10:day += 31; month1 += 1; month += 1; break;
				case 11:day += 30; month1 += 1; month += 1; break;
				case 12:day += 31; month1 = 1; month += 1; break;
				}
			}
		}

		int r = day2 - dayt;
		if (day2 < dayt)
		{
			switch (month1)
			{
			case 1: r = day2 + 31 - dayt; break;
			case 2: r = day2 + 31 - dayt; break;
			case 3: if (year2 % 4 != 0) r = day2 + 28 - dayt; else r = day2 + 29 - dayt; break;
			case 4: r = day2 + 31 - dayt; break;
			case 5: r = day2 + 30 - dayt; break;
			case 6: r = day2 + 31 - dayt; break;
			case 7: r = day2 + 30 - dayt; break;
			case 8: r = day2 + 31 - dayt; break;
			case 9: r = day2 + 31 - dayt; break;
			case 10: r = day2 + 30 - dayt; break;
			case 11: r = day2 + 31 - dayt; break;
			case 12: r = day2 + 30 - dayt; break;
			}
			month -= 1;
		}

		textBox1->Text = Convert::ToString(day / 7);
		textBox2->Text = Convert::ToString(day - day / 7 * 7);
		textBox3->Text = Convert::ToString(month);
		textBox4->Text = Convert::ToString(r);

		month %= 12;

		textBox6->Text = Convert::ToString(month);
		textBox7->Text = Convert::ToString(r);
		textBox8->Text = Convert::ToString(day);
	}

	private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ stra = dateTimePicker1->Value.ToString("dd/MM/yyyy");
		String^ stra1 = dateTimePicker2->Value.ToString("dd/MM/yyyy");

		int day, month, year, dayt, yeart;
		int day1, month1, year1;
		int day2, month2, year2;

		day1 = Convert::ToInt16(Convert::ToString(stra[0]) + Convert::ToString(stra[1]));
		month1 = Convert::ToInt16(Convert::ToString(stra[3]) + Convert::ToString(stra[4]));
		year1 = Convert::ToInt16(Convert::ToString(stra[6]) + Convert::ToString(stra[7]) + Convert::ToString(stra[8]) + Convert::ToString(stra[9]));

		day2 = Convert::ToInt16(Convert::ToString(stra1[0]) + Convert::ToString(stra1[1]));
		month2 = Convert::ToInt16(Convert::ToString(stra1[3]) + Convert::ToString(stra1[4]));
		year2 = Convert::ToInt16(Convert::ToString(stra1[6]) + Convert::ToString(stra1[7]) + Convert::ToString(stra1[8]) + Convert::ToString(stra1[9]));

		dayt = day1;
		yeart = year1;

		year = year2 - year1;

		if (year >= 1 && month2 == month1 && day2 < day1) year -= 1;
		if (year >= 1 && month2 < month1) year -= 1;

		day = year * 365;
		month = year * 12;

		textBox5->Text = Convert::ToString(year);

		if (month1 <= 2 && yeart % 4 == 0)
		{
			day += 1;
			yeart += 1;
		}
		else
		{
			yeart += 1;
		}

		while (yeart< year2)
		{
			if (yeart % 4 == 0)
			{
				day += 1;
			}
			yeart += 1;
		}

		if (month2 > 2 && year2 % 4 == 0)
		{
			day += 1;
		}

		if (month1 == month2 && day2 < day1 && year1 != year2)
		{
			switch (month1)
			{
			case 1:day += 31; month1 += 1; month += 1; break;
			case 2:day += 28; month1 += 1; month += 1; break;
			case 3:day += 31; month1 += 1; month += 1; break;
			case 4:day += 30; month1 += 1; month += 1; break;
			case 5:day += 31; month1 += 1; month += 1; break;
			case 6:day += 30; month1 += 1; month += 1; break;
			case 7:day += 31; month1 += 1; month += 1; break;
			case 8:day += 31; month1 += 1; month += 1; break;
			case 9:day += 30; month1 += 1; month += 1; break;
			case 10:day += 31; month1 += 1; month += 1; break;
			case 11:day += 30; month1 += 1; month += 1; break;
			case 12:day += 31; month1 = 1; month += 1; break;
			}
		}

		while (month1 != month2 || day1 != day2)
		{
			if (month1 == month2)
			{
				if (day2 > day1)day += day2 - day1;
				else day -= day1 - day2;
				day1 = day2;
			}
			else
			{
				switch (month1)
				{
				case 1:day += 31; month1 += 1; month += 1; break;
				case 2:day += 28; month1 += 1; month += 1; break;
				case 3:day += 31; month1 += 1; month += 1; break;
				case 4:day += 30; month1 += 1; month += 1; break;
				case 5:day += 31; month1 += 1; month += 1; break;
				case 6:day += 30; month1 += 1; month += 1; break;
				case 7:day += 31; month1 += 1; month += 1; break;
				case 8:day += 31; month1 += 1; month += 1; break;
				case 9:day += 30; month1 += 1; month += 1; break;
				case 10:day += 31; month1 += 1; month += 1; break;
				case 11:day += 30; month1 += 1; month += 1; break;
				case 12:day += 31; month1 = 1; month += 1; break;
				}
			}
		}

		int r = day2 - dayt;
		if (day2 < dayt)
		{
			switch (month1)
			{
			case 1: r = day2 + 31 - dayt; break;
			case 2: r = day2 + 31 - dayt; break;
			case 3: if (year2 % 4 != 0) r = day2 + 28 - dayt; else r = day2 + 29 - dayt; break;
			case 4: r = day2 + 31 - dayt; break;
			case 5: r = day2 + 30 - dayt; break;
			case 6: r = day2 + 31 - dayt; break;
			case 7: r = day2 + 30 - dayt; break;
			case 8: r = day2 + 31 - dayt; break;
			case 9: r = day2 + 31 - dayt; break;
			case 10: r = day2 + 30 - dayt; break;
			case 11: r = day2 + 31 - dayt; break;
			case 12: r = day2 + 30 - dayt; break;
			}
			month -= 1;
		}

		textBox1->Text = Convert::ToString(day / 7);
		textBox2->Text = Convert::ToString(day - day / 7 * 7);
		textBox3->Text = Convert::ToString(month);
		textBox4->Text = Convert::ToString(r);

		month %= 12;

		textBox6->Text = Convert::ToString(month);
		textBox7->Text = Convert::ToString(r);
		textBox8->Text = Convert::ToString(day);
	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}