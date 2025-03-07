#include "turkeyAdapter.h"
#include "duckAdapter.h"
#include "mallardDuck.h"
#include "wildTurkey.h"
#include <iostream>
using namespace std;

void testDuck(Duck *duck)
{
    duck->quack();
    duck->fly();
}

void testTurkey(Turkey *turkey)
{
    turkey->gooble();
    turkey->fly();
}

int main()
{
    Duck *duck = new MallardDuck();
    Turkey *turkey = new WildTurkey();

    cout << "The Duck says..." << endl;
    testDuck(duck);

    cout << "The Turkey says..." << endl;
    testTurkey(turkey);

    cout << "\nTurkey Adapter Performing\n";
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);
    testDuck(turkeyAdapter);

    cout << "\nDuck Adapter Performing\n";
    Turkey *duckAdapter = new DuckAdapter(duck);
    testTurkey(duckAdapter);
}