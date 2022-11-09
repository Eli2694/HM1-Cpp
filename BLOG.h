#pragma once
class BLOG
{
public:
	///
	/// Properties
	/// 
	
	char name[100];
	char *text;
	int lineCount;

	///
	/// Actions
	/// 
	
	void Blog(char nameOf[100]);
	int SaveInFile(char* text);
	int LoadFromFile(int numOfLetters);
	void AddLine(char* txt);
	void Print(char name[100], char* text, int lineCount);

	///
	/// constractor
	/// 

	BLOG(char* txt, int Lines, int BlogSize);
};

