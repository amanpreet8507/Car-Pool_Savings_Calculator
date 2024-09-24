//
//  main.cpp
//  Car-Pool Savings Calclator
//
//  Created by Amanpreeet Sandhu on 2024-09-24.
//

#include <iostream>

using namespace std;

int main() {
    
    // Declaration of all variables
    int total_miles_driven_per_day;
    int cost_per_gallon_of_gasoline;
    int average_miles_per_gallon;
    int parking_fees_per_day;
    int tolls_fees_per_day;
    int total_cost;
    
    // Get the user input
    cout << "Welcome to Car Pool Savings Calculator\n";
    cout << "Please input your total miles driven per day\n";
    cin >> total_miles_driven_per_day ;
    cout << "Please input your cost per gallon of gasoline\n";
    cin >> cost_per_gallon_of_gasoline;
    cout << "Please input your average miles per gallon\n";
    cin >> average_miles_per_gallon ;
    cout << "Please input your parking fees per day\n";
    cin >> parking_fees_per_day;
    cout << "Please input your tolls fees per day\n";
    cin >> tolls_fees_per_day;

    // Calculate total cost per day
    total_cost = (total_miles_driven_per_day/ average_miles_per_gallon) * cost_per_gallon_of_gasoline + parking_fees_per_day + tolls_fees_per_day;
    
    // Output results
    cout << "Your total cost per day is " << total_cost << endl ;
}
