

////////////////////////////////////////////////////////////////////////////////////////////
//
// File Name         : cs121Lab3_driver.cpp
//
// This program       Will take test scorces of 3 students between 0-100 and return a letter grade.
//                    
//
// Programmer        : B.J. Streller A
//
// Date Written      : 9/26/23
//
// Date Last Revised : 9/26/23
//
////////////////////////////////////////////////////////////////////////////////////////////




#include <iostream>					// need cin,cout,etc.
#include <iomanip>					// need setf,precision
#include <string>
using namespace std;


// global variable declarations

int     t1,							// test 1 grade
        t2,							// test 2 grade
        t3;							// test 3 grade
double  Average_Of_Tests = 0.0;		// average of tests
char    Grade;						// course grade



////////////////////////////////////////////////////////////////////////////////////////////



int  main( )
{
/////////Promts user for name
    string firstName, lastName;
    cout << "Input First name : ";
    cin >> firstName;
    cout << "Input Last name : ";
    cin >> lastName;

////////////////prompt user for three test scores; validates entries;
////////////////prints any re-entered scores

    // prompt for test1
    cout << " \n\n Please enter your score from test 1 : ";
    cin >> t1;

    // validate test1
    if( (t1 > 100) || (t1 < 0) )
        // correct if necessary
        {
            cout << " \n INVALID GRADE! \n ";
            cout << "Please re-enter a test 1 score from 0 to 100 : ";
            cin >> t1;
            cout << " \n Thank you\n ";
            cout << " \n You have now entered " << t1 << " for test 1.\n\n";
        }


    // prompt for test2
    cout << " Please enter your score from test 2 : ";
    cin >> t2;

    // validate test2
    if( (t2 > 100) || (t2 < 0) )
        // correct if necessary
        {
            cout << " \n INVALID GRADE! \n ";
            cout << "Please re-enter a test 2 score from 0 to 100 : ";
            cin >> t2;
            cout << " \n Thank you\n ";
            cout << " \n You have now enterd "<< t2 <<" for test 2.\n\n";
        }


    // prompt for test3
    cout << " Please enter your score from test 3 : ";
    cin >> t3;

    // validate test3
    if( (t3 > 100) || (t3 < 0) )
        // correct if necessary
        {
            cout << " \n INVAILID GRADE!\n ";
            cout << "Please re-enter a test 3 score from 0 to 100 : ";
            cin >> t3;
            cout << " \n Thank you\n ";
            cout << " \n You have now enterd "<< t3 << " for test 3.\n\n";
        }

    cout << endl;





////////////////calculates the average of the three tests that the user entered

    //local variable declarations

    double sum = 0.0,				// sum of the tests
           ave = 0.0;				// average of tests

    sum = t1 + t2 + t3 ;			// compute sum of tests
    ave = sum / 3.0;				// compute average

    Average_Of_Tests = ave;






////////////////determines the course grade from Average_Of_Tests

    char grd;			// course grade


    // 'A' grade determination
    //YOU ADD YOUR CODE HERE
    if (sum >= 90)
    {
        grd = 'A';
    }

    // 'A'-'B' range grade determination
    //YOU ADD YOUR CODE HERE
    if (sum < 90 && sum >= 80)
    {
        grd = 'B';
    }

    // 'C'-'D' range grade determination
    //YOU ADD YOUR CODE HERE
    if (sum < 80 && sum >= 70)
    {
        grd = 'C';
    }

    if (sum < 70 && sum >= 50)
    {
        grd = 'D';
    }
    // 'F' grade determination
    //YOU ADD YOUR CODE HERE
    if (sum < 50)
    {
        grd = 'F';
    }

    Grade = grd;  //set grd to Grade







////////////////prints data echo, test average (two decimal places)
////////////////and the course grade


    cout.setf(ios::fixed|ios::showpoint);		// show the decimal point
    cout << setprecision(2);					// show two decimal places
    cout << setfill('#');   

    // data echo
    cout << " You have entered the following three test grades : "
         << " \n " << setw(3) << t1 << setw(14) << " for test 1, " << setw(6) << t2 << setw('6') << " for" << setw(13) << " test 2, and " << setw(6) << t3 << setw(16) << " for test 3, " << "\n\n ";

    // print average
    cout << setw(43) << " The average of the three tests that you"
    << setw(11) << " entered is : " << setw(6) << Average_Of_Tests << "\n\n ";

    // print final grade
    cout << setw(25) << " Your course grade is " << setw(1) << Grade << "." << setw(3) << "\n\n\n";

    return 0;


}


////////////////////////////////////////////////////////////////////////////////////////////

