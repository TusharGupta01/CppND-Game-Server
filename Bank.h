// Bank.h 
// Created by Tushar Gupta 2019-01-24
// License MIT open source

#ifndef Bank_h
#define Bank_h

class Bank
{	Bank(const Bank&) = delete;
	void operator=(const Bank&) = delete;

public:
	~Bank()
	{}
	Bank()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
