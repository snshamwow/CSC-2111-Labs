#pragma once
#include <iostream>
#include <string>

using namespace std;

class Instrument
{
public:
	Instrument();
	Instrument(string, string);
	virtual ~Instrument();
	void setBrand(string);
	void setSound(string);
	string getBrand() const;
	string getSound() const;
	virtual void play() const = 0;

private:
	string brand;
	string sound;
};