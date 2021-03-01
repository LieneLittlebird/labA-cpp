// Liene Putniņa, lr12022
// A4. Given n integers. Calculate the minimum value of given integers and the number of the integers with this value.
// Program created at: 2021/02/28
//TEST CASES

#include <iostream> 
#include <limits>
using namespace std;

//A function containing the instructions for the program is declared.
int findNumbers()
{

    int numbers[50];
    int count;
    int minValue;
    bool continueLoop = true;

    cout << "Enter the number of elements in an array:\n";

    // User enters the volume of the array by writing an integer.
    cin >> count;

    // Input validation loop. If the wrong input type is entered (it fails), error state is cleared,
    // and an error message is printed. If the input is of the correct type (!fail), the loop closes.
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

    // Program prints the "enter" message with the array size the user has entered.
    cout << "Enter " << count << " numbers: \n";

    // A loop goes through the array of numbers the user has entered and prints them all out.
    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
        // Another input validation loop. Same as above.
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
    // 2. Finds the number of times this integer occurs in the array and prints out their value.
    minValue = numbers[0];
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        // Checking if minValue is bigger than every element in the numbers array.
        if (numbers[i] < minValue)
        {
            // Comparing every value of numbers array to minValue and 
            // reassigning a new value to the result variable, so that the the loop could continue.
            minValue = numbers[i];
            result = 1;
        }
        else if (minValue == numbers[i])
        {
            result++;
        }
    }

    cout << "The smallest number is: " << minValue << "."
         << " It occurs " << result << " times. " << endl;

    return 0;
}

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
