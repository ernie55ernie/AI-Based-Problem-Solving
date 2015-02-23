#pragma once
#include "search.h"
class OptimalSearch :
	public Search
{
private:

	// This stack holds the optimal solution.
	stack<MRTInfo> optimal;

	int minTime;
	
	virtual bool match(string from, string to, int& time);

	virtual bool find(string from, MRTInfo& m);

public:
	OptimalSearch(void);
	~OptimalSearch(void);

	virtual void route();

	virtual void findroute(string from, string to);

	void showOpt();
};

