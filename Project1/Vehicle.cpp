#include "Vehicle.h"

Vehicle::Vehicle() {}

Vehicle::Vehicle(string ct, string nm, string col, string cap, double pr, double MxSp, double CarrCap, int wh, bool eng)
{
	this->category = ct;
	this->name = nm;
	this->color = col;
	this->capacity = cap;
	this->price = pr;
	this->MaxSpeed = MxSp;
	this->CarryingCapacity = CarrCap;
	this->wheels = wh;
	this->engine = eng;
}

Vehicle::~Vehicle() {}

void Vehicle::Print()
{
	cout << "Category: " << category << endl;
	cout << "Name: " << name << endl;
	cout << "Color: " << color << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Price: " << price << endl;
	cout << "Max Speed: " << MaxSpeed << endl;
	cout << "Carrying Capacity: " << CarryingCapacity << endl;
	cout << "Wheels: " << wheels << endl;
	cout << "Engine: " << (engine ? "Yes" : "No") << endl;
}

string Vehicle::getCategory() const { return category; }
void Vehicle::setCategory(string ct) { category = ct; }
string Vehicle::getName() const { return name; }
void Vehicle::setName(string nm) { name = nm; }
string Vehicle::getColor() const { return color; }
void Vehicle::setColor(string col) { color = col; }
string Vehicle::getCapacity() const { return capacity; }
void Vehicle::setCapacity(string cap) { capacity = cap; }
double Vehicle::getPrice() const { return price; }
void Vehicle::setPrice(double pr) { price = pr; }
double Vehicle::getMaxSpeed() const { return MaxSpeed; }
void Vehicle::setMaxSpeed(double MxSp) { MaxSpeed = MxSp; }
double Vehicle::getCarryingCapacity() const { return CarryingCapacity; }
void Vehicle::setCarryingCapacity(double CarrCap) { CarryingCapacity = CarrCap; }
int Vehicle::getWheels() const { return wheels; }
void Vehicle::setWheels(int wh) { wheels = wh; }
bool Vehicle::getEngine() const { return engine; }
void Vehicle::setEngine(bool eng) { engine = eng; }