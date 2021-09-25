#include<iostream>
#include "Furniture.h"
#include "JewelyPart.h"
#include "NewFurniture.h"

int main() {
	FurniturePart p1 = FurniturePart(100, 200);
	FurniturePart p2 = FurniturePart(500, 100);
	FurniturePart p3 = FurniturePart(600, 50);
	JewelyPart j1 = JewelyPart(p3, 10);


    // fnakljfbakfbas

	Furniture f1 = Furniture(p1, 2, p2, 10, p3, 5, 100);
	std::cout << "Full price: " << f1.getFullPrice() << "\n";
	
	FurniturePart max = f1.getMaxPart();
	std::cout << "[New] Price of max part: " << max.getPrice() << "\n";

	NewFurniture f2 = NewFurniture(1000);
	f2.addPart(p1);
	f2.addPart(p2);
	f2.addPart(p3);
	f2.addPart(j1);

	std::cout << "Full price: " << f2.getFullPrice() << "\n";

	FurniturePart max2 = f2.getMaxPart();
	std::cout << "[New] Price of max part: " << max2.getPrice() << "\n";


	std::cin.get();
}