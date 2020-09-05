#pragma once

namespace Lab1TojRafael1225419 {
	using namespace System::Diagnostics;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormEje1
	/// </summary>
	public ref class MyFormEje1 : public System::Windows::Forms::Form
	{
	public:
		MyFormEje1(void)
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
		~MyFormEje1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtfac1;
	private: System::Windows::Forms::TextBox^ txtfac2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ LResultado;


	private: System::Windows::Forms::Button^ Boperar;
	private: System::Windows::Forms::Button^ Bborrardatos;
	private: System::Windows::Forms::Button^ Biterativa;
	private: System::Windows::Forms::Label^ Lms;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtfac1 = (gcnew System::Windows::Forms::TextBox());
			this->txtfac2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LResultado = (gcnew System::Windows::Forms::LinkLabel());
			this->Boperar = (gcnew System::Windows::Forms::Button());
			this->Bborrardatos = (gcnew System::Windows::Forms::Button());
			this->Biterativa = (gcnew System::Windows::Forms::Button());
			this->Lms = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese Factor 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(316, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ingrese Factor 2";
			// 
			// txtfac1
			// 
			this->txtfac1->Location = System::Drawing::Point(56, 152);
			this->txtfac1->Name = L"txtfac1";
			this->txtfac1->Size = System::Drawing::Size(128, 22);
			this->txtfac1->TabIndex = 1;
			// 
			// txtfac2
			// 
			this->txtfac2->Location = System::Drawing::Point(320, 152);
			this->txtfac2->Name = L"txtfac2";
			this->txtfac2->Size = System::Drawing::Size(128, 22);
			this->txtfac2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(183, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MULTIPLICACION ";
			// 
			// LResultado
			// 
			this->LResultado->AutoSize = true;
			this->LResultado->Location = System::Drawing::Point(220, 314);
			this->LResultado->Name = L"LResultado";
			this->LResultado->Size = System::Drawing::Size(76, 17);
			this->LResultado->TabIndex = 4;
			this->LResultado->TabStop = true;
			this->LResultado->Text = L"Resultado ";
			this->LResultado->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Boperar
			// 
			this->Boperar->BackColor = System::Drawing::Color::MintCream;
			this->Boperar->Location = System::Drawing::Point(56, 206);
			this->Boperar->Name = L"Boperar";
			this->Boperar->Size = System::Drawing::Size(128, 71);
			this->Boperar->TabIndex = 5;
			this->Boperar->Text = L"OPERAR DE FORMA RECURSIVA";
			this->Boperar->UseVisualStyleBackColor = false;
			this->Boperar->Click += gcnew System::EventHandler(this, &MyFormEje1::Boperar_Click);
			// 
			// Bborrardatos
			// 
			this->Bborrardatos->BackColor = System::Drawing::Color::MintCream;
			this->Bborrardatos->Location = System::Drawing::Point(22, 372);
			this->Bborrardatos->Name = L"Bborrardatos";
			this->Bborrardatos->Size = System::Drawing::Size(105, 53);
			this->Bborrardatos->TabIndex = 6;
			this->Bborrardatos->Text = L"Borrar Datos Ingresados";
			this->Bborrardatos->UseVisualStyleBackColor = false;
			this->Bborrardatos->Click += gcnew System::EventHandler(this, &MyFormEje1::Bborrardatos_Click);
			// 
			// Biterativa
			// 
			this->Biterativa->BackColor = System::Drawing::Color::MintCream;
			this->Biterativa->Location = System::Drawing::Point(320, 206);
			this->Biterativa->Name = L"Biterativa";
			this->Biterativa->Size = System::Drawing::Size(128, 71);
			this->Biterativa->TabIndex = 7;
			this->Biterativa->Text = L"OPERAR DE FORMA ITERATIVA";
			this->Biterativa->UseVisualStyleBackColor = false;
			this->Biterativa->Click += gcnew System::EventHandler(this, &MyFormEje1::Biterativa_Click);
			// 
			// Lms
			// 
			this->Lms->AutoSize = true;
			this->Lms->Location = System::Drawing::Point(448, 390);
			this->Lms->Name = L"Lms";
			this->Lms->Size = System::Drawing::Size(26, 17);
			this->Lms->TabIndex = 8;
			this->Lms->Text = L"Ms";
			// 
			// MyFormEje1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(551, 437);
			this->Controls->Add(this->Lms);
			this->Controls->Add(this->Biterativa);
			this->Controls->Add(this->Bborrardatos);
			this->Controls->Add(this->Boperar);
			this->Controls->Add(this->LResultado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtfac2);
			this->Controls->Add(this->txtfac1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormEje1";
			this->Text = L"MyFormEje1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Boton de operacion hecho con recursividad 
	private: System::Void Boperar_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^ watch = gcnew Stopwatch();
		try
		{
			watch->Start(); //Siempre antes de la ejecu
			LResultado->Text = "El resultado de " + txtfac1->Text + " * " + txtfac2->Text + " es de : " + Multiplicar(int::Parse(txtfac1->Text), int::Parse(txtfac2->Text));
			watch->Stop();
		}
		catch (Exception^ error)
		{
			MessageBox::Show("Vaya!! Erro econtrado : " + error->Message, "No se pudo realizar la operacion", MessageBoxButtons::OK, MessageBoxIcon::Error);
			txtfac1->Clear();
			txtfac2->Clear();
		}
		Lms->Text = "Tiempo" + watch->ElapsedMilliseconds + "ms";

	}

	//Apartados de los metodos que se utilizan

		   //Seccion de la funcion  de forma recursiva 
		   static int Multiplicar(int fac1, int fac2) {

			   if (fac2 == 0)
			   {
				   return(0);
			   }
			   else
			   {
				   return fac1 + Multiplicar(fac1, fac2 - 1);
			   }

		   }

		   // Fucion de forma iterativa
		   static int InteraMultiplicacion(int f1, int f2,int total) {

			   for (size_t i = 0; i < f2; i++)
			   {
				   total = total + f1;
			   }
			   return total;
		   }

	//Finalizacion de los metodso
	private: System::Void Bborrardatos_Click(System::Object^ sender, System::EventArgs^ e) {
		LResultado->Text = "Respuesta";
		txtfac1->Clear();
		txtfac2->Clear();
		Lms->Text = "";
	}

		   //Boton de forma itetativa
	private: System::Void Biterativa_Click(System::Object^ sender, System::EventArgs^ e) {
		Stopwatch^ watch = gcnew Stopwatch();
		try
		{
		
			watch->Start(); //Siempre antes de la ejecu
			LResultado->Text = "El resultado de " + txtfac1->Text + " * " + txtfac2->Text + " es de : " + InteraMultiplicacion(int::Parse(txtfac1->Text), int::Parse(txtfac2->Text),0);
			watch->Stop();


		}
		catch (Exception^ error)
		{
			MessageBox::Show("Vaya!! Erro econtrado : " + error->Message, "No se pudo realizar la operacion", MessageBoxButtons::OK, MessageBoxIcon::Error);
			txtfac1->Clear();
			txtfac2->Clear();
			LResultado->Text = "Resultado";

		}

		
		Lms->Text="Tiempo" + watch->ElapsedMilliseconds +"ms";
	}
};
}
