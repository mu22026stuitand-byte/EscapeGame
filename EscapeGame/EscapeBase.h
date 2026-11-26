#pragma once
#include"ShowGraphic.h"

class EscapeBase:
	public ShowGraphic
{
public:
	

	int  SetAction();

	virtual void Action(int x)=0;

};
