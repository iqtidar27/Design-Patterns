#include <iostream>
using namespace std;

class Battleship
{
public:
    Battleship()
    {
        cout << "Battleship Created" << endl;
    }

    virtual void Fire() = 0;
    virtual void Steer() = 0;

    virtual ~Battleship()
    {
        cout << "Battleship destroyed" << endl;
    }
};

class Destroyer : public Battleship
{
public:
    Destroyer()
    {
        cout << "Destroyer Created" << endl;
    }
    void Fire() override
    {
        cout << "Destroyer Fire" << endl;
    }

    void Steer() override
    {
        cout << "Destroyer Steer" << endl;
    }
};

class Carrier : public Battleship
{
public:
    Carrier()
    {
        cout << "Carrier Created" << endl;
    }
    void Fire() override
    {
        cout << "Carrier Fire" << endl;
    }

    void Steer() override
    {
        cout << "Carrier Steer" << endl;
    }
};

// run-time polymorphism
class ShipCreator
{
public:
    virtual Battleship *FactoryMethod() = 0;
    virtual ~ShipCreator() {}

    Battleship *CreateShip()
    {
        Battleship *ptr = this->FactoryMethod();
        return ptr;
    }
};

class CarrierCreator : public ShipCreator
{
public:
    Battleship *FactoryMethod() override
    {
        return new Carrier();
    }
};

class DestroyerCreator : public ShipCreator
{
public:
    Battleship *FactoryMethod() override
    {
        return new Destroyer();
    }
};

int main()
{
    ShipCreator *creator = new CarrierCreator();
    Battleship *battleship1 = creator->CreateShip();
    battleship1->Fire();
    battleship1->Steer();

    cout << "\nSecond Battleship:\n";

    creator = new DestroyerCreator();
    Battleship *battleship2 = creator->CreateShip();
    battleship2->Fire();
    battleship2->Steer();

    delete battleship1;
    delete battleship2;
    delete creator;
}