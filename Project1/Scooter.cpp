#include "Scooter.h"

Scooter::Scooter() {}

Scooter::Scooter(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string hd, double FV, double FC, bool tr)
	: Vehicle(ct, nm, col, cap, pr, MxSp, CarrCap, wh, eng)
{
	this->handle = hd;
	this->FuelVolume = FV;
	this->fuelConsumption = FC;
	this->trunk = tr;
}

void Scooter::Print()
{
	Vehicle::Print();
	cout << "Handle: " << handle << endl;
	cout << "Fuel Volume: " << FuelVolume << endl;
	cout << "Trunk: " << (trunk ? "Yes" : "No") << endl;
}

void Scooter::PrintMaxSpeed() const
{
	cout << "[Scooter] Max Speed: " << getMaxSpeed() << " km/h" << endl;
}

void Scooter::PrintFuelConsumption() const
{
	cout << "[Scooter] Fuel Consumption: " << fuelConsumption << " L/100 km" << endl;
}

void Scooter::PrintWheels() const
{
	cout << "[Scooter] Wheels: " << getWheels() << endl;
}

void Scooter::PrintPassengers() const
{
	cout << "[Scooter] Passengers: " << getCapacity() << endl;
}

string Scooter::getHandle() const { return handle; }
void Scooter::setHandle(string hd) { handle = hd; }
double Scooter::getFuelVolume() const { return FuelVolume; }
void Scooter::setFuelVolume(double FV) { FuelVolume = FV; }
bool Scooter::getTrunk() const { return trunk; }
void Scooter::setTrunk(bool tr) { trunk = tr; }