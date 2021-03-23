#include <iostream>
#include <limits>
using namespace std;

int findNumbers()
{
    int count;
    int inputNumber;
    int smallest;
    int times;

    cout << "Enter the number of elements: \n";
    cin >> count;
    cout << "Enter " << count << " numbers: \n";

    for (int i = 0; i < count; ++i)
    {
        cin >> inputNumber;
        if (i == 0 || inputNumber < smallest)
        {
            smallest = inputNumber;
            times = 1;
        }
        else if (smallest == inputNumber)
        {
            times++;
        }
    };

    cout << "The smallest number is: " << smallest << "."
         << " It occurs " << times << " times. " << endl;

    return 0;
};

// Execution of the program
int main()
{
    // Definition of the repeatable value - it will be checked at the end of each execution cycle
    int repeatExec;
    do
    {
        findNumbers();
        cout << " Enter 1 to continue or 0 to quit: " << endl;
        cin >> repeatExec;
    } while (repeatExec == 1);
}