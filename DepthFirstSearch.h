#pragma once
#include "search.h"
class DepthFirstSearch :
public Search
{
private:
	
	virtual bool match(string from, string to, int& time);

	virtual bool find(string from, MRTInfo& m);

public:
	DepthFirstSearch(void);
	virtual ~DepthFirstSearch(void);

	virtual void route();

	virtual void findroute(string from, string to);
};

