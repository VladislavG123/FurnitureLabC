#include "FurniturePart.h"

FurniturePart::FurniturePart()
{
}

FurniturePart::FurniturePart(const FurniturePart& obj)
{
    this->weight = obj.weight;
    this->priceOfGram = obj.priceOfGram;
}

FurniturePart::FurniturePart(int weight, double priceOfGram)
{
    this->weight = weight;
    this->priceOfGram = priceOfGram;
}

int FurniturePart::getWeight()
{
    return weight;
}

double FurniturePart::getPriceOfGram()
{
    return priceOfGram;
}

double FurniturePart::getPrice()
{
    return weight * priceOfGram;
}

void FurniturePart::print()
{
    printf("Weight: %d. Price of gram: %d", weight, priceOfGram);
}
