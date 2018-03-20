#include <iostream>
#include "motorcycle.h"  //Include of project header

using namespace std;

int main() {

    Motorcycle moto("Suzuki" ,749 ,246 ,2018 , "GSXS750Z");
    cout << moto.to_string() << endl;

    return 0;
}