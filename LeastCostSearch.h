#pragma once
#include "search.h"
class LeastCostSearch :
	public Search
{
private:
	
	virtual bool match(string from, string to, int& time);

	virtual bool find(string from, MRTInfo& m);

public:
	LeastCostSearch(void);
	~LeastCostSearch(void);

	virtual void route();

	virtual void findroute(string from, string to);
};

