#pragma once
#include "search.h"
class BreadthFirstSearch :
public Search
{
private:
	
	virtual bool match(string from, string to, int& time);

	virtual bool find(string from, MRTInfo& m);

	void resetSkip(MRTInfo);

public:
	BreadthFirstSearch(void);
	virtual ~BreadthFirstSearch(void);

	virtual void route();

	virtual void findroute(string from, string to);
};

