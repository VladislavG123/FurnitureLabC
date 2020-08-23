#pragma once
#include "FurniturePart.h"

class JewelyPart : public FurniturePart
{
private:
	double jewelyPriceOf100Gram;

public:
	JewelyPart();
	JewelyPart(const FurniturePart&, double);

	JewelyPart(const JewelyPart& source);

	double getPrice();
};

