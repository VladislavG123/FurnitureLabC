#pragma once
#include<iostream>

class FurniturePart
{
private:
	int weight;
	double priceOfGram;

public:
	FurniturePart();
	FurniturePart(const FurniturePart&);
	FurniturePart(int weight, double priceOfGram);
	
	int getWeight();
	double getPriceOfGram();

	double getPrice();
	void print();
};

