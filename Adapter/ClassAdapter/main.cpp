#include "wildTurkey.h"
#include "wildTurkeyAdapter.h"
#include "mallardDuck.h"
#include "mallardDuckAdapter.h"
#include <iostream>
using namespace std;

void testDuck(Duck *duck)
{
    duck->quack();
    duck->fly();
}

void testTurkey(Turkey *turkey)
{
    turkey->gobble();
    turkey->fly();
}

int main()
{
    Turkey *turkey = new WildTurkey();
    cout << "The Turkey says: " << endl;
    turkey->gobble();
    turkey->fly();

    cout << "\nTurkeyAdapter is coming:\n";
    Duck *wildTurkeyAdapter = new WildTurkeyAdapter();
    testDuck(wildTurkeyAdapter);

    cout << "\nDuckAdapter is coming:\n";
    Turkey *duck = new MallardDuckAdapter();
    testTurkey(duck);
}