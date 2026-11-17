#pragma once
#include "Vehicle.h"

class Scooter : public Vehicle
{
	string handle;
	double FuelVolume;
	double fuelConsumption;
	bool trunk;

public:
	Scooter();
	Scooter(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string hd, double FV, double FC, bool tr);

	void Print();
	void PrintMaxSpeed() const;
	void PrintFuelConsumption() const;
	void PrintWheels() const;
	void PrintPassengers() const;

	string getHandle() const;
	void setHandle(string hd);
	double getFuelVolume() const;
	void setFuelVolume(double FV);
	bool getTrunk() const;
	void setTrunk(bool tr);
};