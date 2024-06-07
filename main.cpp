//
//  main.cpp
//  hell
//
//  Created by Karol Cieślik on 07/06/2024.
//

#include <iostream>

using namespace std;

/**
 * @brief Adds two numbers and prints the result.
 *
 * @param x First number.
 * @param y Second number.
 */
void add(double x, double y) {
    cout << x << " + " << y << " = " << x + y << endl;
}

/**
 * @brief Subtracts the second number from the first and prints the result.
 *
 * @param x First number.
 * @param y Second number.
 */
void subtract(double x, double y) {
    cout << x << " - " << y << " = " << x - y << endl;
}

/**
 * @brief Multiplies two numbers and prints the result.
 *
 * @param x First number.
 * @param y Second number.
 */
void multiply(double x, double y) {
    cout << x << " * " << y << " = " << x * y << endl;
}

/**
 * @brief Divides the first number by the second and prints the result.
 *
 * @param x First number.
 * @param y Second number.
 */
void divide(double x, double y) {
    if (y == 0) {
        cout << "Błąd: Dzielenie przez zero!" << endl;
    } else {
        cout << x << " / " << y << " = " << x / y << endl;
    }
}

/**
 * @brief Main function to execute the calculator program.
 *
 * @return int Return code.
 */
int main() {
    int choice;      // Variable to store user's choice of operation
    double num1, num2; // Variables to store the two numbers for the operation

    // Display the menu of operations
    cout << "Wybierz operację:" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnożenie" << endl;
    cout << "4. Dzielenie" << endl;

    // Prompt user to select an operation
    cout << "Wprowadź wybór (1/2/3/4): ";
    cin >> choice;

    // Check if the user's choice is valid
    if (choice >= 1 && choice <= 4) {
        // Prompt user to enter two numbers
        cout << "Wprowadź pierwszą liczbę: ";
        cin >> num1;
        cout << "Wprowadź drugą liczbę: ";
        cin >> num2;

        // Perform the selected operation
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
        }
    } else {
        // Display an error message for an invalid choice
        cout << "Nieprawidłowy wybór, spróbuj ponownie." << endl;
    }

    return 0;
}
