#pragma once
#include "CQuiz.h"
#include "CStudent.h"
#include <msclr\marshal_cppstd.h>
#include "JeopardyGameBoardForm.h"
#include "JeopardyGame.h"
namespace EduGame {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for JeopardyGameSettingForm
	/// </summary>
	public ref class JeopardyGameSettingForm : public System::Windows::Forms::Form
	{
	public:
		JeopardyGameSettingForm(CStudent *stu, CQuiz *quiz)
		{
			InitializeComponent();

			this->quiz = quiz;
			this->stu = stu;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JeopardyGameSettingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtCols;
	protected:
	private: System::Windows::Forms::Label^  lblCols;
	private: System::Windows::Forms::TextBox^  txtRows;
	private: System::Windows::Forms::Label^  lblRows;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnOk;

	private:
		CStudent * stu;
		CQuiz * quiz;
	private: System::Windows::Forms::Label^  lblColHeadings;
	private: System::Windows::Forms::TextBox^  txtColHeadings;

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
			this->txtCols = (gcnew System::Windows::Forms::TextBox());
			this->lblCols = (gcnew System::Windows::Forms::Label());
			this->txtRows = (gcnew System::Windows::Forms::TextBox());
			this->lblRows = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->lblColHeadings = (gcnew System::Windows::Forms::Label());
			this->txtColHeadings = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtCols
			// 
			this->txtCols->BackColor = System::Drawing::SystemColors::Info;
			this->txtCols->Location = System::Drawing::Point(805, 121);
			this->txtCols->Name = L"txtCols";
			this->txtCols->Size = System::Drawing::Size(259, 49);
			this->txtCols->TabIndex = 7;
			// 
			// lblCols
			// 
			this->lblCols->AutoSize = true;
			this->lblCols->Location = System::Drawing::Point(579, 118);
			this->lblCols->Name = L"lblCols";
			this->lblCols->Size = System::Drawing::Size(182, 44);
			this->lblCols->TabIndex = 6;
			this->lblCols->Text = L"Columns:";
			// 
			// txtRows
			// 
			this->txtRows->BackColor = System::Drawing::SystemColors::Info;
			this->txtRows->Location = System::Drawing::Point(290, 118);
			this->txtRows->Name = L"txtRows";
			this->txtRows->Size = System::Drawing::Size(259, 49);
			this->txtRows->TabIndex = 5;
			// 
			// lblRows
			// 
			this->lblRows->AutoSize = true;
			this->lblRows->Location = System::Drawing::Point(127, 118);
			this->lblRows->Name = L"lblRows";
			this->lblRows->Size = System::Drawing::Size(135, 44);
			this->lblRows->TabIndex = 4;
			this->lblRows->Text = L"Rows: ";
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(734, 495);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(227, 64);
			this->btnCancel->TabIndex = 9;
			this->btnCancel->Text = L"Clear";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &JeopardyGameSettingForm::btnCancel_Click);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(203, 486);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(227, 64);
			this->btnOk->TabIndex = 8;
			this->btnOk->Text = L"Next";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &JeopardyGameSettingForm::btnOk_Click);
			// 
			// lblColHeadings
			// 
			this->lblColHeadings->AutoSize = true;
			this->lblColHeadings->Location = System::Drawing::Point(127, 240);
			this->lblColHeadings->Name = L"lblColHeadings";
			this->lblColHeadings->Size = System::Drawing::Size(327, 44);
			this->lblColHeadings->TabIndex = 10;
			this->lblColHeadings->Text = L"Column headings:";
			// 
			// txtColHeadings
			// 
			this->txtColHeadings->BackColor = System::Drawing::SystemColors::Info;
			this->txtColHeadings->Location = System::Drawing::Point(496, 237);
			this->txtColHeadings->Multiline = true;
			this->txtColHeadings->Name = L"txtColHeadings";
			this->txtColHeadings->Size = System::Drawing::Size(551, 150);
			this->txtColHeadings->TabIndex = 11;
			// 
			// JeopardyGameSettingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(22, 42);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1283, 626);
			this->Controls->Add(this->txtColHeadings);
			this->Controls->Add(this->lblColHeadings);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtCols);
			this->Controls->Add(this->lblCols);
			this->Controls->Add(this->txtRows);
			this->Controls->Add(this->lblRows);
			this->Name = L"JeopardyGameSettingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"JeopardyGameSettingForm";
			this->Load += gcnew System::EventHandler(this, &JeopardyGameSettingForm::JeopardyGameSettingForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtCols->Text = "";
		this->txtRows->Text = "";
	}
private: System::Void btnOk_Click(System::Object^  sender, System::EventArgs^  e) {
	 
	// Retrieve user inputs (num. of rows and num. of columns) and save to the data object (integer)
	string strRows = marshal_as<string>(this->txtRows->Text);
	int iRows = stoi(strRows);

	string strCols = marshal_as<string>(this->txtCols->Text);
	int iCols = stoi(strCols);

	string strColHeadings = marshal_as<string>(this->txtColHeadings->Text);

	JeopardyGame *gameObj = new JeopardyGame(this->quiz, 1, 3, iRows, iCols, strColHeadings);
	// Create an instance of gameboard and show the game board up

	JeopardyGameBoardForm^ gameBoard = gcnew JeopardyGameBoardForm(gameObj, this->stu);
	gameBoard->Visible = true;
	this->Visible = false;
	gameBoard->Show();

}
private: System::Void JeopardyGameSettingForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
