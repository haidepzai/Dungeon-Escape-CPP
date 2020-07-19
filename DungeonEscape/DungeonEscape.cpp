#include <iostream>
#include <string>
#include <vector>

#include "Vector2D.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Vector2D g(1, 4);

    cout << "Try to escape the dungeon, use 'W' (up), 'A' (left), 'S' (down), and 'D' (right) to move around." << endl;
    cout << "Your position is X and the exit is O" << endl;

    cout << g.getField() << endl;

    while (!g.isFinished()) {
        cout << "Enter your move: " << endl;

        g.move();

        cout << g.getField() << endl;
    }

    cout << "Congratulation! You have wonnered!" << endl;

    return 0;
}
