#pragma once
#include <iostream>
#include <string>
#include "Instrument.h"

using namespace std;

class Tuba : public Instrument
{
public:
	Tuba();
	Tuba(string, string, bool);
	virtual ~Tuba();
	void setIsSousaphone(bool);
	bool getIsSousaphone() const;
	virtual void play() const;

private:
	bool isSousaphone;
};