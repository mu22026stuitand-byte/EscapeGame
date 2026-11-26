
#pragma once
#include"EscapeBase.h"
class Room1:
	public EscapeBase
{
private:

	char room1Text[6][51] = {
		{"目の前には扉と棚がある"},
		{ "鍵がかかっている" },
		{ "棚の中には鍵があった" },
		{"もう何もないようだ"},
		{ "" },
		{"鍵を使って扉が開いた"}
	};

	char room1AText[3][31] = {
		{"1.扉 2.棚"},
		{ "1.扉 2.棚 3.鍵" },
		{ "さしすせそ" },
	};

public:
	bool havekey = false;
public:
	void Strat();

	void Action(int x);

};
