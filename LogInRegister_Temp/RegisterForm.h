#pragma once
#include "Includes.h"


namespace FinanceTool10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	//using namespace msclr::interop;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Register_label;
	private: System::Windows::Forms::Panel^ Main_Panel;
	private: System::Windows::Forms::Panel^ Name_Panel;
	

	private: System::Windows::Forms::Label^ Name_Label;
	private: System::Windows::Forms::TextBox^ Name_TextBox;
	private: System::Windows::Forms::Panel^ VerifyPW_Panel;

	private: System::Windows::Forms::Label^ Password2_Label;
	private: System::Windows::Forms::TextBox^ VerifyPW_TextBox;

	private: System::Windows::Forms::Panel^ Password_Panel;

	private: System::Windows::Forms::Label^ Password_Label;
	private: System::Windows::Forms::TextBox^ Password_TextBox;

	private: System::Windows::Forms::Panel^ Username_Panel;

	private: System::Windows::Forms::Label^ Username_Label;
	private: System::Windows::Forms::TextBox^ Username_TextBox;

	private: System::Windows::Forms::Panel^ LastName_Panel;

	private: System::Windows::Forms::Label^ LName_Label;
	private: System::Windows::Forms::TextBox^ LName_TextBox;
	private: System::Windows::Forms::Button^ Cancel_Button;
	private: System::Windows::Forms::Button^ Continue_Button;
	private: System::Windows::Forms::Button^ VerifyPW_ExitButton;
	private: System::Windows::Forms::Button^ Password_ExitButton;
	private: System::Windows::Forms::Button^ Username_ExitButton;
	private: System::Windows::Forms::Button^ LName_ExitButton;
	private: System::Windows::Forms::Button^ name_ExitButton;
	private: System::Windows::Forms::ComboBox^ Age_ComboBox;

	private: System::Windows::Forms::Label^ age_label;
	protected:




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
			this->Register_label = (gcnew System::Windows::Forms::Label());
			this->Main_Panel = (gcnew System::Windows::Forms::Panel());
			this->age_label = (gcnew System::Windows::Forms::Label());
			this->Age_ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Cancel_Button = (gcnew System::Windows::Forms::Button());
			this->Continue_Button = (gcnew System::Windows::Forms::Button());
			this->VerifyPW_Panel = (gcnew System::Windows::Forms::Panel());
			this->VerifyPW_ExitButton = (gcnew System::Windows::Forms::Button());
			this->Password2_Label = (gcnew System::Windows::Forms::Label());
			this->VerifyPW_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Password_Panel = (gcnew System::Windows::Forms::Panel());
			this->Password_ExitButton = (gcnew System::Windows::Forms::Button());
			this->Password_Label = (gcnew System::Windows::Forms::Label());
			this->Password_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Username_Panel = (gcnew System::Windows::Forms::Panel());
			this->Username_ExitButton = (gcnew System::Windows::Forms::Button());
			this->Username_Label = (gcnew System::Windows::Forms::Label());
			this->Username_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->LastName_Panel = (gcnew System::Windows::Forms::Panel());
			this->LName_ExitButton = (gcnew System::Windows::Forms::Button());
			this->LName_Label = (gcnew System::Windows::Forms::Label());
			this->LName_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Name_Panel = (gcnew System::Windows::Forms::Panel());
			this->name_ExitButton = (gcnew System::Windows::Forms::Button());
			this->Name_Label = (gcnew System::Windows::Forms::Label());
			this->Name_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Main_Panel->SuspendLayout();
			this->VerifyPW_Panel->SuspendLayout();
			this->Password_Panel->SuspendLayout();
			this->Username_Panel->SuspendLayout();
			this->LastName_Panel->SuspendLayout();
			this->Name_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Register_label
			// 
			this->Register_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Register_label->AutoSize = true;
			this->Register_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Register_label->Location = System::Drawing::Point(0, 0);
			this->Register_label->Name = L"Register_label";
			this->Register_label->Size = System::Drawing::Size(350, 69);
			this->Register_label->TabIndex = 0;
			this->Register_label->Text = L"Registration";
			// 
			// Main_Panel
			// 
			this->Main_Panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->Main_Panel->Controls->Add(this->age_label);
			this->Main_Panel->Controls->Add(this->Age_ComboBox);
			this->Main_Panel->Controls->Add(this->Cancel_Button);
			this->Main_Panel->Controls->Add(this->Continue_Button);
			this->Main_Panel->Controls->Add(this->VerifyPW_Panel);
			this->Main_Panel->Controls->Add(this->Password_Panel);
			this->Main_Panel->Controls->Add(this->Username_Panel);
			this->Main_Panel->Controls->Add(this->LastName_Panel);
			this->Main_Panel->Controls->Add(this->Name_Panel);
			this->Main_Panel->Location = System::Drawing::Point(12, 72);
			this->Main_Panel->Name = L"Main_Panel";
			this->Main_Panel->Size = System::Drawing::Size(729, 470);
			this->Main_Panel->TabIndex = 1;
			// 
			// age_label
			// 
			this->age_label->AutoSize = true;
			this->age_label->Location = System::Drawing::Point(26, 313);
			this->age_label->Name = L"age_label";
			this->age_label->Size = System::Drawing::Size(56, 29);
			this->age_label->TabIndex = 10;
			this->age_label->Text = L"Age";
			// 
			// Age_ComboBox
			// 
			this->Age_ComboBox->FormattingEnabled = true;
			this->Age_ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(99) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62",
					L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80",
					L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98",
					L"99"
			});
			this->Age_ComboBox->Location = System::Drawing::Point(140, 310);
			this->Age_ComboBox->Name = L"Age_ComboBox";
			this->Age_ComboBox->Size = System::Drawing::Size(121, 37);
			this->Age_ComboBox->TabIndex = 9;
			// 
			// Cancel_Button
			// 
			this->Cancel_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel_Button->Location = System::Drawing::Point(229, 375);
			this->Cancel_Button->Name = L"Cancel_Button";
			this->Cancel_Button->Size = System::Drawing::Size(143, 69);
			this->Cancel_Button->TabIndex = 8;
			this->Cancel_Button->Text = L"Cancel";
			this->Cancel_Button->UseVisualStyleBackColor = true;
			this->Cancel_Button->Click += gcnew System::EventHandler(this, &RegisterForm::Cancel_Button_Click);
			// 
			// Continue_Button
			// 
			this->Continue_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Continue_Button->Location = System::Drawing::Point(31, 375);
			this->Continue_Button->Name = L"Continue_Button";
			this->Continue_Button->Size = System::Drawing::Size(143, 69);
			this->Continue_Button->TabIndex = 7;
			this->Continue_Button->Text = L"Continue ";
			this->Continue_Button->UseVisualStyleBackColor = true;
			this->Continue_Button->Click += gcnew System::EventHandler(this, &RegisterForm::Continue_Button_Click);
			// 
			// VerifyPW_Panel
			// 
			this->VerifyPW_Panel->Controls->Add(this->VerifyPW_ExitButton);
			this->VerifyPW_Panel->Controls->Add(this->Password2_Label);
			this->VerifyPW_Panel->Controls->Add(this->VerifyPW_TextBox);
			this->VerifyPW_Panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->VerifyPW_Panel->Location = System::Drawing::Point(0, 244);
			this->VerifyPW_Panel->Name = L"VerifyPW_Panel";
			this->VerifyPW_Panel->Size = System::Drawing::Size(729, 61);
			this->VerifyPW_Panel->TabIndex = 6;
			// 
			// VerifyPW_ExitButton
			// 
			this->VerifyPW_ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->VerifyPW_ExitButton->Location = System::Drawing::Point(692, 3);
			this->VerifyPW_ExitButton->Name = L"VerifyPW_ExitButton";
			this->VerifyPW_ExitButton->Size = System::Drawing::Size(37, 34);
			this->VerifyPW_ExitButton->TabIndex = 3;
			this->VerifyPW_ExitButton->Text = L"X";
			this->VerifyPW_ExitButton->UseVisualStyleBackColor = true;
			this->VerifyPW_ExitButton->Click += gcnew System::EventHandler(this, &RegisterForm::VerifyPW_ExitButton_Click);
			// 
			// Password2_Label
			// 
			this->Password2_Label->AutoSize = true;
			this->Password2_Label->Dock = System::Windows::Forms::DockStyle::Left;
			this->Password2_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password2_Label->Location = System::Drawing::Point(0, 0);
			this->Password2_Label->Name = L"Password2_Label";
			this->Password2_Label->Size = System::Drawing::Size(140, 22);
			this->Password2_Label->TabIndex = 0;
			this->Password2_Label->Text = L"Verify Password";
			// 
			// VerifyPW_TextBox
			// 
			this->VerifyPW_TextBox->Location = System::Drawing::Point(140, 3);
			this->VerifyPW_TextBox->Name = L"VerifyPW_TextBox";
			this->VerifyPW_TextBox->PasswordChar = '$';
			this->VerifyPW_TextBox->Size = System::Drawing::Size(552, 34);
			this->VerifyPW_TextBox->TabIndex = 1;
			// 
			// Password_Panel
			// 
			this->Password_Panel->Controls->Add(this->Password_ExitButton);
			this->Password_Panel->Controls->Add(this->Password_Label);
			this->Password_Panel->Controls->Add(this->Password_TextBox);
			this->Password_Panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Password_Panel->Location = System::Drawing::Point(0, 183);
			this->Password_Panel->Name = L"Password_Panel";
			this->Password_Panel->Size = System::Drawing::Size(729, 61);
			this->Password_Panel->TabIndex = 5;
			// 
			// Password_ExitButton
			// 
			this->Password_ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Password_ExitButton->Location = System::Drawing::Point(692, 0);
			this->Password_ExitButton->Name = L"Password_ExitButton";
			this->Password_ExitButton->Size = System::Drawing::Size(37, 34);
			this->Password_ExitButton->TabIndex = 3;
			this->Password_ExitButton->Text = L"X";
			this->Password_ExitButton->UseVisualStyleBackColor = true;
			this->Password_ExitButton->Click += gcnew System::EventHandler(this, &RegisterForm::Password_ExitButton_Click);
			// 
			// Password_Label
			// 
			this->Password_Label->AutoSize = true;
			this->Password_Label->Dock = System::Windows::Forms::DockStyle::Left;
			this->Password_Label->Location = System::Drawing::Point(0, 0);
			this->Password_Label->Name = L"Password_Label";
			this->Password_Label->Size = System::Drawing::Size(120, 29);
			this->Password_Label->TabIndex = 0;
			this->Password_Label->Text = L"Password";
			// 
			// Password_TextBox
			// 
			this->Password_TextBox->Location = System::Drawing::Point(140, 3);
			this->Password_TextBox->Name = L"Password_TextBox";
			this->Password_TextBox->PasswordChar = '$';
			this->Password_TextBox->Size = System::Drawing::Size(552, 34);
			this->Password_TextBox->TabIndex = 1;
			// 
			// Username_Panel
			// 
			this->Username_Panel->Controls->Add(this->Username_ExitButton);
			this->Username_Panel->Controls->Add(this->Username_Label);
			this->Username_Panel->Controls->Add(this->Username_TextBox);
			this->Username_Panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Username_Panel->Location = System::Drawing::Point(0, 122);
			this->Username_Panel->Name = L"Username_Panel";
			this->Username_Panel->Size = System::Drawing::Size(729, 61);
			this->Username_Panel->TabIndex = 4;
			// 
			// Username_ExitButton
			// 
			this->Username_ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Username_ExitButton->Location = System::Drawing::Point(692, 3);
			this->Username_ExitButton->Name = L"Username_ExitButton";
			this->Username_ExitButton->Size = System::Drawing::Size(37, 34);
			this->Username_ExitButton->TabIndex = 3;
			this->Username_ExitButton->Text = L"X";
			this->Username_ExitButton->UseVisualStyleBackColor = true;
			this->Username_ExitButton->Click += gcnew System::EventHandler(this, &RegisterForm::Username_ExitButton_Click);
			// 
			// Username_Label
			// 
			this->Username_Label->AutoSize = true;
			this->Username_Label->Dock = System::Windows::Forms::DockStyle::Left;
			this->Username_Label->Location = System::Drawing::Point(0, 0);
			this->Username_Label->Name = L"Username_Label";
			this->Username_Label->Size = System::Drawing::Size(124, 29);
			this->Username_Label->TabIndex = 0;
			this->Username_Label->Text = L"Username";
			// 
			// Username_TextBox
			// 
			this->Username_TextBox->Location = System::Drawing::Point(140, 3);
			this->Username_TextBox->Name = L"Username_TextBox";
			this->Username_TextBox->Size = System::Drawing::Size(552, 34);
			this->Username_TextBox->TabIndex = 1;
			// 
			// LastName_Panel
			// 
			this->LastName_Panel->Controls->Add(this->LName_ExitButton);
			this->LastName_Panel->Controls->Add(this->LName_Label);
			this->LastName_Panel->Controls->Add(this->LName_TextBox);
			this->LastName_Panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->LastName_Panel->Location = System::Drawing::Point(0, 61);
			this->LastName_Panel->Name = L"LastName_Panel";
			this->LastName_Panel->Size = System::Drawing::Size(729, 61);
			this->LastName_Panel->TabIndex = 3;
			// 
			// LName_ExitButton
			// 
			this->LName_ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LName_ExitButton->Location = System::Drawing::Point(692, 3);
			this->LName_ExitButton->Name = L"LName_ExitButton";
			this->LName_ExitButton->Size = System::Drawing::Size(37, 34);
			this->LName_ExitButton->TabIndex = 3;
			this->LName_ExitButton->Text = L"X";
			this->LName_ExitButton->UseVisualStyleBackColor = true;
			this->LName_ExitButton->Click += gcnew System::EventHandler(this, &RegisterForm::LName_ExitButton_Click);
			// 
			// LName_Label
			// 
			this->LName_Label->AutoSize = true;
			this->LName_Label->Dock = System::Windows::Forms::DockStyle::Left;
			this->LName_Label->Location = System::Drawing::Point(0, 0);
			this->LName_Label->Name = L"LName_Label";
			this->LName_Label->Size = System::Drawing::Size(134, 29);
			this->LName_Label->TabIndex = 0;
			this->LName_Label->Text = L"Last Name ";
			// 
			// LName_TextBox
			// 
			this->LName_TextBox->Location = System::Drawing::Point(140, 3);
			this->LName_TextBox->Name = L"LName_TextBox";
			this->LName_TextBox->Size = System::Drawing::Size(552, 34);
			this->LName_TextBox->TabIndex = 1;
			// 
			// Name_Panel
			// 
			this->Name_Panel->Controls->Add(this->name_ExitButton);
			this->Name_Panel->Controls->Add(this->Name_Label);
			this->Name_Panel->Controls->Add(this->Name_TextBox);
			this->Name_Panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Name_Panel->Location = System::Drawing::Point(0, 0);
			this->Name_Panel->Name = L"Name_Panel";
			this->Name_Panel->Size = System::Drawing::Size(729, 61);
			this->Name_Panel->TabIndex = 2;
			// 
			// name_ExitButton
			// 
			this->name_ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->name_ExitButton->Location = System::Drawing::Point(692, 0);
			this->name_ExitButton->Name = L"name_ExitButton";
			this->name_ExitButton->Size = System::Drawing::Size(37, 34);
			this->name_ExitButton->TabIndex = 2;
			this->name_ExitButton->Text = L"X";
			this->name_ExitButton->UseVisualStyleBackColor = true;
			this->name_ExitButton->Click += gcnew System::EventHandler(this, &RegisterForm::name_ExitButton_Click);
			// 
			// Name_Label
			// 
			this->Name_Label->AutoSize = true;
			this->Name_Label->Dock = System::Windows::Forms::DockStyle::Left;
			this->Name_Label->Location = System::Drawing::Point(0, 0);
			this->Name_Label->Name = L"Name_Label";
			this->Name_Label->Size = System::Drawing::Size(78, 29);
			this->Name_Label->TabIndex = 0;
			this->Name_Label->Text = L"Name";
			// 
			// Name_TextBox
			// 
			this->Name_TextBox->Location = System::Drawing::Point(140, 3);
			this->Name_TextBox->Name = L"Name_TextBox";
			this->Name_TextBox->Size = System::Drawing::Size(552, 34);
			this->Name_TextBox->TabIndex = 1;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1068, 602);
			this->Controls->Add(this->Main_Panel);
			this->Controls->Add(this->Register_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MinimumSize = System::Drawing::Size(996, 649);
			this->Name = L"RegisterForm";
			this->Text = L"Registration Form";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->Main_Panel->ResumeLayout(false);
			this->Main_Panel->PerformLayout();
			this->VerifyPW_Panel->ResumeLayout(false);
			this->VerifyPW_Panel->PerformLayout();
			this->Password_Panel->ResumeLayout(false);
			this->Password_Panel->PerformLayout();
			this->Username_Panel->ResumeLayout(false);
			this->Username_Panel->PerformLayout();
			this->LastName_Panel->ResumeLayout(false);
			this->LastName_Panel->PerformLayout();
			this->Name_Panel->ResumeLayout(false);
			this->Name_Panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void name_ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Name_TextBox->Text = "";

	}
	private: System::Void LName_ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LName_TextBox->Text = "";
	}
	private: System::Void Username_ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Username_TextBox->Text = "";
	}
	private: System::Void Password_ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Password_TextBox->Text = "";
	}
	private: System::Void VerifyPW_ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->VerifyPW_TextBox->Text = "";
	}
	private: System::Void Cancel_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		// Need something here
		MyStaticClass::d.d2 = Login;
		MyStaticClass::d.d1 = Continue;
		Close();
	}
	
	private: System::Void Continue_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		dbP1^ person = gcnew dbP1;

		if (Name_TextBox->Text == "" || LName_TextBox->Text == "" || Username_TextBox->Text == "") {
			MessageBox::Show("Either Name,Last Name, or Username is empty");
			return;
		}

		person->name = Name_TextBox->Text;
		person->lName = LName_TextBox->Text;
		person->userN = Username_TextBox->Text;

		if (UsernameExists(MyStaticClass::connect, person->userN)) {
			MessageBox::Show("Username already exists");
			return;
		}

		if (Password_TextBox->Text == "" || Password_TextBox->Text != VerifyPW_TextBox->Text) {
			MessageBox::Show("Either Password or Verify Password is empty or they don't match");
			return;
		}

		person->pw = Password_TextBox->Text;

		person->ID = getNextUniqueID(MyStaticClass::connect);

		registerPerson(MyStaticClass::connect, person);

		MessageBox::Show("You have been registered");
		MyStaticClass::d.d2 = Login;
		MyStaticClass::d.d1 = Continue;
		Close();
		
		
	}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	MyStaticClass::d.d1 = Exit;
}
};
}

