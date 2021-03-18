#pragma once
#include <iostream>
#include <string>
#include "Instrument.h"

using namespace std;

class Harp : public Instrument
{
public:
	Harp();
	Harp(string, string, int);
	virtual ~Harp();
	void setNumberOfStrings(int);
	int getNumberOfStrings() const;
	virtual void play() const;

private:
	int numberOfStrings;
};