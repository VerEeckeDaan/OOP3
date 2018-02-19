#include <iostream>
using namespace std;

double sum(double x, double y){
    // double sum = x + y;
    // return sum
    return x + y;
}

//bool is_adult(int age){
  //  if (age < 18){
  //      return false;
  //  } else {
  //   return true;
   // }

    //return age < 18;
//}

int main()
{
    double y = sum(14.5,25.0);

    cout << "Sum = " << y;
    return 0;
}
