#pragma once
#include "FurniturePart.h"
#include <vector>

class NewFurniture
{
private:
	std::vector<FurniturePart> parts;
	double constructionPrice;

public:
	NewFurniture();
	NewFurniture(double constructionPrice);
	
	void addPart(FurniturePart part);
	double getFullPrice();
	FurniturePart getMaxPart();
};

