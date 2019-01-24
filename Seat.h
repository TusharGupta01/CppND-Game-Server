// Seat.h 
// Created by Tushar Gupta 2019-01-24
// License MIT open source

#ifndef Seat_h
#define Seat_h

class Seat
{	Seat(const Seat&) = delete;
	void operator=(const Seat&) = delete;

public:
	~Seat()
	{}
	Seat()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
