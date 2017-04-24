#pragma once

#include "CStudent.h"
#include <msclr\marshal_cppstd.h>
#include "JeopardyGameSettingForm.h"
#include "CAssessment.h"

namespace EduGame {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class OperatorForm : public System::Windows::Forms::Form
	{
	public:
		OperatorForm(CStudent *pStu)
		{
			InitializeComponent();
			stuObj = pStu;
			this->txtName->Text = (gcnew String(pStu->getName().c_str()));
			this->txtID->Text = (gcnew String(pStu->getID().c_str()));
		}

		OperatorForm(CStudent *pStu, CQuiz *quiz)
		{
			InitializeComponent();
			stuObj = pStu;
			this->quiz = quiz;
			this->txtName->Text = (gcnew String(pStu->getName().c_str()));
			this->txtID->Text = (gcnew String(pStu->getID().c_str()));
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OperatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblName;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtID;
	private: System::Windows::Forms::Label^  lblID;
	private: System::Windows::Forms::Button^  btnOk;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Label^  lblMsg;

	private:
		CStudent * stuObj;
		CQuiz * quiz;
		CAssessment * stuAssess;

		JeopardyGameSettingForm^ game;
	private: System::Windows::Forms::PictureBox^  picTag;
	private: System::Windows::Forms::GroupBox^  grpContactInfo;
	private: System::Windows::Forms::TextBox^  txtPhone;
	private: System::Windows::Forms::Label^  lblPhone;
	private: System::Windows::Forms::TextBox^  txtEmail;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::TextBox^  txtAddress;
	private: System::Windows::Forms::Label^  lblAddress;
	private: System::Windows::Forms::Label^  lblRole;
	private: System::Windows::Forms::CheckedListBox^  chlstRole;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OperatorForm::typeid));
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->picTag = (gcnew System::Windows::Forms::PictureBox());
			this->grpContactInfo = (gcnew System::Windows::Forms::GroupBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblRole = (gcnew System::Windows::Forms::Label());
			this->chlstRole = (gcnew System::Windows::Forms::CheckedListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picTag))->BeginInit();
			this->grpContactInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(574, 119);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(143, 44);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Name: ";
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::SystemColors::Info;
			this->txtName->Location = System::Drawing::Point(737, 119);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(259, 49);
			this->txtName->TabIndex = 1;
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(1252, 122);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(259, 49);
			this->txtID->TabIndex = 3;
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Location = System::Drawing::Point(1089, 122);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(68, 44);
			this->lblID->TabIndex = 2;
			this->lblID->Text = L"ID:";
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(592, 886);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(227, 73);
			this->btnOk->TabIndex = 4;
			this->btnOk->Text = L"Next";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &OperatorForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(1056, 886);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(227, 73);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Clear";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &OperatorForm::btnCancel_Click);
			// 
			// lblMsg
			// 
			this->lblMsg->AutoSize = true;
			this->lblMsg->Location = System::Drawing::Point(574, 476);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(0, 44);
			this->lblMsg->TabIndex = 6;
			// 
			// picTag
			// 
			this->picTag->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picTag.BackgroundImage")));
			this->picTag->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picTag.Image")));
			this->picTag->Location = System::Drawing::Point(149, 119);
			this->picTag->Name = L"picTag";
			this->picTag->Size = System::Drawing::Size(298, 291);
			this->picTag->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picTag->TabIndex = 7;
			this->picTag->TabStop = false;
			// 
			// grpContactInfo
			// 
			this->grpContactInfo->Controls->Add(this->txtPhone);
			this->grpContactInfo->Controls->Add(this->lblPhone);
			this->grpContactInfo->Controls->Add(this->txtEmail);
			this->grpContactInfo->Controls->Add(this->lblEmail);
			this->grpContactInfo->Controls->Add(this->txtAddress);
			this->grpContactInfo->Controls->Add(this->lblAddress);
			this->grpContactInfo->Location = System::Drawing::Point(601, 225);
			this->grpContactInfo->Name = L"grpContactInfo";
			this->grpContactInfo->Size = System::Drawing::Size(910, 540);
			this->grpContactInfo->TabIndex = 8;
			this->grpContactInfo->TabStop = false;
			this->grpContactInfo->Text = L"Contact information";
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(364, 383);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(481, 49);
			this->txtPhone->TabIndex = 15;
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Location = System::Drawing::Point(144, 388);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(140, 44);
			this->lblPhone->TabIndex = 14;
			this->lblPhone->Text = L"Phone:";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(364, 255);
			this->txtEmail->Multiline = true;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(480, 58);
			this->txtEmail->TabIndex = 13;
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Location = System::Drawing::Point(144, 260);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(128, 44);
			this->lblEmail->TabIndex = 12;
			this->lblEmail->Text = L"Email:";
			// 
			// txtAddress
			// 
			this->txtAddress->BackColor = System::Drawing::SystemColors::Info;
			this->txtAddress->Location = System::Drawing::Point(364, 70);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(480, 115);
			this->txtAddress->TabIndex = 11;
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Location = System::Drawing::Point(146, 121);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(170, 44);
			this->lblAddress->TabIndex = 10;
			this->lblAddress->Text = L"Address:";
			// 
			// lblRole
			// 
			this->lblRole->AutoSize = true;
			this->lblRole->Location = System::Drawing::Point(74, 485);
			this->lblRole->Name = L"lblRole";
			this->lblRole->Size = System::Drawing::Size(109, 44);
			this->lblRole->TabIndex = 9;
			this->lblRole->Text = L"Role:";
			// 
			// chlstRole
			// 
			this->chlstRole->CheckOnClick = true;
			this->chlstRole->FormattingEnabled = true;
			this->chlstRole->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Student", L"Faculty" });
			this->chlstRole->Location = System::Drawing::Point(199, 485);
			this->chlstRole->Name = L"chlstRole";
			this->chlstRole->Size = System::Drawing::Size(332, 136);
			this->chlstRole->TabIndex = 10;
			// 
			// OperatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(22, 42);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(1792, 1135);
			this->Controls->Add(this->chlstRole);
			this->Controls->Add(this->lblRole);
			this->Controls->Add(this->grpContactInfo);
			this->Controls->Add(this->picTag);
			this->Controls->Add(this->lblMsg);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblName);
			this->Name = L"OperatorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Operator Entry form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picTag))->EndInit();
			this->grpContactInfo->ResumeLayout(false);
			this->grpContactInfo->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOk_Click(System::Object^  sender, System::EventArgs^  e) {

		//this->chlstRole->CheckedItems->Count;
		// Write a message to the label in the bottom
		this->lblMsg->Text = this->txtName->Text;
		// coding to change the color of input box
		this->txtID->BackColor = System::Drawing::SystemColors::Info;

		// Save the user inputs to the data object
		// - convert the managed C++ string (marshal) to standard C++ string
		// - save the standard c++ string result to the data object
		string inputName = marshal_as<string>(this->txtName->Text);
		this->stuObj->setName(inputName);

		// - convert the standard C++ string to managed C++ string
		string teststr = "123";
		System::String^ test = (gcnew String(teststr.c_str()));

		// Save the user input for ID to the student ID member variable
		this->stuObj->setID(marshal_as<string>(this->txtID->Text));
		//this->Visible = false;

		CContactInfo cont = this->stuObj->getContact();
		cont.setAddress(marshal_as<string>(this->txtAddress->Text));
		cont.setEmail(marshal_as<string>(this->txtEmail->Text));
		cont.setPhone(marshal_as<string>(this->txtPhone->Text));

		/*
		contact = (gcnew ContactForm(& (this->stuObj->getContact())));
		contact->Visible = true;
		contact->Show();
		*/

		//
		if (this->chlstRole->SelectedIndex == 0) {
			this->stuAssess = new CAssessment(this->stuObj);

			// Hard coding TODO ????
			JeopardyGame *gameObj = new JeopardyGame(this->quiz, 1, 3,
				this->quiz->getNumOfQuestions() / 3, 3,
				"Column 1;Column 2;Column 3");

			JeopardyGameBoardForm^ gameBoard = (gcnew JeopardyGameBoardForm(gameObj, this->stuAssess));
		}
		else {
			this->Visible = false;
			//faculty role
			JeopardyGameSettingForm^ game = (gcnew JeopardyGameSettingForm(this->stuObj, this->quiz));
			game->Visible = true;
			game->Show();
		}
	}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->txtName->Text = "";
	this->txtID->Text = "";

	this->txtAddress->Text = "";
	this->txtEmail->Text = "";
	this->txtPhone->Text = "";
}

};
}
