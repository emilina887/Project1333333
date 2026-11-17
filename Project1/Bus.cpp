#include "Bus.h"

Bus::Bus() {}

Bus::Bus(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string FT, string trnsm, double FV, double FC, int pdl, int drs, bool ac, bool ms)
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
}

void Bus::Print()
{
	Vehicle::Print();
	cout << "Fuel Type: " << FuelType << endl;
	cout << "Transmission: " << transmission << endl;
	cout << "Fuel Volume: " << FuelVolume << endl;
	cout << "Pedals: " << pedals << endl;
	cout << "Doors: " << doors << endl;
	cout << "Air Conditioner: " << (airConditioner ? "Yes" : "No") << endl;
	cout << "Music System: " << (musicSystem ? "Yes" : "No") << endl;
}

void Bus::PrintMaxSpeed() const
{
	cout << "[Bus] Max Speed: " << getMaxSpeed() << " km/h" << endl;
}

void Bus::PrintFuelConsumption() const
{
	cout << "[Bus] Fuel Consumption: " << fuelConsumption << " L/100 km" << endl;
}

void Bus::PrintWheels() const
{
	cout << "[Bus] Wheels: " << getWheels() << endl;
}

void Bus::PrintPassengers() const
{
	cout << "[Bus] Passengers: " << getCapacity() << endl;
}

string Bus::getFuelType() const { return FuelType; }
void Bus::setFuelType(string FT) { FuelType = FT; }
string Bus::getTransmission() const { return transmission; }
void Bus::setTransmission(string trnsm) { transmission = trnsm; }
double Bus::getFuelVolume() const { return FuelVolume; }
void Bus::setFuelVolume(double FV) { FuelVolume = FV; }
int Bus::getPedals() const { return pedals; }
void Bus::setPedals(int pdl) { pedals = pdl; }
int Bus::getDoors() const { return doors; }
void Bus::setDoors(int drs) { doors = drs; }
bool Bus::getAirConditioner() const { return airConditioner; }
void Bus::setAirConditioner(bool ac) { airConditioner = ac; }
bool Bus::getMusicSystem() const { return musicSystem; }
void Bus::setMusicSystem(bool ms) { musicSystem = ms; }