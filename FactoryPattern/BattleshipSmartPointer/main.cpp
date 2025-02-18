#include <iostream>
#include <memory>
using namespace std;

class Battleship
{
public:
    Battleship()
    {
        cout << "Battleship Created!!" << endl;
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
        cout << "Destroyer Created!!" << endl;
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
        cout << "Carrier Created!!" << endl;
    }

    void Fire() override
    {
        cout << "Carrier Fire" << endl;
    }

    void Steer() override
    {
        cout << "Carrier Fire" << endl;
    }
};

// run-time polymorphism
class ShipCreator
{
public:
    virtual unique_ptr<Battleship> FactoryMethod() = 0;
    virtual ~ShipCreator() = default;

    unique_ptr<Battleship> CreateShip()
    {
        unique_ptr<Battleship> smart_ptr = this->FactoryMethod();
        return smart_ptr;
    }
};

class CarrierCreator : public ShipCreator
{
public:
    unique_ptr<Battleship> FactoryMethod() override
    {
        return make_unique<Carrier>();
    }
};

class DestroyerCreator : public ShipCreator
{
public:
    unique_ptr<Battleship> FactoryMethod() override
    {
        return make_unique<Destroyer>();
    }
};

int main()
{
    unique_ptr<ShipCreator> creator = make_unique<CarrierCreator>();
    unique_ptr<Battleship> battleship1 = creator->CreateShip();
    battleship1->Fire();
    battleship1->Steer();
}