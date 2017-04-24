#pragma once

#include "CAssessment.h"
#include "JeopardyGameBoardForm.h"
#include <msclr\marshal_cppstd.h>
namespace {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QuestionForm
	/// </summary>
	public ref class QuestionForm : public System::Windows::Forms::Form
	{
	public:
		QuestionForm(bool isStaff, 
			JeopardyGame * gameObj, 
			CAssessment *stuAssess)
		{
			this->isStaff = isStaff;
			this->gameObj = gameObj;
			this->stuAssess = stuAssess;
				 
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuestionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtColHeadings;
	protected:
	private: System::Windows::Forms::Label^  lblDesc;
	private: System::Windows::Forms::TextBox^  txtPoints;
	private: System::Windows::Forms::Label^  lblPoints;
	private: System::Windows::Forms::TextBox^  txtTitle;
	private: System::Windows::Forms::Label^  lblTitle;


	private: System::Windows::Forms::TextBox^  txtNumOfOptions;
	private: System::Windows::Forms::Label^  lblNumOfOptions;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtExp;
	private: System::Windows::Forms::Label^  lblExp;
	private: System::Windows::Forms::TextBox^  txtAnswer;
	private: System::Windows::Forms::Label^  lblAnswer;
	private: System::Windows::Forms::Button^  btnOk;
	private: System::Windows::Forms::Button^  btnCancel;

	private:
		bool isStaff;
		JeopardyGame * gameObj;
		CAssessment *stuAssess;
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
			this->txtColHeadings = (gcnew System::Windows::Forms::TextBox());
			this->lblDesc = (gcnew System::Windows::Forms::Label());
			this->txtPoints = (gcnew System::Windows::Forms::TextBox());
			this->lblPoints = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->txtNumOfOptions = (gcnew System::Windows::Forms::TextBox());
			this->lblNumOfOptions = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtExp = (gcnew System::Windows::Forms::TextBox());
			this->lblExp = (gcnew System::Windows::Forms::Label());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->lblAnswer = (gcnew System::Windows::Forms::Label());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtColHeadings
			// 
			this->txtColHeadings->BackColor = System::Drawing::SystemColors::Info;
			this->txtColHeadings->Location = System::Drawing::Point(448, 131);
			this->txtColHeadings->Multiline = true;
			this->txtColHeadings->Name = L"txtColHeadings";
			this->txtColHeadings->Size = System::Drawing::Size(692, 150);
			this->txtColHeadings->TabIndex = 17;
			// 
			// lblDesc
			// 
			this->lblDesc->AutoSize = true;
			this->lblDesc->Location = System::Drawing::Point(220, 134);
			this->lblDesc->Name = L"lblDesc";
			this->lblDesc->Size = System::Drawing::Size(222, 44);
			this->lblDesc->TabIndex = 16;
			this->lblDesc->Text = L"Description:";
			// 
			// txtPoints
			// 
			this->txtPoints->BackColor = System::Drawing::SystemColors::Info;
			this->txtPoints->Location = System::Drawing::Point(917, 316);
			this->txtPoints->Multiline = true;
			this->txtPoints->Name = L"txtPoints";
			this->txtPoints->Size = System::Drawing::Size(176, 64);
			this->txtPoints->TabIndex = 15;
			// 
			// lblPoints
			// 
			this->lblPoints->AutoSize = true;
			this->lblPoints->Location = System::Drawing::Point(773, 319);
			this->lblPoints->Name = L"lblPoints";
			this->lblPoints->Size = System::Drawing::Size(137, 44);
			this->lblPoints->TabIndex = 14;
			this->lblPoints->Text = L"Points:";
			// 
			// txtTitle
			// 
			this->txtTitle->BackColor = System::Drawing::SystemColors::Info;
			this->txtTitle->Location = System::Drawing::Point(391, 37);
			this->txtTitle->Multiline = true;
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(725, 66);
			this->txtTitle->TabIndex = 13;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Location = System::Drawing::Point(228, 37);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(104, 44);
			this->lblTitle->TabIndex = 12;
			this->lblTitle->Text = L"Title:";
			// 
			// txtNumOfOptions
			// 
			this->txtNumOfOptions->BackColor = System::Drawing::SystemColors::Info;
			this->txtNumOfOptions->Location = System::Drawing::Point(618, 314);
			this->txtNumOfOptions->Multiline = true;
			this->txtNumOfOptions->Name = L"txtNumOfOptions";
			this->txtNumOfOptions->Size = System::Drawing::Size(126, 66);
			this->txtNumOfOptions->TabIndex = 22;
			this->txtNumOfOptions->TextChanged += gcnew EventHandler(this, &QuestionForm::TextChanged_Handler);

			// 
			// lblNumOfOptions
			// 
			this->lblNumOfOptions->AutoSize = true;
			this->lblNumOfOptions->Location = System::Drawing::Point(229, 319);
			this->lblNumOfOptions->Name = L"lblNumOfOptions";
			this->lblNumOfOptions->Size = System::Drawing::Size(342, 44);
			this->lblNumOfOptions->TabIndex = 21;
			this->lblNumOfOptions->Text = L"Number of options:";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(236, 407);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(940, 201);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// txtExp
			// 
			this->txtExp->BackColor = System::Drawing::SystemColors::Info;
			this->txtExp->Location = System::Drawing::Point(469, 738);
			this->txtExp->Multiline = true;
			this->txtExp->Name = L"txtExp";
			this->txtExp->Size = System::Drawing::Size(767, 71);
			this->txtExp->TabIndex = 25;
			// 
			// lblExp
			// 
			this->lblExp->AutoSize = true;
			this->lblExp->Location = System::Drawing::Point(241, 751);
			this->lblExp->Name = L"lblExp";
			this->lblExp->Size = System::Drawing::Size(230, 44);
			this->lblExp->TabIndex = 24;
			this->lblExp->Text = L"Explanation:";
			// 
			// txtAnswer
			// 
			this->txtAnswer->BackColor = System::Drawing::SystemColors::Info;
			this->txtAnswer->Location = System::Drawing::Point(469, 637);
			this->txtAnswer->Multiline = true;
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(707, 71);
			this->txtAnswer->TabIndex = 27;
			// 
			// lblAnswer
			// 
			this->lblAnswer->AutoSize = true;
			this->lblAnswer->Location = System::Drawing::Point(241, 650);
			this->lblAnswer->Name = L"lblAnswer";
			this->lblAnswer->Size = System::Drawing::Size(157, 44);
			this->lblAnswer->TabIndex = 26;
			this->lblAnswer->Text = L"Answer:";
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(1285, 186);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(185, 72);
			this->btnOk->TabIndex = 28;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(1285, 385);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(185, 72);
			this->btnCancel->TabIndex = 29;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// QuestionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(22, 42);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1579, 898);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->lblAnswer);
			this->Controls->Add(this->txtExp);
			this->Controls->Add(this->lblExp);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtNumOfOptions);
			this->Controls->Add(this->lblNumOfOptions);
			this->Controls->Add(this->txtColHeadings);
			this->Controls->Add(this->lblDesc);
			this->Controls->Add(this->txtPoints);
			this->Controls->Add(this->lblPoints);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->lblTitle);
			this->Name = L"QuestionForm";
			this->Text = L"QuestionForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//CQ added
	private: System::Void TextChanged_Handler(System::Object^  sender, System::EventArgs^  e) {
		string strPoints = marshal_as<std::string>(this->txtPoints->Text);
		int iPoints = stoi(strPoints);

		//cli::array<TextBox ^>^ OptionsInputBox = 
	}
#pragma endregion
	};
}
