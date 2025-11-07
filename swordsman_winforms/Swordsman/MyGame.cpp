#include "MyGame.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {
    Application::Run(gcnew Swordsman::MyGame);
    return 0;
}