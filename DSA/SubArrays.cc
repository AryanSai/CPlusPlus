// program to print all the subarrays of an array
#include <iostream>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    // run a for loop from 0 to n. This will mark our starting point of the main array.
    for (int i = 0; i < arr.size(); i++)
    {
        // Run another for loop that runs from the first iterator to the ending point of the main array.
        for (int j = i; j < arr.size(); j++)
        {
            // Now run another loop that traverses the elements between both two iterators.
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}