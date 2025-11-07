#pragma once

namespace Figuras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Button^ dibujar;


	private: System::Windows::Forms::ComboBox^ figura;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ posY;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ posX;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ elipseArea;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ elipseRadio;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ recLado2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ recLado1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ recArea;

	private: System::Windows::Forms::Label^ label10;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dibujar = (gcnew System::Windows::Forms::Button());
			this->figura = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->posX = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->posY = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->elipseRadio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->elipseArea = (gcnew System::Windows::Forms::Label());
			this->recLado2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->recLado1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->recArea = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dibujar);
			this->groupBox1->Controls->Add(this->figura);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(612, 56);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// dibujar
			// 
			this->dibujar->Location = System::Drawing::Point(204, 19);
			this->dibujar->Name = L"dibujar";
			this->dibujar->Size = System::Drawing::Size(402, 23);
			this->dibujar->TabIndex = 2;
			this->dibujar->Text = L"Dibujar";
			this->dibujar->UseVisualStyleBackColor = true;
			this->dibujar->Click += gcnew System::EventHandler(this, &MainWindow::dibujar_Click);
			// 
			// figura
			// 
			this->figura->FormattingEnabled = true;
			this->figura->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Elipse", L"Rectángulo" });
			this->figura->Location = System::Drawing::Point(77, 19);
			this->figura->Name = L"figura";
			this->figura->Size = System::Drawing::Size(121, 21);
			this->figura->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elegir figura:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->posY);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->posX);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(12, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Posición inicial";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->elipseArea);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->elipseRadio);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(218, 74);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 100);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Elipse";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->recArea);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->recLado2);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->recLado1);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(424, 74);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 100);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Rectángulo";
			// 
			// panel
			// 
			this->panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel->Location = System::Drawing::Point(12, 180);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(612, 378);
			this->panel->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Posición en X:";
			// 
			// posX
			// 
			this->posX->Location = System::Drawing::Point(87, 19);
			this->posX->Name = L"posX";
			this->posX->Size = System::Drawing::Size(100, 20);
			this->posX->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Posición en Y:";
			// 
			// posY
			// 
			this->posY->Location = System::Drawing::Point(87, 45);
			this->posY->Name = L"posY";
			this->posY->Size = System::Drawing::Size(100, 20);
			this->posY->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Radio:";
			// 
			// elipseRadio
			// 
			this->elipseRadio->Location = System::Drawing::Point(50, 19);
			this->elipseRadio->Name = L"elipseRadio";
			this->elipseRadio->Size = System::Drawing::Size(100, 20);
			this->elipseRadio->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Área:";
			// 
			// elipseArea
			// 
			this->elipseArea->AutoSize = true;
			this->elipseArea->Location = System::Drawing::Point(47, 48);
			this->elipseArea->Name = L"elipseArea";
			this->elipseArea->Size = System::Drawing::Size(91, 13);
			this->elipseArea->TabIndex = 3;
			this->elipseArea->Text = L"Mostrar área aquí";
			// 
			// recLado2
			// 
			this->recLado2->Location = System::Drawing::Point(55, 45);
			this->recLado2->Name = L"recLado2";
			this->recLado2->Size = System::Drawing::Size(132, 20);
			this->recLado2->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Lado 2:";
			// 
			// recLado1
			// 
			this->recLado1->Location = System::Drawing::Point(55, 19);
			this->recLado1->Name = L"recLado1";
			this->recLado1->Size = System::Drawing::Size(132, 20);
			this->recLado1->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 22);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Lado 1:";
			// 
			// recArea
			// 
			this->recArea->AutoSize = true;
			this->recArea->Location = System::Drawing::Point(47, 71);
			this->recArea->Name = L"recArea";
			this->recArea->Size = System::Drawing::Size(91, 13);
			this->recArea->TabIndex = 9;
			this->recArea->Text = L"Mostrar área aquí";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Área:";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 570);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void dibujar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (figura->SelectedIndex != -1) {
		if (posX->Text->Trim() == "" || posY->Text->Trim() == "") {
			MessageBox::Show("Escriba las posiciones");
			return;
		}
		if (figura->SelectedIndex == 0) {
			if (elipseRadio->Text->Trim() == "") {
				MessageBox::Show("Escriba el radio");
				return;
			}
		}
		if (figura->SelectedIndex == 1) {
			if (recLado1->Text->Trim() == "" || recLado2->Text->Trim() == "") {
				MessageBox::Show("Escriba los lados del rectangulo");
				return;
			}
		}
	} else {
		MessageBox::Show("Seleccione una figura ");
	}
}
};
}
