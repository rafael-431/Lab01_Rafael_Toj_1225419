#pragma once
#include "MyFormEje1.h"
#include "MyFormEje2.h"
#include "MyFormEje4.h"
namespace Lab1TojRafael1225419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Beje2;
	private: System::Windows::Forms::Button^ Beje3;
	private: System::Windows::Forms::Button^ Beje4;





	private: System::Windows::Forms::Button^ BSalir;
	private: System::Windows::Forms::Button^ Beje1;
	private: System::Windows::Forms::Label^ label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Beje2 = (gcnew System::Windows::Forms::Button());
			this->Beje3 = (gcnew System::Windows::Forms::Button());
			this->Beje4 = (gcnew System::Windows::Forms::Button());
			this->BSalir = (gcnew System::Windows::Forms::Button());
			this->Beje1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ejercico 1 (MULTIPLICACION)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(474, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 18);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ejercicio 2 (PALÍDROMA)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(362, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ejercico 3 (DETERMINANTE DE UNA MATRIZ)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(435, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(291, 18);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ejercicio 4 (CONVERSION DE BASE)";
			// 
			// Beje2
			// 
			this->Beje2->BackColor = System::Drawing::SystemColors::Highlight;
			this->Beje2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Beje2->Location = System::Drawing::Point(515, 112);
			this->Beje2->Name = L"Beje2";
			this->Beje2->Size = System::Drawing::Size(128, 56);
			this->Beje2->TabIndex = 1;
			this->Beje2->Text = L"Ejercicio 2";
			this->Beje2->UseVisualStyleBackColor = false;
			this->Beje2->Click += gcnew System::EventHandler(this, &MyForm::Beje2_Click);
			// 
			// Beje3
			// 
			this->Beje3->BackColor = System::Drawing::SystemColors::Highlight;
			this->Beje3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Beje3->Location = System::Drawing::Point(90, 270);
			this->Beje3->Name = L"Beje3";
			this->Beje3->Size = System::Drawing::Size(120, 56);
			this->Beje3->TabIndex = 1;
			this->Beje3->Text = L"Ejercicio 3";
			this->Beje3->UseVisualStyleBackColor = false;
			this->Beje3->Click += gcnew System::EventHandler(this, &MyForm::Beje3_Click);
			// 
			// Beje4
			// 
			this->Beje4->BackColor = System::Drawing::SystemColors::Highlight;
			this->Beje4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Beje4->Location = System::Drawing::Point(515, 270);
			this->Beje4->Name = L"Beje4";
			this->Beje4->Size = System::Drawing::Size(128, 56);
			this->Beje4->TabIndex = 1;
			this->Beje4->Text = L"Ejercicio 4";
			this->Beje4->UseVisualStyleBackColor = false;
			this->Beje4->Click += gcnew System::EventHandler(this, &MyForm::Beje4_Click);
			// 
			// BSalir
			// 
			this->BSalir->BackColor = System::Drawing::SystemColors::Highlight;
			this->BSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BSalir->Location = System::Drawing::Point(306, 363);
			this->BSalir->Name = L"BSalir";
			this->BSalir->Size = System::Drawing::Size(133, 56);
			this->BSalir->TabIndex = 2;
			this->BSalir->Text = L"Salir";
			this->BSalir->UseVisualStyleBackColor = false;
			this->BSalir->Click += gcnew System::EventHandler(this, &MyForm::BSalir_Click);
			// 
			// Beje1
			// 
			this->Beje1->BackColor = System::Drawing::SystemColors::Highlight;
			this->Beje1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Beje1->Location = System::Drawing::Point(90, 112);
			this->Beje1->Name = L"Beje1";
			this->Beje1->Size = System::Drawing::Size(121, 56);
			this->Beje1->TabIndex = 3;
			this->Beje1->Text = L"Ejercicio 1";
			this->Beje1->UseVisualStyleBackColor = false;
			this->Beje1->Click += gcnew System::EventHandler(this, &MyForm::Beje1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(326, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"MENU";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(752, 465);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Beje1);
			this->Controls->Add(this->BSalir);
			this->Controls->Add(this->Beje4);
			this->Controls->Add(this->Beje3);
			this->Controls->Add(this->Beje2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BSalir_Click(System::Object^ sender, System::EventArgs^ e) {	
		this->Close(); // Para que se cierre el programa 

		

		
	}
	
		   // Boton para el ejercicio 1
private: System::Void Beje1_Click(System::Object^ sender, System::EventArgs^ e) {

	MyFormEje1^ Ejercicio1 = gcnew MyFormEje1();
	Ejercicio1->ShowDialog();

}
	   // Boton para el ejercicio 2
private: System::Void Beje2_Click(System::Object^ sender, System::EventArgs^ e) {

	MyFormEje2^ Ejercicio2 = gcnew MyFormEje2();
	Ejercicio2->ShowDialog();

	

}
private: System::Void Beje3_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void Beje4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormEje4^ Ejercicio4 = gcnew MyFormEje4();
	Ejercicio4->ShowDialog();
}
};
}
