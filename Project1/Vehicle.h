#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
	string category;
	string name;
	string color;
	string capacity;
	double price;
	double MaxSpeed;
	double CarryingCapacity;
	int wheels;
	bool engine;

public:
	Vehicle();
	Vehicle(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng);
	virtual ~Vehicle();

	virtual void Print();

	virtual void PrintMaxSpeed() const = 0;
	virtual void PrintFuelConsumption() const = 0;
	virtual void PrintWheels() const = 0;
	virtual void PrintPassengers() const = 0;

	string getCategory() const;
	void setCategory(string ct);
	string getName() const;
	void setName(string nm);
	string getColor() const;
	void setColor(string col);
	string getCapacity() const;
	void setCapacity(string cap);
	double getPrice() const;
	void setPrice(double pr);
	double getMaxSpeed() const;
	void setMaxSpeed(double MxSp);
	double getCarryingCapacity() const;
	void setCarryingCapacity(double CarrCap);
	int getWheels() const;
	void setWheels(int wh);
	bool getEngine() const;
	void setEngine(bool eng);
};