#pragma once

namespace HospitalDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NurseInfo
	/// </summary>
	public ref class NurseInfo : public System::Windows::Forms::Form
	{
	public:
		NurseInfo(void)
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
		~NurseInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ nurseId;
	private: System::Windows::Forms::MaskedTextBox^ nurseNum;



	private: System::Windows::Forms::MaskedTextBox^ nurseName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ roomN;

	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ Del;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::DataGridView^ docTable;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NurseInfo::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nurseId = (gcnew System::Windows::Forms::ComboBox());
			this->nurseNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->nurseName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->roomN = (gcnew System::Windows::Forms::Label());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->docTable = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->docTable))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(500, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 32);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Nurse\'s Information";
			// 
			// nurseId
			// 
			this->nurseId->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nurseId->FormattingEnabled = true;
			this->nurseId->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"9000", L"9001", L"9002", L"9003", L"9004", L"9005",
					L"9006", L"9007", L"9008", L"9009", L"9010", L"9011", L"9012", L"9013", L"9014", L"9015", L"9016", L"9017", L"9018", L"9019",
					L"9020"
			});
			this->nurseId->Location = System::Drawing::Point(25, 63);
			this->nurseId->Name = L"nurseId";
			this->nurseId->Size = System::Drawing::Size(162, 35);
			this->nurseId->TabIndex = 42;
			// 
			// nurseNum
			// 
			this->nurseNum->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nurseNum->Location = System::Drawing::Point(22, 234);
			this->nurseNum->Name = L"nurseNum";
			this->nurseNum->Size = System::Drawing::Size(165, 32);
			this->nurseNum->TabIndex = 41;
			// 
			// nurseName
			// 
			this->nurseName->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nurseName->Location = System::Drawing::Point(22, 146);
			this->nurseName->Name = L"nurseName";
			this->nurseName->Size = System::Drawing::Size(165, 32);
			this->nurseName->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(17, 204);
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
			this->label2->Location = System::Drawing::Point(17, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 27);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Nurse Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(17, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 27);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Nurse ID";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"9000", L"9001", L"9002", L"9003", L"9004", L"9005",
					L"9006", L"9007", L"9008", L"9009", L"9010", L"9011", L"9012", L"9013", L"9014", L"9015", L"9016", L"9017", L"9018", L"9019",
					L"9020"
			});
			this->comboBox1->Location = System::Drawing::Point(22, 321);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(165, 35);
			this->comboBox1->TabIndex = 44;
			// 
			// roomN
			// 
			this->roomN->AutoSize = true;
			this->roomN->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomN->ForeColor = System::Drawing::Color::Transparent;
			this->roomN->Location = System::Drawing::Point(17, 291);
			this->roomN->Name = L"roomN";
			this->roomN->Size = System::Drawing::Size(162, 27);
			this->roomN->TabIndex = 43;
			this->roomN->Text = L"Room Number";
			// 
			// addbutton
			// 
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addbutton->Location = System::Drawing::Point(22, 404);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(165, 38);
			this->addbutton->TabIndex = 49;
			this->addbutton->Text = L"AddData";
			this->addbutton->UseVisualStyleBackColor = true;
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->exit->Location = System::Drawing::Point(22, 624);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(165, 38);
			this->exit->TabIndex = 48;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &NurseInfo::exit_Click);
			// 
			// refresh
			// 
			this->refresh->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->refresh->Location = System::Drawing::Point(22, 567);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(165, 38);
			this->refresh->TabIndex = 47;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			// 
			// Del
			// 
			this->Del->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Del->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->Del->Location = System::Drawing::Point(22, 511);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(165, 38);
			this->Del->TabIndex = 46;
			this->Del->Text = L"Delete";
			this->Del->UseVisualStyleBackColor = true;
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->update->Location = System::Drawing::Point(22, 458);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(165, 38);
			this->update->TabIndex = 45;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			// 
			// docTable
			// 
			this->docTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->docTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->docTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->docTable->Location = System::Drawing::Point(384, 44);
			this->docTable->Name = L"docTable";
			this->docTable->RowHeadersWidth = 51;
			this->docTable->RowTemplate->Height = 24;
			this->docTable->Size = System::Drawing::Size(861, 611);
			this->docTable->TabIndex = 50;
			// 
			// NurseInfo
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->docTable);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->update);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->roomN);
			this->Controls->Add(this->nurseId);
			this->Controls->Add(this->nurseNum);
			this->Controls->Add(this->nurseName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"NurseInfo";
			this->Text = L"NurseInfo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->docTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
