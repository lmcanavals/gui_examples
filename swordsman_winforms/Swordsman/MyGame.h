#pragma once

#include "swordsmaster.h"

namespace Swordsman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyGame
	/// </summary>
	public ref class MyGame : public System::Windows::Forms::Form
	{
	public:
		MyGame(void)
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
		~MyGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ elTimer;
	private: System::Windows::Forms::Timer^ elOtroTimer;
	private: System::Windows::Forms::Timer^ elUltimoTimer;

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
			this->elOtroTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->elUltimoTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// elTimer
			// 
			this->elTimer->Enabled = true;
			this->elTimer->Interval = 150;
			this->elTimer->Tick += gcnew System::EventHandler(this, &MyGame::elTimer_Tick);
			// 
			// elOtroTimer
			// 
			this->elOtroTimer->Enabled = true;
			this->elOtroTimer->Interval = 2000;
			this->elOtroTimer->Tick += gcnew System::EventHandler(this, &MyGame::elOtroTimer_Tick);
			// 
			// elUltimoTimer
			// 
			this->elUltimoTimer->Interval = 5000;
			// 
			// MyGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(743, 621);
			this->Name = L"MyGame";
			this->Text = L"MyGame";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyGame::MyGame_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyGame::MyGame_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Swordsmaster* zoro;
		array<Bitmap^>^ sheets;
		Graphics^ g;

	private: System::Void MyGame_Load(System::Object^ sender, System::EventArgs^ e) {
		zoro = new Swordsmaster(ClientSize.Width, ClientSize.Height);
		sheets = gcnew array<Bitmap^>(8);
		sheets[0] = gcnew Bitmap("0_Swordsman_lvl3_Idle_with_shadow.png");
		sheets[1] = gcnew Bitmap("1_Swordsman_lvl3_Walk_with_shadow.png");
		sheets[2] = gcnew Bitmap("2_Swordsman_lvl3_Run_with_shadow.png");
		sheets[3] = gcnew Bitmap("3_Swordsman_lvl3_attack_with_shadow.png");
		sheets[4] = gcnew Bitmap("4_Swordsman_lvl3_Walk_Attack_with_shadow.png");
		sheets[5] = gcnew Bitmap("5_Swordsman_lvl3_Run_Attack_with_shadow.png");
		sheets[6] = gcnew Bitmap("6_Swordsman_lvl3_Hurt_with_shadow.png");
		sheets[7] = gcnew Bitmap("7_Swordsman_lvl3_Death_with_shadow.png");
		g = CreateGraphics();
	}
	private: System::Void MyGame_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		delete zoro;
	}
	private: System::Void elTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		zoro->update();
		int sidx = zoro->status;
		int dir = zoro->dir;
		int i = zoro->idx;
		int x = zoro->x;
		int y = zoro->y;
		int w = zoro->width;
		int h = zoro->height;
		g->Clear(Color::White);
		g->DrawImage(sheets[sidx], Rectangle(x, y, w*3, h*3), i * w, dir * h, w, h, GraphicsUnit::Pixel);
	}
	private: System::Void elOtroTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		zoro->updateState((zoro->status + 1) % 8);
		zoro->updateDir((Swordsmaster::Direction)((zoro->status + 1) % 4));
	}
};
}
