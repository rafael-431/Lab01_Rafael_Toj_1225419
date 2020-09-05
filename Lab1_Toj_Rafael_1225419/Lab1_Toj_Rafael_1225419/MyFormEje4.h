#pragma once
#include<math.h>

namespace Lab1TojRafael1225419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading::Tasks;

	/// <summary>
	/// Summary for MyFormEje4
	/// </summary>
	public ref class MyFormEje4 : public System::Windows::Forms::Form
	{
	public:
		MyFormEje4(void)
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
		~MyFormEje4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtBase;


	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtbaseConver;

	private: System::Windows::Forms::TextBox^ txtIngresenumero;

	private: System::Windows::Forms::Label^ Lrespuesta;
	private: System::Windows::Forms::Button^ button1;

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
			this->txtBase = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtbaseConver = (gcnew System::Windows::Forms::TextBox());
			this->txtIngresenumero = (gcnew System::Windows::Forms::TextBox());
			this->Lrespuesta = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 63);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Base del numero original";
			// 
			// txtBase
			// 
			this->txtBase->Location = System::Drawing::Point(338, 65);
			this->txtBase->Margin = System::Windows::Forms::Padding(4);
			this->txtBase->Name = L"txtBase";
			this->txtBase->Size = System::Drawing::Size(178, 24);
			this->txtBase->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(312, 9);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(234, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Conversiones de base ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 134);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Base a convertir";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(84, 202);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ingrese numero";
			// 
			// txtbaseConver
			// 
			this->txtbaseConver->Location = System::Drawing::Point(338, 134);
			this->txtbaseConver->Margin = System::Windows::Forms::Padding(4);
			this->txtbaseConver->Name = L"txtbaseConver";
			this->txtbaseConver->Size = System::Drawing::Size(178, 24);
			this->txtbaseConver->TabIndex = 7;
			// 
			// txtIngresenumero
			// 
			this->txtIngresenumero->Location = System::Drawing::Point(338, 202);
			this->txtIngresenumero->Margin = System::Windows::Forms::Padding(4);
			this->txtIngresenumero->Name = L"txtIngresenumero";
			this->txtIngresenumero->Size = System::Drawing::Size(178, 24);
			this->txtIngresenumero->TabIndex = 8;
			this->txtIngresenumero->TextChanged += gcnew System::EventHandler(this, &MyFormEje4::txtIngresenumero_TextChanged);
			this->txtIngresenumero->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyFormEje4::txtIngresenumero_KeyPress);
			// 
			// Lrespuesta
			// 
			this->Lrespuesta->AutoSize = true;
			this->Lrespuesta->Location = System::Drawing::Point(359, 275);
			this->Lrespuesta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lrespuesta->Name = L"Lrespuesta";
			this->Lrespuesta->Size = System::Drawing::Size(79, 18);
			this->Lrespuesta->TabIndex = 9;
			this->Lrespuesta->Text = L"Respuesta";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(87, 345);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 80);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Por iteracion";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormEje4::button1_Click);
			// 
			// MyFormEje4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(803, 521);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Lrespuesta);
			this->Controls->Add(this->txtIngresenumero);
			this->Controls->Add(this->txtbaseConver);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtBase);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormEje4";
			this->Text = L"MyFormEje4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		// Cadena de llevado
		int con(String^ palabra) {
			int valorRetorno = 0;
			int tamaño = palabra->Length;
			int valorpp = 0;
			int litrarl = 0;
			valorpp = Convert::ToInt64(palabra[0]);
			valorRetorno = valorpp * 2;
		
			return valorpp;
		}

		int cadena(String^ entrada,int tamaño,int base) {

			int resultado = 0;
			int conentero = 0;
			conentero = int::Parse(entrada);
			resultado = (conentero) *(pow(base,tamaño));		
			return resultado;
		}
	
				
	private: System::Void Bbinario_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void Bdecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	

   }


private: System::Void txtIngresenumero_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void txtIngresenumero_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	/*
	if (e->KeyChar!=48 && e->KeyChar!=49)
	{
		MessageBox::Show("Solo numeos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		e->Handled = true;
		return;
	}*/
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int base = 0;
	int bconvertir = 0;
	base = Convert::ToInt32(txtBase->Text);
	bconvertir = Convert::ToInt32(txtbaseConver->Text);

	switch (base)
	{ 
	case 10:
		
		break;
	case 2:
		ConvEspecificas(bconvertir);
		break;
	case 8:
		ConvEspecificas(bconvertir);
		break;

	case 16:
		break;

	default:
		break;
	}

}

	   int ConvEspecificas(int baseaconvertir) {
		   String^ palabra;
		   String^ Penviar;
		   int basemadre = 0;
		   int tamaño = 0;
		   int acumulador = 0;
		   int tamañoParaenviar = 0;
		   String^ SegTrans = "";
		   switch (baseaconvertir)
		   {
		   case 10:
				   palabra = (txtIngresenumero->Text);
				   tamaño = palabra->Length;
				   tamañoParaenviar = (palabra->Length - 1);
				   basemadre = (Convert::ToInt32(txtBase->Text));
				   for (size_t i = 0; i < tamaño; i++) //102   //0-1=1 // 1-2 =0 // 2-3=2   * 2
				   {

					   acumulador = acumulador + cadena((Penviar = palabra->Substring(i, 1)), tamañoParaenviar, basemadre);
					   tamañoParaenviar--;
				   }
				   Lrespuesta->Text = "" + acumulador;

			   break;

		   case 2:

			   break;
		   case 8:
			   
			   palabra = (txtIngresenumero->Text);
			   tamaño = palabra->Length;
			   tamañoParaenviar = (palabra->Length - 1);
			   basemadre = (Convert::ToInt32(txtBase->Text));
			   for (size_t i = 0; i < tamaño; i++) //102   //0-1=1 // 1-2 =0 // 2-3=2   * 2
			   {

				   acumulador = acumulador + cadena((Penviar = palabra->Substring(i, 1)), tamañoParaenviar,basemadre);
				   tamañoParaenviar--;
			   } 


			   break;

		   case 16:
			   break;

		   default:
			   break;
		   }

		   return 0;
	}
};
}
