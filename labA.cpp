// Liene Putniņa, lr12022
// A4. Given n integers. Calculate the minimum value of given integers and the number of the integers with this value.
// Program created at: 2021/02/28
// int inputValue

// while (continuLoop) {
// cout >> enter a int value
// cin >> something
// if (somethin is int) {
// inputValue = something
// continueLoop = false
// }
// else {
// cout >> wrong format, please input int
// }
// }

#include <iostream> //Wrote stuff here
#include <limits>
using namespace std;

//A function containing the instructions for the program
int findNumbers()
{

    // All of the variables defined
    int numbers[50];
    int count;
    int minValue;
    bool continueLoop = true;

    // UI for the program
    cout << "Enter the number of elements in an array\n";

    // User enters the volume of the array by writing a positive integer
    cin >> count;

    while (continueLoop)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input value. Please, enter an integer" << endl;
            cin >> count;
        }
        if (!cin.fail())
            break;
    }

    // Program prints the enter message with the number of the array volume the user has entered
    cout << "Enter " << count << " numbers \n";

    // A loop that goes through the array of numbers the user has entered and prints them all out
    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
        // A loop that checks if the wright data type is entered,
        // clears the error log and lets the user try again with different data types
        while (continueLoop)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input value. Please, enter an integer" << endl;
                cin >> count;
            }
            if (!cin.fail())
                break;
        }
    }

    // A loop that:
    // 1.Finds the smallest integer in the array and prints it out,
    // 2. Finds the number of times this integer occurs in the array and prints out their value
    minValue = numbers[0];
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        // Checking if minValue is bigger than every element in the numbers array
        if (numbers[i] < minValue)
        {
            // Comparing every value of numbers array to minValue
            minValue = numbers[i];
            result = 1;
        }
        else
            // for (int i = 0; i < count; i++)
            // {cl
            if (minValue == numbers[i])
        {
            result++;
        }
        // }
    }

    cout << "The smallest number is: " << minValue << "."
         << " It occurs " << result << " times. " << endl;

    return 0;
}

// Execution of the program
int main()
{
    // Definition of the repeatable value
    int repeatExec;
    // A loop that lets the program be executed multiple times
    do
    {
        findNumbers();
        cout << " Enter 1 to continue or 0 to quit: " << endl;
        cin >> repeatExec;
    } while (repeatExec == 1);
}
