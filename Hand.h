// Hand.h 
// Created by Tushar Gupta 2019-01-24
// License MIT open source

#ifndef Hand_h
#define Hand_h

class Hand
{	Hand(const Hand&) = delete;
	void operator=(const Hand&) = delete;

public:
	~Hand()
	{}
	Hand()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
