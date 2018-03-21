#include <iostream>
#include "motorcycle.h"
#include "engine.h"

using namespace std;
using namespace Vehicles;

int main(void) {

    Motorcycle fighter("Ducati" , "Fighter");
    fighter.setCapacity(600);
    fighter.setMaxSpeed(230);
    fighter.setYearOfManufactoring(1998);
    cout << fighter.to_string() << endl;

    Vehicles::Parts::Engine engine(800, 2, "VN001233234343");
    cout << engine.to_string() << endl;

    return 0;
}