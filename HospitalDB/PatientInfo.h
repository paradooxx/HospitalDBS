#pragma once

namespace HospitalDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PatientInfo
	/// </summary>
	public ref class PatientInfo : public System::Windows::Forms::Form
	{
	public:
		PatientInfo(void)
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
		~PatientInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ docId;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ docNum;
	private: System::Windows::Forms::MaskedTextBox^ docName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ gender;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ treatment;


	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ roomNo;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ docTable;
	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientInfo::typeid));
			this->docId = (gcnew System::Windows::Forms::ComboBox());
			this->docNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->docName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->treatment = (gcnew System::Windows::Forms::ComboBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->roomNo = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->docTable = (gcnew System::Windows::Forms::DataGridView());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->docTable))->BeginInit();
			this->SuspendLayout();
			// 
			// docId
			// 
			this->docId->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docId->FormattingEnabled = true;
			this->docId->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"9000", L"9001", L"9002", L"9003", L"9004", L"9005",
					L"9006", L"9007", L"9008", L"9009", L"9010", L"9011", L"9012", L"9013", L"9014", L"9015", L"9016", L"9017", L"9018", L"9019",
					L"9020"
			});
			this->docId->Location = System::Drawing::Point(32, 51);
			this->docId->Name = L"docId";
			this->docId->Size = System::Drawing::Size(165, 35);
			this->docId->TabIndex = 42;
			// 
			// docNum
			// 
			this->docNum->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docNum->Location = System::Drawing::Point(32, 216);
			this->docNum->Name = L"docNum";
			this->docNum->Size = System::Drawing::Size(165, 32);
			this->docNum->TabIndex = 41;
			// 
			// docName
			// 
			this->docName->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docName->Location = System::Drawing::Point(32, 130);
			this->docName->Name = L"docName";
			this->docName->Size = System::Drawing::Size(165, 32);
			this->docName->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(27, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 27);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Phone Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(27, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 27);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Full Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(27, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 27);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Patinet ID";
			// 
			// gender
			// 
			this->gender->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->FormattingEnabled = true;
			this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->gender->Location = System::Drawing::Point(32, 294);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(165, 35);
			this->gender->TabIndex = 48;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(30, 268);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 27);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Gender";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"9000", L"9001", L"9002", L"9003", L"9004", L"9005",
					L"9006", L"9007", L"9008", L"9009", L"9010", L"9011", L"9012", L"9013", L"9014", L"9015", L"9016", L"9017", L"9018", L"9019",
					L"9020"
			});
			this->comboBox2->Location = System::Drawing::Point(32, 621);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(165, 35);
			this->comboBox2->TabIndex = 56;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(27, 596);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 27);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Doctor ID";
			// 
			// treatment
			// 
			this->treatment->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->treatment->FormattingEnabled = true;
			this->treatment->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Treatment A", L"Treatment B", L"Treatment C",
					L"Treatment D", L"Treatment E"
			});
			this->treatment->Location = System::Drawing::Point(32, 459);
			this->treatment->Name = L"treatment";
			this->treatment->Size = System::Drawing::Size(165, 35);
			this->treatment->TabIndex = 54;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox2->Location = System::Drawing::Point(32, 377);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(165, 32);
			this->maskedTextBox2->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(27, 519);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 27);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Room Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(27, 352);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 27);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Disease";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(27, 433);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 27);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Treatment";
			// 
			// roomNo
			// 
			this->roomNo->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNo->FormattingEnabled = true;
			this->roomNo->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"101", L"102", L"103", L"104", L"105", L"201", L"202",
					L"203", L"204", L"205", L"301", L"302", L"303", L"304", L"305"
			});
			this->roomNo->Location = System::Drawing::Point(32, 545);
			this->roomNo->Name = L"roomNo";
			this->roomNo->Size = System::Drawing::Size(165, 35);
			this->roomNo->TabIndex = 57;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(500, 3);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(271, 32);
			this->label9->TabIndex = 58;
			this->label9->Text = L"Patient\'s Information";
			// 
			// docTable
			// 
			this->docTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->docTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->docTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->docTable->Location = System::Drawing::Point(235, 46);
			this->docTable->Name = L"docTable";
			this->docTable->RowHeadersWidth = 51;
			this->docTable->RowTemplate->Height = 24;
			this->docTable->Size = System::Drawing::Size(1010, 544);
			this->docTable->TabIndex = 59;
			// 
			// addbutton
			// 
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addbutton->Location = System::Drawing::Point(235, 618);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(165, 38);
			this->addbutton->TabIndex = 60;
			this->addbutton->Text = L"AddData";
			this->addbutton->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button1->Location = System::Drawing::Point(450, 618);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 38);
			this->button1->TabIndex = 61;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button2->Location = System::Drawing::Point(660, 618);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 38);
			this->button2->TabIndex = 62;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button3->Location = System::Drawing::Point(872, 618);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 38);
			this->button3->TabIndex = 63;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button4->Location = System::Drawing::Point(1080, 618);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 38);
			this->button4->TabIndex = 64;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PatientInfo::button4_Click);
			// 
			// PatientInfo
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->docTable);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->roomNo);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->treatment);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->docId);
			this->Controls->Add(this->docNum);
			this->Controls->Add(this->docName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"PatientInfo";
			this->Text = L"PatientInfo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->docTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
