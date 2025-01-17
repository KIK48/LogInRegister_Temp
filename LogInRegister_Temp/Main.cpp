#include "Includes.h"

int main()
{
	Application::EnableVisualStyles(); //
	Application::SetCompatibleTextRenderingDefault(false); // 
	FinanceTool10::SignInForm login; // Things needed for the window form 
	FinanceTool10::RegisterForm regi;
	initialize_DB(MyStaticClass::connect); // If there is no database it creates one and a table too
	MyStaticClass::d.d1 = Continue;
	MyStaticClass::d.d2 = Login;



	
	while (true) {

		if (MyStaticClass::d.d1 == Continue) {
			if (MyStaticClass::d.d2 == Home) {
				login.ShowDialog();
				if (MyStaticClass::d.d1 == Continue) continue;
			}
			else if (MyStaticClass::d.d2 == Register) {
				regi.ShowDialog();
				if (MyStaticClass::d.d1 == Continue) continue;
			}
			else if (MyStaticClass::d.d2 == Login) {
				login.ShowDialog();
				if (MyStaticClass::d.d1 == Continue) continue;
				
			}
		}

		return 0;

	}

	return 0;
}