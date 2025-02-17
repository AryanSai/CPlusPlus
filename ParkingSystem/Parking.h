#include <iostream>
#include <vector>
#include "Vehicle.h"

using namespace std;

class Parking
{
private:
    int rows;
    int spotsPerRow;
    // store pointers such that it occupoies less space than vechicle itself
    // pointers just use 8 bytes
    vector<vector<Vehicle *>> grid;

public:
    void create(int r, int c)
    {
        rows = r;
        spotsPerRow = c;
        grid.resize(rows); // decide the size at run time
        for (int i = 0; i < rows; i++)
        {
            grid[i].resize(c);
        }
    }

    pair<int, int> findVacantSpot()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < spotsPerRow; j++)
            {
                if (!grid[i][j])
                {
                    return {i, j};
                }
            }
        }
        cout << "Sorry! No Parking Slot Available!" << endl;
        return {-1, -1};
    }

    bool park(Vehicle *v)
    {
        pair<int, int> spot = findVacantSpot();
        if (spot.first >= 0 && spot.second >= 0 && spot.first < rows && spot.second < spotsPerRow)
        {
            park(v, spot.first, spot.second);
            return true;
        }
        else
            cout << "Sorry! No Parking Slot Available!" << endl;
        return false;
    }

    bool park(Vehicle *v, int rowNum, int spotNum)
    {
        if (grid[rowNum][spotNum])
        {
            cout << "Sorry! A Vehicle is already parked here!" << endl;
            return false;
        }
        v->occupySpot(rowNum, spotNum);
        grid[rowNum][spotNum] = v;
        cout << "Vehicle " << v->vechicleNumber() << " got parked at (" << rowNum << "," << spotNum << ")" << endl;
        return true;
    }

    void leave(Vehicle *v)
    {
        cout << "Vehicle " << v->vechicleNumber() << " left the parking!" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < spotsPerRow; j++)
            {
                if (grid[i][j] == v)
                {
                    grid[i][j] = NULL;
                    v->vacateSpot();
                }
            }
        }
    }

    void printParkingGrid()
    {
        cout << "-------------------------------------------" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < spotsPerRow; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-------------------------------------------" << endl;
    }
};
