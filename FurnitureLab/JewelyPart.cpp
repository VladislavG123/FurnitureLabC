#include "JewelyPart.h"

JewelyPart::JewelyPart()
{
}

JewelyPart::JewelyPart(const FurniturePart& part, double jewelyPrice)
	:FurniturePart(part)
{
	this->jewelyPriceOf100Gram = jewelyPrice;

}

JewelyPart::JewelyPart(const JewelyPart& source)
{
	this->jewelyPriceOf100Gram = source.jewelyPriceOf100Gram;
}

double JewelyPart::getPrice()
{
	return this->getPrice() + (getWeight() * jewelyPriceOf100Gram / 100);
}
