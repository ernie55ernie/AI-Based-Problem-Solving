// An AI-based search class.
#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

// MRT information
struct MRTInfo{
	string from;	// departure station
	string to;		// destination station
	int time;		// time between from and to
	bool skip;		// used in backtracking

	MRTInfo(){
		from = "";
		to = "";
		time = 0;
		skip = false;
	}

	MRTInfo(string f, string t, int ti){
		from = f;
		to = t;
		time = ti;
		skip = false;
	}
};

class Search
{
protected:

	// This vector holds the MRT informations.
	vector<MRTInfo> informations;

	// This stack is used for backtracking.
	stack<MRTInfo> btStack;

	// If there is a piece of MRT informations between from and to,
	// store the time of the piece of MRT informations in time.
	// Return true if the piece of MRT informations exists and, false otherwise.
	virtual bool match(string from, string to, int& time){return false;}

	// Given from, find any connection
	// Return true if a connection is found
	// and false otherwise.
	virtual bool find(string from, MRTInfo& m){return false;}

public:

	Search(void)
	{
	}

	virtual ~Search(void)
	{
	}

	// Put a piece of MRT informations into the database.
	void addInfo(string from, string to, int time){
		informations.push_back(MRTInfo(from, to, time));
		informations.push_back(MRTInfo(to, from, time));
	}

	// Show the route and total cost. 
	virtual void route(){};

	// Determine if there is a route between form and to.
	virtual void findroute(string from, string to){};

	// Return true if a route has been found.
	bool routefound(){
		return !btStack.empty();
	}
};

