// Exam1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Food.h"
#include "Drink.h"
#include "Restaurant.h"
int main()
{
	/*Restaurant priUti;
	Food new_food(1,2,"marula", 3);
	new_food.print();
	Drink new_drink(1, 3, "pienie", 0);
	new_drink.print();

	Drink new_drink2 = new_drink;
	new_drink2.print();
	priUti.addProduct(&new_food);
	priUti.addProduct(&new_drink);
	priUti.addProduct(&new_drink2);
	priUti.print();
	priUti.printAlcohols();*/
	Restaurant restaurant;
	Food t1;
	t1.setName("Pizza");
	t1.setWeight(0.400);
	t1.setQuantity(30);
	t1.setPrice(5.50);
	Drink t2;
	t2.setName("Water");
	t2.setVolume(0);
	t2.setQuantity(100);
	t2.setPrice(2.80);
	restaurant.addProduct(&t1);
	restaurant.addProduct(&t2);
	restaurant.print();
	restaurant.changePrice(1, 1.80);
	restaurant.print();


    return 0;
}

