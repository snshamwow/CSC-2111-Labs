#pragma once
#include "Food.h"

class Pizza : public Food {
public:
	Pizza();
	Pizza(int, bool);
	void setHasExtraCheese(bool);
	bool getHasExtraCheese();
	virtual void displayIngredients();

private:
	bool hasExtraCheese;
};