#pragma once
class Food {
public:
	Food();
	Food(int);
	virtual void displayIngredients() = 0;
	void setQuantity(int);
	int getQuantity();

private:
	int quantity;
};