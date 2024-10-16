#include <iostream>
#include <iomanip> // For std::setw
using namespace std;

// Function to get the current date from the user
void getCurrentDate(int &day, int &month, int &year) {
    cout << "Enter the current date (DD MM YYYY): ";
    cin >> day >> month >> year;
}

// Function to get the user's birth date from the user
void getBirthDate(int &day, int &month, int &year) {
    cout << "Enter your birth date (DD MM YYYY): ";
    cin >> day >> month >> year;
}

// Function to calculate age based on the current and birth dates
int calculateAge(int currentDay, int currentMonth, int currentYear, 
                 int birthDay, int birthMonth, int birthYear) {
    int age = currentYear - birthYear;

    // Adjust age if the birthday hasn't occurred yet this year
    if ((currentMonth < birthMonth) || 
       (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    return age;
}

// Function to display the result
void displayAge(int age) {
    cout << "\n=======================================" << endl;
    cout << "Your age is: " << age << " years old." << endl;
    cout << "=======================================" << endl;
}

int main() {
    int currentDay, currentMonth, currentYear;
    int birthDay, birthMonth, birthYear;

    // Get current date
    getCurrentDate(currentDay, currentMonth, currentYear);
    
    // Get birth date
    getBirthDate(birthDay, birthMonth, birthYear);
    
    // Calculate age
    int age = calculateAge(currentDay, currentMonth, currentYear, 
                           birthDay, birthMonth, birthYear);
    
    // Display age
    displayAge(age);

    return 0;
}
