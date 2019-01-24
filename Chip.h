// Chip.h 
// Created by Tushar Gupta 2019-01-24
// License MIT open source

#ifndef Chip_h
#define Chip_h

class Chip
{	Chip(const Chip&) = delete;
	void operator=(const Chip&) = delete;

public:
	~Chip()
	{}
	Chip()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
