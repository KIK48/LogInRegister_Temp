#pragma once
#include "Includes.h"

namespace FinanceTool10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for SignInForm
	/// </summary>
	public ref class SignInForm : public System::Windows::Forms::Form
	{
	public:
		SignInForm(void)
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
		~SignInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ SignIn_Label;
	private: System::Windows::Forms::Label^ Username_Label;
	private: System::Windows::Forms::Label^ Password_Label;
	private: System::Windows::Forms::TextBox^ Username_tb;
	private: System::Windows::Forms::TextBox^ Password_tb;
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ arrow_label;
	private: System::Windows::Forms::LinkLabel^ Register_linkLabel;

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
			this->SignIn_Label = (gcnew System::Windows::Forms::Label());
			this->Username_Label = (gcnew System::Windows::Forms::Label());
			this->Password_Label = (gcnew System::Windows::Forms::Label());
			this->Username_tb = (gcnew System::Windows::Forms::TextBox());
			this->Password_tb = (gcnew System::Windows::Forms::TextBox());
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->arrow_label = (gcnew System::Windows::Forms::Label());
			this->Register_linkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// SignIn_Label
			// 
			this->SignIn_Label->AutoSize = true;
			this->SignIn_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignIn_Label->Location = System::Drawing::Point(415, 46);
			this->SignIn_Label->Name = L"SignIn_Label";
			this->SignIn_Label->Size = System::Drawing::Size(222, 69);
			this->SignIn_Label->TabIndex = 0;
			this->SignIn_Label->Text = L"Sign In";
			// 
			// Username_Label
			// 
			this->Username_Label->AutoSize = true;
			this->Username_Label->Location = System::Drawing::Point(112, 138);
			this->Username_Label->Name = L"Username_Label";
			this->Username_Label->Size = System::Drawing::Size(123, 29);
			this->Username_Label->TabIndex = 1;
			this->Username_Label->Text = L"Username";
			// 
			// Password_Label
			// 
			this->Password_Label->AutoSize = true;
			this->Password_Label->Location = System::Drawing::Point(112, 269);
			this->Password_Label->Name = L"Password_Label";
			this->Password_Label->Size = System::Drawing::Size(117, 29);
			this->Password_Label->TabIndex = 2;
			this->Password_Label->Text = L"Password";
			// 
			// Username_tb
			// 
			this->Username_tb->Location = System::Drawing::Point(146, 189);
			this->Username_tb->Name = L"Username_tb";
			this->Username_tb->Size = System::Drawing::Size(377, 37);
			this->Username_tb->TabIndex = 3;
			// 
			// Password_tb
			// 
			this->Password_tb->Location = System::Drawing::Point(146, 330);
			this->Password_tb->Name = L"Password_tb";
			this->Password_tb->PasswordChar = '*';
			this->Password_tb->Size = System::Drawing::Size(377, 37);
			this->Password_tb->TabIndex = 4;
			// 
			// Enter
			// 
			this->Enter->Location = System::Drawing::Point(195, 411);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(280, 67);
			this->Enter->TabIndex = 5;
			this->Enter->Text = L"Enter";
			this->Enter->UseVisualStyleBackColor = true;
			this->Enter->Click += gcnew System::EventHandler(this, &SignInForm::Enter_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(703, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Don\'t have an account\?";
			// 
			// arrow_label
			// 
			this->arrow_label->AutoSize = true;
			this->arrow_label->Location = System::Drawing::Point(596, 258);
			this->arrow_label->Name = L"arrow_label";
			this->arrow_label->Size = System::Drawing::Size(175, 29);
			this->arrow_label->TabIndex = 7;
			this->arrow_label->Text = L"Click Here --->";
			// 
			// Register_linkLabel
			// 
			this->Register_linkLabel->AutoSize = true;
			this->Register_linkLabel->Location = System::Drawing::Point(793, 258);
			this->Register_linkLabel->Name = L"Register_linkLabel";
			this->Register_linkLabel->Size = System::Drawing::Size(102, 29);
			this->Register_linkLabel->TabIndex = 8;
			this->Register_linkLabel->TabStop = true;
			this->Register_linkLabel->Text = L"Register";
			this->Register_linkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignInForm::Register_linkLabel_LinkClicked);
			// 
			// SignInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(1065, 602);
			this->Controls->Add(this->Register_linkLabel);
			this->Controls->Add(this->arrow_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->Password_tb);
			this->Controls->Add(this->Username_tb);
			this->Controls->Add(this->Password_Label);
			this->Controls->Add(this->Username_Label);
			this->Controls->Add(this->SignIn_Label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MinimumSize = System::Drawing::Size(1083, 649);
			this->Name = L"SignInForm";
			this->ShowIcon = false;
			this->Text = L"Finance Tool";
			this->Load += gcnew System::EventHandler(this, &SignInForm::SignInForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
 	String^ UserN = Username_tb->Text; // Get the info from the textBox
	String^ PassW = Password_tb->Text; // Get the info from the textBox

	if (UserN->Length == 0 || PassW->Length == 0) { // Check if the textBoxes are empty
		MessageBox::Show("Username or Password is empty", "Error!", MessageBoxButtons::OK);
		return;
	}
	
	dbP1^ p1 = SignIn_DB(UserN, PassW, MyStaticClass::connect);

	if (p1->ID == NULL) {
		MessageBox::Show("Wrong Username or Password!");
	}
	else {
		MyStaticClass::d.d1 = Continue;
		MyStaticClass::d.d2 = Home;
		this->Close();
	}

	
	
}
private: System::Void Register_linkLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	MyStaticClass::d.d1 = Continue;
	MyStaticClass::d.d2 = Register;
	this->Close();
}
private: System::Void SignInForm_Load(System::Object^ sender, System::EventArgs^ e) {
	MyStaticClass::d.d1 = Exit;
}
};
}
