#include "mallardDuck.h"
#include "modelDuck.h"
#include "flyRocketPowered.h"

int main()
{
    MallardDuck mallardDuck;
    mallardDuck.display();
    mallardDuck.swim();
    mallardDuck.performFly();
    mallardDuck.performQuack();
    cout << "\n\n";

    ModelDuck modelDuck;
    modelDuck.display();
    modelDuck.performFly();
    modelDuck.performQuack();
    modelDuck.swim();

    cout << "\nChaning ModelDuck's Quacking Behavior at runtime:\n";

    auto rocketPoweredFly = make_unique<FlyRocketPowered>();
    modelDuck.setFlyBehavior(move(rocketPoweredFly));
    modelDuck.performFly();
}