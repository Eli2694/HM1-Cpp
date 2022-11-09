#pragma once
class BALL
{
public:
	///
	/// Properties
	/// 
	char color[10];
	float weight;
	float size;

	///
	/// Actions
	/// 
	void bounce();
	void rolling(int num);
	void notMoving();
};


