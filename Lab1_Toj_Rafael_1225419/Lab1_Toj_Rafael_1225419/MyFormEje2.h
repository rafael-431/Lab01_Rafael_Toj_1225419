#pragma once

namespace Lab1TojRafael1225419 {
	using namespace System::Diagnostics;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyFormEje2
	/// </summary>
	public ref class MyFormEje2 : public System::Windows::Forms::Form
	{
	public:
		MyFormEje2(void)
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
		~MyFormEje2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ BVerpalabra;
	private: System::Windows::Forms::LinkLabel^ LRes;
	private: System::Windows::Forms::Button^ BborrarD;
	private: System::Windows::Forms::Button^ Barchivo;
	private: System::Windows::Forms::OpenFileDialog^ Sarchivo;
	private: System::Windows::Forms::Button^ BIterativa;
	private: System::Windows::Forms::TextBox^ txtpath;
	private: System::Windows::Forms::Label^ Lejecu;





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
			this->BVerpalabra = (gcnew System::Windows::Forms::Button());
			this->LRes = (gcnew System::Windows::Forms::LinkLabel());
			this->BborrarD = (gcnew System::Windows::Forms::Button());
			this->Barchivo = (gcnew System::Windows::Forms::Button());
			this->Sarchivo = (gcnew System::Windows::Forms::OpenFileDialog());
			this->BIterativa = (gcnew System::Windows::Forms::Button());
			this->txtpath = (gcnew System::Windows::Forms::TextBox());
			this->Lejecu = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione un archivo en formato csv";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(192, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"PALABRAS  PALINDROMAS ";
			// 
			// BVerpalabra
			// 
			this->BVerpalabra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BVerpalabra->Location = System::Drawing::Point(79, 267);
			this->BVerpalabra->Name = L"BVerpalabra";
			this->BVerpalabra->Size = System::Drawing::Size(137, 79);
			this->BVerpalabra->TabIndex = 3;
			this->BVerpalabra->Text = L"Forma recursiva";
			this->BVerpalabra->UseVisualStyleBackColor = true;
			this->BVerpalabra->Click += gcnew System::EventHandler(this, &MyFormEje2::BVerpalabra_Click);
			// 
			// LRes
			// 
			this->LRes->AutoSize = true;
			this->LRes->Location = System::Drawing::Point(287, 423);
			this->LRes->Name = L"LRes";
			this->LRes->Size = System::Drawing::Size(76, 17);
			this->LRes->TabIndex = 4;
			this->LRes->TabStop = true;
			this->LRes->Text = L"Respuesta";
			// 
			// BborrarD
			// 
			this->BborrarD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BborrarD->Location = System::Drawing::Point(12, 480);
			this->BborrarD->Name = L"BborrarD";
			this->BborrarD->Size = System::Drawing::Size(92, 54);
			this->BborrarD->TabIndex = 5;
			this->BborrarD->Text = L"Borrar Datos";
			this->BborrarD->UseVisualStyleBackColor = true;
			this->BborrarD->Click += gcnew System::EventHandler(this, &MyFormEje2::BborrarD_Click);
			// 
			// Barchivo
			// 
			this->Barchivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Barchivo->Location = System::Drawing::Point(79, 132);
			this->Barchivo->Name = L"Barchivo";
			this->Barchivo->Size = System::Drawing::Size(119, 68);
			this->Barchivo->TabIndex = 6;
			this->Barchivo->Text = L"Archivo ";
			this->Barchivo->UseVisualStyleBackColor = true;
			this->Barchivo->Click += gcnew System::EventHandler(this, &MyFormEje2::Barchivo_Click);
			// 
			// Sarchivo
			// 
			this->Sarchivo->FileName = L"SubirArchibo";
			// 
			// BIterativa
			// 
			this->BIterativa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BIterativa->Location = System::Drawing::Point(457, 267);
			this->BIterativa->Name = L"BIterativa";
			this->BIterativa->Size = System::Drawing::Size(136, 79);
			this->BIterativa->TabIndex = 7;
			this->BIterativa->Text = L"Forma iterativa";
			this->BIterativa->UseVisualStyleBackColor = true;
			this->BIterativa->Click += gcnew System::EventHandler(this, &MyFormEje2::BIterativa_Click);
			// 
			// txtpath
			// 
			this->txtpath->Location = System::Drawing::Point(354, 156);
			this->txtpath->Name = L"txtpath";
			this->txtpath->Size = System::Drawing::Size(262, 22);
			this->txtpath->TabIndex = 8;
			// 
			// Lejecu
			// 
			this->Lejecu->AutoSize = true;
			this->Lejecu->Location = System::Drawing::Point(612, 490);
			this->Lejecu->Name = L"Lejecu";
			this->Lejecu->Size = System::Drawing::Size(26, 17);
			this->Lejecu->TabIndex = 9;
			this->Lejecu->Text = L"ms";
			// 
			// MyFormEje2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleVioletRed;
			this->ClientSize = System::Drawing::Size(713, 546);
			this->Controls->Add(this->Lejecu);
			this->Controls->Add(this->txtpath);
			this->Controls->Add(this->BIterativa);
			this->Controls->Add(this->Barchivo);
			this->Controls->Add(this->BborrarD);
			this->Controls->Add(this->LRes);
			this->Controls->Add(this->BVerpalabra);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormEje2";
			this->Text = L"MyFormEje2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		 /// Truena cuando no son impares las palabras ok
		bool Palindroma(String^ Palabra,int (tamaño), int inicio) {
			bool respuesta = true;
			
	
			if (Palabra[inicio] != Palabra[tamaño])
			{
				return false;

			}
			else if (inicio==tamaño)
			{
				return true;
			}
				
			return Palindroma(Palabra, (tamaño - 1), (inicio + 1));

		}


		// Funcion para saber si es palindroma Iterativa
		bool PalabraPalindroma(String^ palabraindi) {
			bool respuesta = true;
			int tamañoReal = 0;
			tamañoReal = (palabraindi->Length)-1;
			int inicio = 0;

			for (size_t i = 0; i < palabraindi->Length; i++)
			{
				if (palabraindi[i]!= palabraindi[tamañoReal]) 
				{
					respuesta = false;
				}			
				tamañoReal--;

			}
			return respuesta;
		}

		

		// Boton para palabra recursiva
	private: System::Void BVerpalabra_Click(System::Object^ sender, System::EventArgs^ e) {		
		int acumulador = 0;
		Stopwatch^ watch = gcnew Stopwatch();
		try
		{
			watch->Start(); //Siempre antes de la ejecu
			array<String^>^ ASubido = File::ReadAllLines(txtpath->Text); // Text de path del archivo csv que es el que lee 
			int tamaño = 0;
			tamaño = ASubido->Length;

			for (size_t i = 0; i < tamaño; i++)
			{
				array<String^>^ subvadena = ASubido[i]->Split(',');
				for (size_t j = 0; j < subvadena->Length; j++)
				{
					if (Palindroma(subvadena[j], (subvadena->Length - 1), 0) == true)
					{
						acumulador++;
					}
				}
			}
			LRes->Text = "Se encuentran " + acumulador + " palabras palindromas";
			watch->Stop();
			Lejecu->Text = "Tiempo" + watch->ElapsedMilliseconds + "ms";
		}
		catch (Exception^ e)
		{
			MessageBox::Show("No subio ningun  archivo", Convert::ToString(e), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		

	}
		 


	//BOTOn PARA BORRAR
	private: System::Void BborrarD_Click(System::Object^ sender, System::EventArgs^ e) {
	LRes->Text = "Respuesta";
	txtpath->Text = "";
	Lejecu->Text = "";
	}

	//Boton SUBIR ARCHIVP
	private: System::Void Barchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		Sarchivo->Filter = "Archivos separados por coma (csv) | *.csv";
		Sarchivo->FileName = "";
		// Colocarle el if no se lo voy a poner para meintras 
		if (Sarchivo->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			array<String^>^ ASubido = File::ReadAllLines(Sarchivo->FileName);

		}
		else
		{
			MessageBox::Show("Error no ingreso el archivo", " ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		txtpath->Text = Sarchivo->FileName;
}

	//Boton para iteracion
	private: System::Void BIterativa_Click(System::Object^ sender, System::EventArgs^ e) {	
		Stopwatch^ watch = gcnew Stopwatch();
	int acumulador = 0;
	try
	{
		watch->Start(); //Siempre antes de la ejecu
		array<String^>^ ASubido = File::ReadAllLines(txtpath->Text); // Text de path del archivo csv que es el que lee 
		int tamaño = 0;
		tamaño = ASubido->Length;

		for (size_t i = 0; i < tamaño; i++)
		{
			array<String^>^ subvadena = ASubido[i]->Split(',');
			for (size_t j = 0; j < subvadena->Length; j++)
			{
				if (PalabraPalindroma(subvadena[j]) == true)
				{
					acumulador++;
				}
			}
		}
		LRes->Text = "Se encuentran " + acumulador + " palabras palindromas";
		watch->Stop();
		Lejecu->Text = "Tiempo" + watch->ElapsedMilliseconds + "ms";
	}
	catch (Exception^ error)
	{
		MessageBox::Show("No subio ningun  archivo", Convert::ToString(error),MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
	

	}

	
};
}
