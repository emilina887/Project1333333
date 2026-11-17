#pragma once
#include "Vehicle.h"

class Bike : public Vehicle
{
	string chain;
	double fuelConsumption;
	bool basket;
	bool beepl;

public:
	Bike();
	Bike(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string chn, double FC, bool bst, bool bpl);

	void Print();
	void PrintMaxSpeed() const;
	void PrintFuelConsumption() const;
	void PrintWheels() const;
	void PrintPassengers() const;

	string getChain() const;
	void setChain(string chn);
	bool getBasket() const;
	void setBasket(bool bst);
	bool getBeepl() const;
	void setBeepl(bool bpl);
};