#include "BALL.h"
#include <iostream>
#include <string.h>

void BALL::bounce()
{
	weight -= 0.05;
}

void BALL::rolling(int num)
{
	if (num == 1)
	{
		strcpy_s(color, "Brown");
	}
	else if (num == 2)
	{
		strcpy_s(color, "Blue");
	}
	else
	{
		strcpy_s(color, "white");

	}
}

void BALL::notMoving()
{
	strcpy_s(color, "white");
}

int main_ball()
{
	BALL Football;
	BALL Golf;

	strcpy_s(Football.color, "Blue");
	Football.size = 22; // cm
	Football.weight = 450; // gram

	Football.bounce();
	Football.rolling(1);
	Football.notMoving();

	strcpy_s(Golf.color, "White");
	Golf.size = 4.5; // cm
	Golf.weight = 46; //gram

	return 0;
}