//create a program that takes in first name and age in years, and outputs them
//in months.

#include <iostream>

using namespace std;

int main() {
    string name;
    double age_years = -1.0; // interestingly, this does not prevent age_years from being garbage if given a string...
    double age_months = -1.0;

    cout << "Please enter your first name and age in years.\n";
    cin >> name >> age_years;

    age_months = age_years * 12;

    cout << "Your name is " << name << " and you are " << age_months 
        << " months old.\n";
    
    return 0;

}
