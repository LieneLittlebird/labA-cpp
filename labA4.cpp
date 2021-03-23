/* Liene Putniņa, lr12022
A4. Given n integers. Calculate the minimum value of given integers and the number of the integers with this value.
Program created at: 2021/03/01 */

#include <iostream>
#include <limits>
using namespace std;

int findNumbers()
{
    int count = 0;
    int inputNumber;
    int smallest;
    int times;
    bool continueLoop = true;

    cout << "Enter the number of elements: \n";

    /* Input validation loop. If the wrong input type (not integer) is entered,
    an error message appears. Then the error state is cleared, the program moves
    on to the next line and the user can continue with the input until an integer is entered.
    */
    continueLoop = true;
    while (continueLoop)
    {
        cin >> count;
        if (count == 0)
        {
            cout << "Invalid input. Please, enter an integer\n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        else
        {
            continueLoop = false;
        }
    }

    cout << "Enter " << count << " numbers: \n";

    /* A loop goes through all of the entered integers, validates the input type,
     finds the smallest number and its occurrences, then prints everything out.
    */
    for (int i = 0; i < count; ++i)
    {
        // Validation loop. Similar as above.
        continueLoop = true;
        while (continueLoop)
        {
            cin >> inputNumber;
            if (cin.fail())
            {
                cout << "Invalid input. Please, enter an integer\n";
                cin.clear();
                cin.ignore(256, '\n');
            }
            else
            {
                continueLoop = false;
            }
        }

        /* A conditional statement checks if the first number is smaller than the smallest number,
        assigns the value of the smallest number to the input number and 
        counts the times the smaller number has appeared
        */
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

    // Output with the required values
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