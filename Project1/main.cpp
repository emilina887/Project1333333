#include "Vehicle.h"
#include "Scooter.h"
#include "Bike.h"
#include "MiniCar.h"
#include "Car.h"
#include "Bus.h"
#include "Truck.h"

int main()
{
	int choice;
	cout << "Choose transport type:\n"
		<< "1 - Scooter\n"
		<< "2 - Bike\n"
		<< "3 - MiniCar\n"
		<< "4 - Car\n"
		<< "5 - Bus\n"
		<< "6 - Truck\n"
		<< "Your choice: ";
	cin >> choice;

	Vehicle* vehicle = nullptr;

	switch (choice)
	{
	case 1:
		vehicle = new Scooter("Scooter", "Honda Activa", "Black", "2 passengers", 60000, 80, 150, 2, true, "Handlebar", 5, 2.5, true);
		break;
	case 2:
		vehicle = new Bike("Bike", "Hero Splendor", "Red", "1 passenger", 70000, 100, 200, 2, true, "Chain", 1.8, true, true);
		break;
	case 3:
		vehicle = new MiniCar("MiniCar", "Maruti Alto", "White", "4 passengers", 40000, 150, 300, 4, true, "Petrol", "Manual", 35, 5.2, 2, 4, true, true);
		break;
	case 4:
		vehicle = new Car("Car", "Toyota Camry", "Silver", "5 passengers", 30000, 180, 500, 4, true, "Petrol", "Automatic", 50, 8.5, 2, 4, true, true);
		break;
	case 5:
		vehicle = new Bus("Bus", "Volvo B9R", "Blue", "50 passengers", 100000, 120, 10000, 6, true, "Diesel", "Manual", 200, 26.0, 3, 2, true, true);
		break;
	case 6:
		vehicle = new Truck("Truck", "Tata Signa", "White", "2 passengers", 150000, 100, 20000, 6, true, "Diesel", "Manual", 300, 34.0, 3, 2, true, true, true, true);
		break;
	default:
		cout << "Invalid choice!" << endl;
		return 1;
	}

	cout << "\n--- Info ---\n";
	vehicle->Print();

	cout << "\n--- Specific Characteristics ---\n";
	vehicle->PrintMaxSpeed();
	vehicle->PrintFuelConsumption();
	vehicle->PrintWheels();
	vehicle->PrintPassengers();

	delete vehicle;
	return 0;
}