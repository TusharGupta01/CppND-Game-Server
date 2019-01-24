// Table.h 
// Created by Tushar Gupta 2019-01-24
// License MIT open source

#ifndef Table_h
#define Table_h

class Table
{	Table(const Table&) = delete;
	void operator=(const Table&) = delete;

public:
	~Table()
	{}
	Table()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
