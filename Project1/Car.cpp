#include "Car.h"

Car::Car() {}

Car::Car(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string FT, string trnsm, double FV, double FC, int pdl, int drs, bool ac, bool ms)
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

void Car::Print()
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

void Car::PrintMaxSpeed() const
{
	cout << "[Car] Max Speed: " << getMaxSpeed() << " km/h" << endl;
}

void Car::PrintFuelConsumption() const
{
	cout << "[Car] Fuel Consumption: " << fuelConsumption << " L/100 km" << endl;
}

void Car::PrintWheels() const
{
	cout << "[Car] Wheels: " << getWheels() << endl;
}

void Car::PrintPassengers() const
{
	cout << "[Car] Passengers: " << getCapacity() << endl;
}

string Car::getFuelType() const { return FuelType; }
void Car::setFuelType(string FT) { FuelType = FT; }
string Car::getTransmission() const { return transmission; }
void Car::setTransmission(string trnsm) { transmission = trnsm; }
double Car::getFuelVolume() const { return FuelVolume; }
void Car::setFuelVolume(double FV) { FuelVolume = FV; }
int Car::getPedals() const { return pedals; }
void Car::setPedals(int pdl) { pedals = pdl; }
int Car::getDoors() const { return doors; }
void Car::setDoors(int drs) { doors = drs; }
bool Car::getAirConditioner() const { return airConditioner; }
void Car::setAirConditioner(bool ac) { airConditioner = ac; }
bool Car::getMusicSystem() const { return musicSystem; }
void Car::setMusicSystem(bool ms) { musicSystem = ms; }