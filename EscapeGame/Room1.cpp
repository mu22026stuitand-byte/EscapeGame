#include"Room1.h"
#include<iostream>
using namespace std;
void Room1::Strat()
{
	ShowText(room1Text[0]);
	ShowAction(room1AText[0]);
	Action(SetAction());
}
//選択時の処理
void Room1::Action(int x)
{
	if (havekey)
	{
		switch (x) {
		case 1:

			return;
		case 2:

			return;
		case 3:

			return;
		}
	}
	else
	{
		switch (x) {
		case 1:

			return;
		case 2:

			return;
		}
	}
}

