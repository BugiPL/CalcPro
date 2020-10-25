#pragma once
#include <string> 
#include <iostream>
#include <iomanip>
#include <msclr\marshal_cppstd.h>

namespace CalcPRO {
	long double temp = 0;
	std::string typeEqual = "+";
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Gui
	/// </summary>
	public ref class Gui : public System::Windows::Forms::Form
	{
	
	public:
		Gui(void)
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
		~Gui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  calcBox;
	protected:

	protected:
	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  b4;
	private: System::Windows::Forms::Button^  b5;
	private: System::Windows::Forms::Button^  b6;
	private: System::Windows::Forms::Button^  b7;
	private: System::Windows::Forms::Button^  b8;
	private: System::Windows::Forms::Button^  b9;
	private: System::Windows::Forms::Button^  bPlus;
	private: System::Windows::Forms::Button^  bEqual;
	private: System::Windows::Forms::Button^  bC;
	private: System::Windows::Forms::Button^  bNegative;
	private: System::Windows::Forms::Button^  bMulti;
	private: System::Windows::Forms::Button^  bDiv;
	private: System::Windows::Forms::Button^  bDot;
	private: System::Windows::Forms::Button^  b0;

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
			this->calcBox = (gcnew System::Windows::Forms::TextBox());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->bPlus = (gcnew System::Windows::Forms::Button());
			this->bEqual = (gcnew System::Windows::Forms::Button());
			this->bC = (gcnew System::Windows::Forms::Button());
			this->bNegative = (gcnew System::Windows::Forms::Button());
			this->bMulti = (gcnew System::Windows::Forms::Button());
			this->bDiv = (gcnew System::Windows::Forms::Button());
			this->bDot = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// calcBox
			// 
			this->calcBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcBox->Location = System::Drawing::Point(34, 10);
			this->calcBox->Name = L"calcBox";
			this->calcBox->Size = System::Drawing::Size(218, 49);
			this->calcBox->TabIndex = 0;
			this->calcBox->Text = L"0";
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(34, 187);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(50, 50);
			this->b1->TabIndex = 1;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &Gui::b1_Click);
			// 
			// b2
			// 
			this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(90, 187);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(50, 50);
			this->b2->TabIndex = 2;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &Gui::b2_Click);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->Location = System::Drawing::Point(146, 187);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(50, 50);
			this->b3->TabIndex = 3;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &Gui::b3_Click);
			// 
			// b4
			// 
			this->b4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(34, 131);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(50, 50);
			this->b4->TabIndex = 4;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &Gui::b4_Click);
			// 
			// b5
			// 
			this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(90, 131);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(50, 50);
			this->b5->TabIndex = 5;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &Gui::b5_Click);
			// 
			// b6
			// 
			this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(146, 131);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(50, 50);
			this->b6->TabIndex = 6;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &Gui::b6_Click);
			// 
			// b7
			// 
			this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(34, 75);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(50, 50);
			this->b7->TabIndex = 7;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &Gui::b7_Click);
			// 
			// b8
			// 
			this->b8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(90, 75);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(50, 50);
			this->b8->TabIndex = 8;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &Gui::b8_Click);
			// 
			// b9
			// 
			this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->Location = System::Drawing::Point(146, 75);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(50, 50);
			this->b9->TabIndex = 9;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &Gui::b9_Click);
			// 
			// bPlus
			// 
			this->bPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bPlus->Location = System::Drawing::Point(202, 243);
			this->bPlus->Name = L"bPlus";
			this->bPlus->Size = System::Drawing::Size(50, 50);
			this->bPlus->TabIndex = 10;
			this->bPlus->Text = L"+";
			this->bPlus->UseVisualStyleBackColor = true;
			this->bPlus->Click += gcnew System::EventHandler(this, &Gui::bPlus_Click);
			// 
			// bEqual
			// 
			this->bEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEqual->Location = System::Drawing::Point(146, 299);
			this->bEqual->Name = L"bEqual";
			this->bEqual->Size = System::Drawing::Size(106, 50);
			this->bEqual->TabIndex = 11;
			this->bEqual->Text = L"=";
			this->bEqual->UseVisualStyleBackColor = true;
			this->bEqual->Click += gcnew System::EventHandler(this, &Gui::bEqual_Click);
			// 
			// bC
			// 
			this->bC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bC->Location = System::Drawing::Point(34, 243);
			this->bC->Name = L"bC";
			this->bC->Size = System::Drawing::Size(50, 50);
			this->bC->TabIndex = 12;
			this->bC->Text = L"C";
			this->bC->UseVisualStyleBackColor = true;
			this->bC->Click += gcnew System::EventHandler(this, &Gui::bC_Click);
			// 
			// bNegative
			// 
			this->bNegative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bNegative->Location = System::Drawing::Point(202, 187);
			this->bNegative->Name = L"bNegative";
			this->bNegative->Size = System::Drawing::Size(50, 50);
			this->bNegative->TabIndex = 13;
			this->bNegative->Text = L"-";
			this->bNegative->UseVisualStyleBackColor = true;
			this->bNegative->Click += gcnew System::EventHandler(this, &Gui::bNegative_Click);
			// 
			// bMulti
			// 
			this->bMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMulti->Location = System::Drawing::Point(202, 131);
			this->bMulti->Name = L"bMulti";
			this->bMulti->Size = System::Drawing::Size(50, 50);
			this->bMulti->TabIndex = 14;
			this->bMulti->Text = L"*";
			this->bMulti->UseVisualStyleBackColor = true;
			this->bMulti->Click += gcnew System::EventHandler(this, &Gui::bMulti_Click);
			// 
			// bDiv
			// 
			this->bDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDiv->Location = System::Drawing::Point(202, 75);
			this->bDiv->Name = L"bDiv";
			this->bDiv->Size = System::Drawing::Size(50, 50);
			this->bDiv->TabIndex = 15;
			this->bDiv->Text = L"/";
			this->bDiv->UseVisualStyleBackColor = true;
			this->bDiv->Click += gcnew System::EventHandler(this, &Gui::bDiv_Click);
			// 
			// bDot
			// 
			this->bDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDot->Location = System::Drawing::Point(90, 243);
			this->bDot->Name = L"bDot";
			this->bDot->Size = System::Drawing::Size(50, 50);
			this->bDot->TabIndex = 16;
			this->bDot->Text = L".";
			this->bDot->UseVisualStyleBackColor = true;
			this->bDot->Click += gcnew System::EventHandler(this, &Gui::bDot_Click);
			// 
			// b0
			// 
			this->b0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b0->Location = System::Drawing::Point(146, 243);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(50, 50);
			this->b0->TabIndex = 17;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = true;
			this->b0->Click += gcnew System::EventHandler(this, &Gui::b0_Click);
			// 
			// Gui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 359);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->bDot);
			this->Controls->Add(this->bDiv);
			this->Controls->Add(this->bMulti);
			this->Controls->Add(this->bNegative);
			this->Controls->Add(this->bC);
			this->Controls->Add(this->bEqual);
			this->Controls->Add(this->bPlus);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->calcBox);
			this->Name = L"Gui";
			this->Text = L"CalcPro";
			this->Load += gcnew System::EventHandler(this, &Gui::Gui_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^ addNo(String ^ add, String ^ base)
		{

			if (base->Equals("0")) {
				return add;
			}
			else {
				return base + add;
			}
		}
		long double strToLL(String ^ str) {
			std::string tempStr = msclr::interop::marshal_as< std::string >(str);
			long double plusNo = std::stold(tempStr);
			return plusNo;
		}
	private: System::Void b0_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("0", calcBox->Text);
	}
	private: System::Void b1_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("1", calcBox->Text);
			
			//popBack(in, add);
	}
	
	private: System::Void b2_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("2", calcBox->Text);
	}
	private: System::Void b3_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("3", calcBox->Text);
	}
	private: System::Void b4_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("4", calcBox->Text);
	}
	private: System::Void b5_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("5", calcBox->Text);
	}
	private: System::Void b6_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("6", calcBox->Text);
	}
	private: System::Void b7_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("7", calcBox->Text);
	}
	private: System::Void b8_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("8", calcBox->Text);
	}
	private: System::Void b9_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = addNo("9", calcBox->Text);
	}
	private: System::Void bC_Click(System::Object^  sender, System::EventArgs^  e) {
		calcBox->Text = "0";
		temp = 0;
		//temp = "0";
	}
	private: System::Void bPlus_Click(System::Object^  sender, System::EventArgs^  e) {
		//long long tempPlus = atoll(&temp);
		long double plusNo = strToLL(calcBox->Text);
		temp = temp + plusNo;
		calcBox->Text = "0";
		typeEqual = "+";
		//temp = std::to_string(tempNo);
		//calcBox->Text = "0";
		
	}
	
	private: System::Void bNegative_Click(System::Object^  sender, System::EventArgs^  e) {
		temp = temp + strToLL(calcBox->Text);
		calcBox->Text = "0";
		typeEqual = "-";
	}
	private: System::Void bMulti_Click(System::Object^  sender, System::EventArgs^  e) {
		temp = temp + strToLL(calcBox->Text);
		calcBox->Text = "0";
		typeEqual = "*";
	}
	private: System::Void bDiv_Click(System::Object^  sender, System::EventArgs^  e) {
		temp = temp + strToLL(calcBox->Text);
		calcBox->Text = "0";
		typeEqual = "/";
	}
	private: System::Void bEqual_Click(System::Object^  sender, System::EventArgs^  e) {
		long double no = strToLL(calcBox->Text);
		if (typeEqual == "+") {
			no = temp + no;
		}
		else if (typeEqual == "-") {
			no = temp - no;
		}
		else if (typeEqual == "*") {
			if (temp == 0||no==0) {
				no = 0;
			}
			else {
				no = temp * no;
			}
			
		}
		else if (typeEqual == "/") {
			if (temp == 0) {
				no = 0;
			}
			else {
				no = temp / no;
			}
			
		}
		std::string tempS = std::to_string(no);
			for (std::string::size_type i = tempS.size() - 1; i >= 0; i--) {
				if (tempS[i].Equals('.')) {
					tempS[i] = NULL;
					break;
				}
				if (!tempS[i].Equals('0') && !tempS[i].Equals('.')) {
					break;
				}
				else {
					tempS[i] = NULL;
				}

			}
		
		
		/*
		if (tempS[0] == NULL) {
			tempS[0] = '0';
		}
		*/
		String ^ strTemp = msclr::interop::marshal_as<String^>(tempS);
		calcBox->Text = strTemp;
		temp = 0;
	}
	private: System::Void bDot_Click(System::Object^  sender, System::EventArgs^  e) {
		if(!calcBox->Text->Contains(".")) {
			calcBox->Text = calcBox->Text + ".";
		}
		
	}
private: System::Void Gui_Load(System::Object^  sender, System::EventArgs^  e) {
}


};
	}
