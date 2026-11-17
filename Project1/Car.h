#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
	string FuelType;
	string transmission;
	double FuelVolume;
	double fuelConsumption;
	int pedals;
	int doors;
	bool airConditioner;
	bool musicSystem;

public:
	Car();
	Car(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string FT, string trnsm, double FV, double FC, int pdl, int drs, bool ac, bool ms);

	void Print();
	void PrintMaxSpeed() const;
	void PrintFuelConsumption() const;
	void PrintWheels() const;
	void PrintPassengers() const;

	string getFuelType() const;
	void setFuelType(string FT);
	string getTransmission() const;
	void setTransmission(string trnsm);
	double getFuelVolume() const;
	void setFuelVolume(double FV);
	int getPedals() const;
	void setPedals(int pdl);
	int getDoors() const;
	void setDoors(int drs);
	bool getAirConditioner() const;
	void setAirConditioner(bool ac);
	bool getMusicSystem() const;
	void setMusicSystem(bool ms);
};