#pragma once
#include "FurniturePart.h"

class Furniture
{
private:
	FurniturePart firstPart;
	FurniturePart secondPart;
	FurniturePart thirdPart;
	int countFirst;
	int countSecond;
	int countThird;

	double constructionPrice;

public:
	Furniture();
	Furniture(FurniturePart, int, FurniturePart, int, FurniturePart, int, double);

	double getFullPrice();
	FurniturePart getMaxPart();

};

