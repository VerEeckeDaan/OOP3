#include <iostream>
#include "Woman.h"  //Include of project header

using namespace std;

int main() {

    //int number;
    Woman mila(19, "Mila");
    cout << mila.to_string() << endl;

    //change age and print again
    mila.setAge(30);
    cout << mila.to_string() << endl;

    return 0;
}
