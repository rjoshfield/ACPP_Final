#pragma once
#include "CStudent.h"
#include "CAssessment.h"
#include "JeopardyGame.h"

namespace EduGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for JeopardyBoardForm
	/// </summary>
	public ref class JeopardyBoardForm : public System::Windows::Forms::Form
	{
	public:
		JeopardyBoardForm(JeopardyGame *gameObj, CStudent *stu)
		{ //For staff --> edit game and preview the game play
			this->gameObj = gameObj;
			this->stu = stu;
			this->isStaff = true;

			InitializeComponent();

			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->AutoSize = true;
		}

		// Another constructure should hold the assessment
		JeopardyBoardForm(JeopardyGame *gameObj, CAssessment *stuAssess)
		{ //For student --> play and perform assessment statistics
			this->gameObj = gameObj;
			this->stu = stu;
			this->isStaff = false;
			this->stuAssess = stuAssess;

			InitializeComponent();

			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->AutoSize = true;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JeopardyBoardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnPlay;
	protected:
	private: System::Windows::Forms::Button^  btnEdit;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

	private:
		CStudent * stu;
		JeopardyGame * gameObj;
		bool isStaff;
		CAssessment * stuAssess;
		cli::array<Button ^, 2>^ buttons;
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
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SuspendLayout();
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(83, 26);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(216, 89);
			this->btnPlay->TabIndex = 0;
			this->btnPlay->Text = L"Play mode";
			this->btnPlay->UseVisualStyleBackColor = true;
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(465, 26);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(216, 89);
			this->btnEdit->TabIndex = 1;
			this->btnEdit->Text = L"Edit mode";
			this->btnEdit->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			// COP2335 - Make dynamic table layout panel
			this->tableLayoutPanel1->ColumnCount = this->gameObj->getCols();
			for (int i = 0; i < this->tableLayoutPanel1->ColumnCount; i++)
				this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));

			this->tableLayoutPanel1->Location = System::Drawing::Point(83, 156);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";

			this->tableLayoutPanel1->RowCount = this->gameObj->getRows();
			for (int i = 0; i < this->tableLayoutPanel1->RowCount; i++)
				this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));

			this->tableLayoutPanel1->Size = System::Drawing::Size(1285, 722);
			this->tableLayoutPanel1->TabIndex = 2;
			this->tableLayoutPanel1->AutoSize = true;

			// COP2335 Add buttons in the game board
			buttons = gcnew cli::array<Button^, 2>(this->tableLayoutPanel1->RowCount,
				this->tableLayoutPanel1->ColumnCount); // create the reference of a two-dimension button array
			for (int i = 0; i < this->tableLayoutPanel1->RowCount; i++)
				for (int j = 0; j < this->tableLayoutPanel1->ColumnCount; j++) {
					buttons[i, j] = gcnew System::Windows::Forms::Button(); //create instance of a button

																			//change the property of the created button
					buttons[i, j]->AutoSize = true;
					buttons[i, j]->Enabled = true;
					buttons[i, j]->Image = Image::FromFile(".\\questions.jpg");

					// change the button source name
					buttons[i, j]->Name = gcnew String(("btn_" + std::to_string(i) + "_" + std::to_string(j)).c_str());

					// Event registration

					// Put the button into the tableLayoutPanel
					this->tableLayoutPanel1->Controls->Add(buttons[i, j], j, i);
				}

			// 
			// 
			// JeopardyBoardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(22, 42);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1458, 910);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnPlay);
			this->Name = L"JeopardyBoardForm";
			this->Text = L"JeopardyBoardForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
