#pragma once
class Dog
{
public:
	/// <summary>
	/// Properties
	/// </summary>
	char name[100];
	int age;
	int weight;

	/// <summary>
	/// Actions
	/// </summary>

	void Barking(int count);
	void Eating(int gram);
	void Playing();
	void Sleeping(int minutes);

	/// <summary>
	/// constructor
	/// </summary>
	/// <param name="aWeight"></param>
	/// <param name="aName"></param>
	Dog(int aWeight, char aName[10]);
};

