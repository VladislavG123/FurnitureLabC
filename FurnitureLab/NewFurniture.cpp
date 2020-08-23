#include "NewFurniture.h"

NewFurniture::NewFurniture()
{
}

NewFurniture::NewFurniture(double constructionPrice)
{
	this->constructionPrice = constructionPrice;
}

void NewFurniture::addPart(FurniturePart part)
{
	parts.push_back(part);
}

double NewFurniture::getFullPrice()
{
	double result = constructionPrice;

	for (int i = 0; i < parts.size(); i++)
	{
		result += parts[i].getPrice();
	}

	return result;
}

FurniturePart NewFurniture::getMaxPart()
{
	FurniturePart part = FurniturePart();

	for (int i = 0; i < parts.size(); i++)
	{
		if (parts[i].getPrice() > part.getPrice())
		{
			part = parts[i];
		}
	}

	return part;
}
