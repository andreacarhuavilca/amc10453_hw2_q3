// amc10453_hw2_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Step 1: Get user input: Get Johns days worked, hours worked, minutes worked. Get Bills days worked, hours, and minutes worked.
// 
// Step 2: Process the input: Add the days together. Add the hours together. Add minutes worked together. Add minutes worked together.
// Step 2: If hours added are > greater than 24, convert to a day and keep remained
// Step 2: If minutes are greater than 60, convert to an hour and keep remainder
// 
// Step 3: Apply the logic
// 
// Step 4: Output the result


int main()
{
    int johnDaysWorked, billDaysWorked, totalDaysWorked, totalMinsWorked, totalHoursWorked, johnHoursWorked, johnsMinutesWorked, billHoursWorked, billMinutesworked;
    
    cout << "Please enter the number of days John has worked: "; 
    cin >> johnDaysWorked; 
    cout << "Please enter the number of hours John has worked: ";
    cin >> johnHoursWorked;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> johnsMinutesWorked;
    cout << "\n";
    cout << "\n";
    cout << "Please enter the number of days Bill has worked: ";
    cin >> billDaysWorked;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> billHoursWorked;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> billMinutesworked;


    totalDaysWorked = johnDaysWorked + billDaysWorked;
    totalHoursWorked = johnHoursWorked + billHoursWorked;
    totalMinsWorked = johnsMinutesWorked + billMinutesworked;
    
    if (totalHoursWorked > 24)
    {
        totalDaysWorked += totalHoursWorked / 24;
        totalHoursWorked = totalHoursWorked % 24;
         
    }
    
    if (totalMinsWorked > 60) 
    {
       totalMinsWorked += totalMinsWorked / 60;
       totalMinsWorked = totalMinsWorked % 60;
    }

    cout << "The total time both of them worked together is: " << totalDaysWorked << " days, " << totalHoursWorked << " hours and " << totalMinsWorked << " minutes";

    return 0;
}

