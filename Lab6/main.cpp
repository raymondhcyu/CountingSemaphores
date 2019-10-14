//Owen Ren
//21373162

#include "Technicians.h"
#include 	"C:\RTExamples\rt.h"

int main() {

	

		Supervisor S1(1);
		FuelTech F1(1);
	
		S1.Resume();
		F1.Resume();

		S1.WaitForThread();
		F1.WaitForThread();


	return 0;
}