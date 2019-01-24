// Card.h 
// Created by Tushar Gupta 2019-01-24
// License MIT open source

#ifndef Card_h
#define Card_h

class Card
{	Card(const Card&) = delete;
	void operator=(const Card&) = delete;

public:
	~Card()
	{}
	Card()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
