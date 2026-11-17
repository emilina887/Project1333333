#include "Truck.h"

Truck::Truck() {}

Truck::Truck(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string FT, string trnsm, double FV, double FC, int pdl, int drs, bool ac, bool ms, bool frg, bool bd)
	: Vehicle(ct, nm, col, cap, pr, MxSp, CarrCap, wh, eng)
{
	this->FuelType = FT;
	this->transmission = trnsm;
	this->FuelVolume = FV;
	this->fuelConsumption = FC;
	this->pedals = pdl;
	this->doors = drs;
	this->airConditioner = ac;
	this->musicSystem = ms;
	this->fridge = frg;
	this->bed = bd;
}

void Truck::Print()
{
	Vehicle::Print();
	cout << "Fuel Type: " << FuelType << endl;
	cout << "Transmission: " << transmission << endl;
	cout << "Fuel Volume: " << FuelVolume << endl;
	cout << "Pedals: " << pedals << endl;
	cout << "Doors: " << doors << endl;
	cout << "Air Conditioner: " << (airConditioner ? "Yes" : "No") << endl;
	cout << "Music System: " << (musicSystem ? "Yes" : "No") << endl;
	cout << "Fridge: " << (fridge ? "Yes" : "No") << endl;
	cout << "Bed: " << (bed ? "Yes" : "No") << endl;
}

void Truck::PrintMaxSpeed() const
{
	cout << "[Truck] Max Speed: " << getMaxSpeed() << " km/h" << endl;
}

void Truck::PrintFuelConsumption() const
{
	cout << "[Truck] Fuel Consumption: " << fuelConsumption << " L/100 km" << endl;
}

void Truck::PrintWheels() const
{
	cout << "[Truck] Wheels: " << getWheels() << endl;
}

void Truck::PrintPassengers() const
{
	cout << "[Truck] Passengers: " << getCapacity() << endl;
}

string Truck::getFuelType() const { return FuelType; }
void Truck::setFuelType(string FT) { FuelType = FT; }
string Truck::getTransmission() const { return transmission; }
void Truck::setTransmission(string trnsm) { transmission = trnsm; }
double Truck::getFuelVolume() const { return FuelVolume; }
void Truck::setFuelVolume(double FV) { FuelVolume = FV; }
int Truck::getPedals() const { return pedals; }
void Truck::setPedals(int pdl) { pedals = pdl; }
int Truck::getDoors() const { return doors; }
void Truck::setDoors(int drs) { doors = drs; }
bool Truck::getAirConditioner() const { return airConditioner; }
void Truck::setAirConditioner(bool ac) { airConditioner = ac; }
bool Truck::getMusicSystem() const { return musicSystem; }
void Truck::setMusicSystem(bool ms) { musicSystem = ms; }
bool Truck::getFridge() const { return fridge; }
void Truck::setFridge(bool frg) { fridge = frg; }
bool Truck::getBed() const { return bed; }
void Truck::setBed(bool bd) { bed = bd; }