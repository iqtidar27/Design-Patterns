#include "condimentDecorator.h"
#include "sideDecorator.h"
#include "deluxeSandwich.h"
#include "basicSandwich.h"
#include <iostream>
using namespace std;

void ServeOrder(SandwichOrder *order)
{
    std::cout << "Total Cost: " << order->GetCost() << std::endl;
    std::cout << "Ingredients: " << order->GetIngredient() << std::endl;
}

int main()
{
    SandwichOrder *sandwich1 = new DeluxeSandwich;
    SandwichOrder *decorated1 = new CondimentDecorator("mayo", sandwich1);
    SandwichOrder *decorated2 = new SideDecorator("pickle", decorated1);
    SandwichOrder *decorated3 = new CondimentDecorator("mustard", decorated2);
    SandwichOrder *final_order = new SideDecorator("onion", decorated3);
    ServeOrder(final_order);
    return 0;
}