#include "CAR.h"
#include <iostream>
#include <string.h>

CAR::CAR(char nOfCar[])
{
	strcpy_s(numOfCar, nOfCar);
}

void CAR::carDrive(float Km)
{
	KM += Km;
	amountOfTravel += 1;
}
void CAR::carStatus(char nOfCar[10], float Km, int nOfTravel)
{
	float avgKmPerRide = avgKmPerTravel(Km, nOfTravel);
	printf("Car number: %s\n", nOfCar);
	//printf("Car name: %s\n", nameOfCar);
	printf("KM: %f\n", Km);
	printf("Amount of travel: %d\n", nOfTravel);
	printf("Avg Km Per Drive: %f\n", avgKmPerRide);
}
float CAR::avgKmPerTravel(float Km, int TravelAmount)
{
	return Km / TravelAmount;
}

int main_Car()
{
	char numOfHonda[] = "35678923";
	char numOfMercedes[] = "46789";
	CAR Honda(numOfHonda);
	CAR Mercedes(numOfMercedes);

	Honda.KM = 50000;
	Honda.numOfSeats = 5;
	Honda.amountOfTravel = 200;
	strcpy_s(Honda.color, "Silver");
	
	Mercedes.KM = 152000;
	Mercedes.numOfSeats = 2;
	Mercedes.amountOfTravel = 650;
	strcpy_s(Mercedes.color, "Black");

	Mercedes.carDrive(10000);
	Mercedes.carDrive(5000);
	Mercedes.carDrive(15000);
	float avgMercedes = Mercedes.avgKmPerTravel(Mercedes.KM, Mercedes.amountOfTravel);
	Mercedes.carStatus(Mercedes.numOfCar, Mercedes.KM, Mercedes.amountOfTravel);


	return 0;
}