#include <iostream>
using namespace std;

class Player
{
public:
    int x, y;
    int speed;

    Player()
    {
        x = 0;
        y = 0;
        speed = 1;
    }

    Player(int x0, int y0, int speed) : x(x0), y(y0), speed(speed)
    {
    }

    void move(int xa, int ya)
    {
        x = xa * speed;
        y = ya * speed;
    }
    
    void printPosition()
    {
        cout << "The player is at (" << x << ", " << y << ")\n";
    }
};

int main()
{
    Player p1;
    p1.printPosition();
    p1.move(1, -1);
    p1.printPosition();
}