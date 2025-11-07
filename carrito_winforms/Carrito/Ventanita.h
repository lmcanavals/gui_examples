#pragma once

#include "graphicsmanager.h"

namespace Carrito {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ventanita
	/// </summary>
	public ref class Ventanita : public System::Windows::Forms::Form
	{
	public:
		Ventanita(void)
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
		~Ventanita()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ elTimer;
	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->elTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// elTimer
			// 
			this->elTimer->Enabled = true;
			this->elTimer->Tick += gcnew System::EventHandler(this, &Ventanita::elTimer_Tick);
			// 
			// Ventanita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"Ventanita";
			this->Text = L"Ventanita";
			this->Load += gcnew System::EventHandler(this, &Ventanita::Ventanita_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Ventanita::Ventanita_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private:
		Car* car;
		GraphicsManager^ gm;

	private: System::Void Ventanita_Load(System::Object^ sender, System::EventArgs^ e) {
		car = new Car(10, 50, 75, 40, 0xffFFAF5F);
		gm = gcnew GraphicsManager(CreateGraphics());
	}
	private: System::Void Ventanita_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::W:
			car->move(0, -5, ClientSize.Width, ClientSize.Height);
			break;
		case Keys::A:
			car->move(-5, 0, ClientSize.Width, ClientSize.Height);
			break;
		case Keys::D:
			car->move(5, 0, ClientSize.Width, ClientSize.Height);
			break;
		case Keys::S:
			car->move(0, 5, ClientSize.Width, ClientSize.Height);
			break;
		}
	}
	private: System::Void elTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		gm->drawCar(car);
	}
	};
}
