#pragma once
#include "Action.h"
class Exit :
	public Action
{
public:
	Exit::Exit(ApplicationManager* pApp);
	~Exit();

	virtual void ReadActionParameters();
	virtual void Execute();
};

