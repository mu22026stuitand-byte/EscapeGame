#include"ShowGraphic.h"
#include<iostream>
using namespace std;

void ShowGraphic::ShowText(const char* text)
{
	cout << text;
	cout << endl;
}

void ShowGraphic::ShowAction(const char* text)
{
	cout << text<<flush;
	cout << endl;
}