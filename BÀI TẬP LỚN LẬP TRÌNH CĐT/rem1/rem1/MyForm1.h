#pragma once

namespace rem1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		String^ nameport;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Button^ button2;
	public: System::IO::Ports::SerialPort^ serialPort1;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			
		}
	public:
		MyForm1(String^ port)
		{
			InitializeComponent();
			nameport = port;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Location = System::Drawing::Point(37, 70);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(152, 21);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Trời mưa mở rèm";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(37, 108);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(182, 21);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Mở rèm khi quá nhiệt";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox2_CheckedChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(275, 107);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(58, 22);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(339, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"°C";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(37, 181);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(108, 21);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Đặt giờ mở";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox3_CheckedChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(198, 181);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 24, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(56, 22);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown2_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(270, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"giờ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(312, 181);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(57, 22);
			this->numericUpDown3->TabIndex = 7;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown3_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(387, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"phút";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(37, 225);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(123, 21);
			this->checkBox4->TabIndex = 9;
			this->checkBox4->Text = L"Đặt giờ đóng";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox4_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Enabled = false;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(387, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"phút";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Enabled = false;
			this->numericUpDown4->Location = System::Drawing::Point(312, 225);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(57, 22);
			this->numericUpDown4->TabIndex = 12;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown4_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(270, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"giờ";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Enabled = false;
			this->numericUpDown5->Location = System::Drawing::Point(198, 225);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 24, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(56, 22);
			this->numericUpDown5->TabIndex = 10;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown5_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Adobe Heiti Std R", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(165, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Thiết lập tự động";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(96, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 49);
			this->button1->TabIndex = 15;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(37, 145);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(264, 21);
			this->checkBox5->TabIndex = 16;
			this->checkBox5->Text = L"Mở rèm theo cường độ ánh sáng";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox5_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 275);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 49);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Xóa cài đặt";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 357);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->PortName = nameport;
		serialPort1->Open();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if (checkBox1->Checked)
		{
			serialPort1->Write("q\n");
		}
		else
		{
			serialPort1->Write("w\n");
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("b" + numericUpDown3->Value.ToString() + "\n");
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("c" + numericUpDown2->Value.ToString() + "\n");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ da1;
	if (checkBox3->Checked)
	{
		if (checkBox4->Checked)
			da1 = "4";
		else
			da1 = "3";
	}
	else
	{
		if (checkBox4->Checked)
			da1 = "2";
		else
			da1 = "1";
	}
	serialPort1->Write(da1 + "\n");
	serialPort1->Close();
	MyForm1::Close();
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked)
	{
		numericUpDown2->Enabled = true;
		numericUpDown3->Enabled = true;
		label2->Enabled = true;
		label3->Enabled = true;
	}
	else
	{
		numericUpDown2->Enabled = false;
		numericUpDown3->Enabled = false;
		label2->Enabled = false;
		label3->Enabled = false;
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->Checked)
	{
		numericUpDown4->Enabled = true;
		numericUpDown5->Enabled = true;
		label4->Enabled = true;
		label5->Enabled = true;
	}
	else
	{
		numericUpDown4->Enabled = false;
		numericUpDown5->Enabled = false;
		label4->Enabled = false;
		label5->Enabled = false;
	}
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("t" + numericUpDown1->Value.ToString() + "\n");
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked)
	{
		serialPort1->Write("e\n");
		numericUpDown1->Enabled = true;
	}
	else
	{
		serialPort1->Write("r\n");
		numericUpDown1->Enabled = false;
	}
}
private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("j" + numericUpDown5->Value.ToString() + "\n");
}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("k" + numericUpDown4->Value.ToString() + "\n");
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox5->Checked)
	{
		serialPort1->Write("z\n");
	}
	else
	{
		serialPort1->Write("x\n");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("You are sure ?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		serialPort1->Write("0\n");
	}
}
};

}
