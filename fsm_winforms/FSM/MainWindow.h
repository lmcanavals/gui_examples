#pragma once

#include "graph_manager.h"

namespace FSM_namespace {

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
	private: System::Windows::Forms::Timer^ elTimer;
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
			this->elTimer->Tick += gcnew System::EventHandler(this, &MainWindow::elTimer_Tick);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1558, 724);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::MainWindow_KeyPress);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		GraphicsMan^ gm;
		Game* game;
		BufferedGraphics^ buffer;
		Graphics^ g;

	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		g = CreateGraphics();
		auto bgc = BufferedGraphicsManager::Current;
		buffer = bgc->Allocate(g, ClientRectangle);
		gm = gcnew GraphicsMan(buffer->Graphics);
		game = new Game(ClientRectangle.Width, ClientRectangle.Height);
	}
	private: System::Void elTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		game->updateAll();
		gm->drawGame(game);
		buffer->Render(g);
	}
	private: System::Void MainWindow_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		game->handleInput(e->KeyChar);
	}
	};
}
