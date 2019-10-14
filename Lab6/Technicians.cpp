//Owen Ren
//21373162

#include "Technicians.h"

Supervisor::Supervisor(int Teamnum) :TeamNum(Teamnum) {};

//Semaphore Val = 0 -> Wait (Blocked)
//Semaphore Val = 1 -> Signal (Can go)

int Supervisor::main(void) {

	//Supervisor is always the Producer 

	//Producer / Consumer Semaphore Between Supervisor and Fuel Tech
	//Fuel Tech is Consumer
	CSemaphore P_Supervisor_FuelTech("PS1", 0, 1);
	CSemaphore C_Supervisor_FuelTech("CS1", 1, 1);

	//If = 1, then it means that Tech is ready
	cout << "C_Supervisor_FuelTech Value:" <<C_Supervisor_FuelTech.Read() << "\n";

	//Later, there will be a flag to determine when vehicle is in to refuel		cout << "Ready to Refuel" << TeamNum << "\n";
	C_Supervisor_FuelTech.Wait(); //Waiting to refuel
	cout << "Waiting to refuel vehicle from Supervisor Class" << TeamNum <<"\n";
	P_Supervisor_FuelTech.Signal(); //Signal Fuel Tech to refuel
	cout << "C_Supervisor_FuelTech Value:" << C_Supervisor_FuelTech.Read() << "\n";

	return 0;

};

FuelTech::FuelTech(int Teamnum) :TeamNum(Teamnum) {};

int FuelTech::main(void) {

	CSemaphore P_Supervisor_FuelTech("PS1", 0, 1);
	CSemaphore C_Supervisor_FuelTech("CS1", 1, 1);


		P_Supervisor_FuelTech.Wait(); //Telling supervisor to wait
		cout << "Refueling Vehicle from Fuel Tech Class" << TeamNum << "\n";
		Sleep(5000); //Refueling vehicle
		cout << "Finished refueling from Fuel Tech Class" << TeamNum << "\n";
		C_Supervisor_FuelTech.Signal(); //Signal that refuelling has finished


	return 0;
};

RearJackTech::RearJackTech(int Teamnum) :TeamNum(Teamnum) {};

int RearJackTech::main(void) {



};

RLNutTech::RLNutTech(int Teamnum) :TeamNum(Teamnum) {};

int RLNutTech::main(void) {


};


RLWheelRemovalTech::RWheelRemovalTech(int Teamnum) :TeamNum(Teamnum) {};

int RW

RWheelRefitTech::RWheelRefitTech(int Teamnum) :TeamNum(Teamnum) {};