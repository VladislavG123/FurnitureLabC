
#include "Furniture.h"

Furniture::Furniture()
{
}

Furniture::Furniture(FurniturePart fp, int fc, FurniturePart sp, int sc, FurniturePart tp, int tc, double constructionPrice)
{
	this->firstPart = fp;
	this->countFirst = fc;

	this->secondPart = sp;
	this->countSecond = sc;

	this->thirdPart = tp;
	this->countThird = tc;

	this->constructionPrice = constructionPrice;
}

double Furniture::getFullPrice()
{
	return (firstPart.getPrice() * countFirst) + 
			(secondPart.getPrice() * countSecond) + 
			(thirdPart.getPrice() * countThird) + 
			constructionPrice;
}

FurniturePart Furniture::getMaxPart()
{
	FurniturePart max = firstPart.getPrice() > secondPart.getPrice() ? firstPart : secondPart;
	return max.getPrice() > thirdPart.getPrice() ? max : thirdPart;
}
