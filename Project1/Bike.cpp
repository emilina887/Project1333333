#include "Bike.h"

Bike::Bike() {}

Bike::Bike(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng, string chn, double FC, bool bst, bool bpl)
	: Vehicle(ct, nm, col, cap, pr, MxSp, CarrCap, wh, eng)
{
	this->chain = chn;
	this->fuelConsumption = FC;
	this->basket = bst;
	this->beepl = bpl;
}

void Bike::Print()
{
	Vehicle::Print();
	cout << "Chain: " << chain << endl;
	cout << "Basket: " << (basket ? "Yes" : "No") << endl;
	cout << "Beepl: " << (beepl ? "Yes" : "No") << endl;
}

void Bike::PrintMaxSpeed() const
{
	cout << "[Bike] Max Speed: " << getMaxSpeed() << " km/h" << endl;
}

void Bike::PrintFuelConsumption() const
{
	cout << "[Bike] Fuel Consumption: " << fuelConsumption << " L/100 km" << endl;
}

void Bike::PrintWheels() const
{
	cout << "[Bike] Wheels: " << getWheels() << endl;
}

void Bike::PrintPassengers() const
{
	cout << "[Bike] Passengers: " << getCapacity() << endl;
}

string Bike::getChain() const { return chain; }
void Bike::setChain(string chn) { chain = chn; }
bool Bike::getBasket() const { return basket; }
void Bike::setBasket(bool bst) { basket = bst; }
bool Bike::getBeepl() const { return beepl; }
void Bike::setBeepl(bool bpl) { beepl = bpl; }