
//Owen Ren
//21373162



#include 	"C:\RTExamples\rt.h"


class Supervisor : public ActiveClass {

public: 
	Supervisor(int Teamnum);
private:
	int main(void);
	
	int TeamNum = 0;

};


class FuelTech : public ActiveClass {
public:
	FuelTech(int Teamnum);
private:
	int main(void);

	int TeamNum = 0;

};

class RearJackTech : public ActiveClass {
public:
	RearJackTech(int Teamnum);
private:
	int main(void);

	int TeamNum = 0;

};

class RLeftNutTech : public ActiveClass {
public:
	RLeftNutTech(int Teamnum);
private:
	int main(void);

	int TeamNum = 0;

};

class RWheelRemovalTech : public ActiveClass {
public:
	RWheelRemovalTech(int Teamnum);
private:
	int main(void);

	int TeamNum = 0;

};

class RWheelRefitTech : public ActiveClass {
public:
	RWheelRefitTech(int Teamnum);
private:
	int main(void);

	int TeamNum = 0;

};