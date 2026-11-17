#include "MiniCar.h"

MiniCar::MiniCar() {}

MiniCar::MiniCar(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string FT, string trnsm, double FV, double FC, int pdl, int drs, bool ac, bool ms)
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

void MiniCar::Print()
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

void MiniCar::PrintMaxSpeed() const
{
	cout << "[MiniCar] Max Speed: " << getMaxSpeed() << " km/h" << endl;
}

void MiniCar::PrintFuelConsumption() const
{
	cout << "[MiniCar] Fuel Consumption: " << fuelConsumption << " L/100 km" << endl;
}

void MiniCar::PrintWheels() const
{
	cout << "[MiniCar] Wheels: " << getWheels() << endl;
}

void MiniCar::PrintPassengers() const
{
	cout << "[MiniCar] Passengers: " << getCapacity() << endl;
}

string MiniCar::getFuelType() const { return FuelType; }
void MiniCar::setFuelType(string FT) { FuelType = FT; }
string MiniCar::getTransmission() const { return transmission; }
void MiniCar::setTransmission(string trnsm) { transmission = trnsm; }
double MiniCar::getFuelVolume() const { return FuelVolume; }
void MiniCar::setFuelVolume(double FV) { FuelVolume = FV; }
int MiniCar::getPedals() const { return pedals; }
void MiniCar::setPedals(int pdl) { pedals = pdl; }
int MiniCar::getDoors() const { return doors; }
void MiniCar::setDoors(int drs) { doors = drs; }
bool MiniCar::getAirConditioner() const { return airConditioner; }
void MiniCar::setAirConditioner(bool ac) { airConditioner = ac; }
bool MiniCar::getMusicSystem() const { return musicSystem; }
void MiniCar::setMusicSystem(bool ms) { musicSystem = ms; }