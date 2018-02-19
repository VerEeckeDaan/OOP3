#include <iostream>
using namespace std;
int main()
{
    const int SIZE_X = 5, SIZE_Y = 5, SIZE_Z = 5;
    double space[SIZE_X][SIZE_Y][SIZE_Z] = {};
          // Initialize all to zero

    for (unsigned int x = 0; x < SIZE_X; x++) {
        for (unsigned int y = 0; y < SIZE_Y; y++) {
            for (unsigned int z = 0; z < SIZE_Z; z++) {
                cout << "space[" << x << "][" << y << "]["
                    << z << "] = " << space[x][y][z] << endl;
            }
        }
    }

    return 0;
}
