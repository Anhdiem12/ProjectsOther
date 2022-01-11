#pragma once
#include"MyForm1.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	//using namespace System::Text;
	using namespace std;
	using namespace System::Threading::Tasks;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
		String^ nhandata = "";
		String^ inputdata = "";
		String^ nhietdo = "";
		String^ doam = "";
		String^ mua = "";
		String^ phantram = "";
		String^ anhsang = "";
	private: System::Windows::Forms::Button^ button7;


		   String^ trangthaimua = "";
	public:
		Form1(void)
		{
			InitializeComponent();
			findPorts();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(98, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(42, 78);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(269, 203);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cài đặt kết nối";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(145, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"disconnect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(19, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Red;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(56, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(163, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Disconnected";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cổng";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(362, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(234, 39);
			this->label2->TabIndex = 2;
			this->label2->Text = L"RÈM THÔNG MINH";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Location = System::Drawing::Point(42, 312);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(269, 158);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Thông tin";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(195, 71);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 17);
			this->label17->TabIndex = 7;
			this->label17->Text = L"%";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(195, 33);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 17);
			this->label16->TabIndex = 6;
			this->label16->Text = L"°C";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(165, 116);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 17);
			this->label15->TabIndex = 5;
			this->label15->Text = L"không";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(165, 71);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 17);
			this->label14->TabIndex = 4;
			this->label14->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(165, 33);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 17);
			this->label13->TabIndex = 3;
			this->label13->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(19, 116);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 17);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Tình trạng mưa";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 71);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 17);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Độ ẩm";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 33);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 17);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Nhiệt độ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->trackBar1);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->trackBar2);
			this->groupBox3->Location = System::Drawing::Point(434, 78);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(457, 303);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Điều khiển";
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(386, 234);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 51);
			this->button6->TabIndex = 13;
			this->button6->Text = L"OK";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(290, 157);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 17);
			this->label9->TabIndex = 12;
			this->label9->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(99, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"tốc độ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(360, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(325, 246);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"0";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(205, 75);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 57);
			this->button4->TabIndex = 4;
			this->button4->Text = L"đóng";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Enabled = false;
			this->trackBar1->Location = System::Drawing::Point(17, 241);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(311, 56);
			this->trackBar1->TabIndex = 7;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(42, 207);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(206, 21);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Dùng thanh trượt điều khiển";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(337, 75);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 57);
			this->button5->TabIndex = 5;
			this->button5->Text = L"dừng";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(71, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 57);
			this->button3->TabIndex = 3;
			this->button3->Text = L"mở";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(333, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"%";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(290, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Trạng thái mở rèm";
			// 
			// trackBar2
			// 
			this->trackBar2->Enabled = false;
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(170, 157);
			this->trackBar2->Maximum = 5;
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 56);
			this->trackBar2->TabIndex = 11;
			this->trackBar2->Value = 1;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(594, 412);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 48);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Thiết lập tự động";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 543);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: rem1::MyForm1^ c1;
	private: 
		void findPorts(void)
		{
			array<Object^>^ objectArray = SerialPort::GetPortNames();
			this->comboBox1->Items->AddRange(objectArray);
		}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->PortName = comboBox1->Text;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text=="")
		{
			MessageBox::Show("Select COM port", "Waring!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			try
			{
				if (serialPort1->IsOpen)
				{
					MessageBox::Show("COM port has been opened", "Imformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					serialPort1->Open();
					textBox1->BackColor = Color::Green;
					textBox1->Text = "Connecting...";
					comboBox1->Enabled = false;
					trackBar2->Enabled = true;
					checkBox1->Enabled = true;
					this->c1 = gcnew rem1::MyForm1(serialPort1->PortName);
					button7->Enabled = true;
				}
			}
			catch (System::Exception^ e)
			{
				MessageBox::Show("COM port not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (serialPort1->IsOpen)
			{
				serialPort1->Close();
				textBox1->BackColor = Color::Red;
				textBox1->Text = "Disconnected";
				comboBox1->Enabled = true;
				trackBar2->Enabled = false;
				checkBox1->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
			}
			else
			{
				MessageBox::Show("COM port has been opened", "Imformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("COM port not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (serialPort1->IsOpen)
			{
				serialPort1->Write("m\n");
			}
			else
			{
				MessageBox::Show("COM port has been opened", "Imformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("COM port not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (serialPort1->IsOpen)
			{

				serialPort1->Write("d\n");
			}
			else
			{
				MessageBox::Show("COM port has been opened", "Imformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("COM port not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (serialPort1->IsOpen)
			{

				serialPort1->Write("s\n");
			}
			else
			{
				MessageBox::Show("COM port has been opened", "Imformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("COM port not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			trackBar1->Enabled = true;
			button6->Enabled = true;
		}
		else
		{
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			trackBar1->Enabled = false;
			button6->Enabled = false;
		}
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (serialPort1->IsOpen)
			{
				label9->Text = trackBar2->Value.ToString();
				serialPort1->Write("p" + trackBar2->Value.ToString() + "\n");
			}
			else
			{
				MessageBox::Show("COM port has been opened", "Imformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("COM port not found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label6->Text = trackBar1->Value.ToString();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Write("v" + trackBar1->Value.ToString() + "\n");
	}
	private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		nhandata = serialPort1->ReadExisting();
		this->Invoke(gcnew System::EventHandler(this, &Form1::capnhat));
	}
	private: System::Void capnhat(System::Object^ sender, System::EventArgs^ e)
	{
		inputdata = nhandata->Trim();
		if (inputdata != String::Empty)
		{
			array<Object^>^ thang = inputdata->Split('|');
			phantram = thang[0]->ToString();
			nhietdo = thang[1]->ToString();
			mua = thang[2]->ToString();
			doam = thang[3]->ToString();
			if (mua == "c")
				trangthaimua = "có";
			else if (mua == "k")
				trangthaimua = "không";
		}
		if (anhsang == "1")
		{
			button3->Enabled = false;
		}
		label4->Text = phantram;
		label13->Text = nhietdo;
		label15->Text = trangthaimua;
		label14->Text = doam;
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Close();
	c1->ShowDialog();
	serialPort1->Open();
}
};
}