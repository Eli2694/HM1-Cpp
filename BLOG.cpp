#include "BLOG.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

#define File_Name "Blog.txt"

void BLOG::Blog(char nameOf[100])
{
	strcpy_s(name, nameOf);
	
	
}
int BLOG::SaveInFile(char* text)
{
	FILE* f = fopen(File_Name, "a");
	if (f == NULL)
	{
		//error
		return NULL;
	}
	int letter = 1;
	int numOfLetters = 0;

	
	while (letter != NULL)
	{
		letter = fputc(*text, f);
		if (letter == NULL)
		{
			break;
		}
		text++;
		numOfLetters++;
	}

	return numOfLetters;
		
	fclose(f);

}
int BLOG::LoadFromFile(int numOfLetters)
{
	FILE* f = fopen(File_Name, "r");
	if (f == NULL)
	{
		//error
		return NULL;
	}
	char letter = ' ';
	for (int i = 0; i < numOfLetters ; i++)
	{
		letter = fgetc(f);
		printf("%c", letter);
	}

	fclose(f);

}

void BLOG::AddLine(char* txt)
{
	strcat(text, "\n");
	strcat(text, txt);
	lineCount++;
	
}

void  BLOG::Print(char name[100], char* text, int lineCount)
{
	printf("Blog Name: %s\nText: %s\nLine count: %d\n", name, text, lineCount);
}

BLOG::BLOG(char* txt , int Lines , int BlogSize)
{
	text = (char*)malloc(BlogSize);
	text[0] = '\0';
	text = txt;
	lineCount = Lines;
}


int main()
{
	
	char text[100] = "hello my name is eli";
	BLOG First(text, 1,1000);

	char blog_name[] = "Sport";
	First.Blog(blog_name);
	char text2[100] = "I live in Israel";
	int numberOfChar;
	numberOfChar = First.SaveInFile(First.text);
	First.Print(First.name, First.text, First.lineCount);
	First.AddLine(text2);
	numberOfChar = First.SaveInFile(First.text);
	First.Print(First.name, First.text, First.lineCount);
	First.LoadFromFile(numberOfChar);


	

	return 0;
}