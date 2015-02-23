#pragma once
#include "search.h"
class HillClimbingSearch :
	public Search
{
private:
	
	virtual bool match(string from, string to, int& time);

	virtual bool find(string from, MRTInfo& m);

public:
	HillClimbingSearch(void);
	virtual ~HillClimbingSearch(void);

	virtual void route();

	virtual void findroute(string from, string to);
};

