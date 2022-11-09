#pragma once
class CAR
{
public:
	///
	///Properties
	/// 
    float KM;
	char color[10];
	char numOfCar[10];
	int numOfSeats;
	int amountOfTravel;


	///
	///Actions
	/// 
	void carDrive(float Km);
	void carStatus(char nOfCar[10], float Km, int nOfTravel);
	float avgKmPerTravel(float Km,int TravelAmount);

	///
	///Constructer
	/// 
	CAR(char nOfCar[]);

};

