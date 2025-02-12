#include "mallardDuck.h"
#include "modelDuck.h"
#include "flyRocketPowered.h"

int main()
{
    MallardDuck myDuck;
    myDuck.display();
    myDuck.performQuack();
    myDuck.swim();
    myDuck.performFly();

    cout << "\n\n";
    ModelDuck modelDuck;
    modelDuck.display();
    modelDuck.performFly();
    modelDuck.performQuack();
    modelDuck.swim();

    cout << "\n\n";
    cout << "Chaning behavior at run time for modelDuck\n";
    auto rocketPoweredFly = new FlyRocketPowered();
    modelDuck.setFlyBehavior(rocketPoweredFly);
    modelDuck.performFly();
}