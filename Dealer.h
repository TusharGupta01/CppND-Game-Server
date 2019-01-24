// Dealer.h 
// Created by Tushar Gupta 2019-01-24
// License MIT open source

#ifndef Dealer_h
#define Dealer_h

class Dealer
{	Dealer(const Dealer&) = delete;
	void operator=(const Dealer&) = delete;

public:
	~Dealer()
	{}
	Dealer()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
