// Liene Putniņa, lr12022
// A4. Given n integers. Calculate the minimum value of given integers and the number of the integers with this value.
// Program created at: 2021/02/28
//ERROR MSG
//TEST CASES

#include <iostream>
using namespace std;

//A function containing the instructions for the program
int findNumbers () {

    // All of the variables defined
    int numbers[50];
    int count;
    int i;
    int minValue;

    // check if right with every cin

    // UI for the program
    cout << "Enter the number of elements in an array\n";
    cin >> count; //  Check if good
    cout << "Enter " << count << " numbers \n";

    // A loop that goes through the array of numbers the user has entered and prints them all out
    for(i = 0; i < count; i++) {
        cin >> numbers[i]; // Save entered value to temp var. Check if entered value is a number and then print out
    }

    // A loop that: 
    // 1.Finds the smallest integer in the array and prints it out, 
    // 2. Finds the number of times this integer occurs in the array and prints out their value
    minValue = numbers[0];
    int result = 0;
    for(i = 0; i < count; i++) {
        if(numbers[i] < minValue) {
            minValue = numbers[i];
        }
        for(i = 0; i < count; i++) {
            if (minValue == numbers[i]) {
                result ++;
            }
        }
    }

    cout  << "The smallest number is: " << minValue << "." 
    <<" It occurs " << result << " times" <<endl;
    
    return 0;
}

// Execution of the program
int main () {
    // Definition of the repeatable value
    int repeatExec;
    // A loop that lets the program be executed multiple times
    do {
        findNumbers();
        cout << "Enter 1 to continue or 0 to quit: " << endl;
        cin >> repeatExec;
    } while (repeatExec == 1);
}
