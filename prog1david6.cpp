/* ------------------------------------------------

 * Class:  Program #1 - CS 141 
 * Lab:    Tues 1pm
 * Author: Dione David
 * Date : 09/11/2017
 * System : MacBook Pro
 *
 */
#include <iostream>    // For printf
#include <ctime>       // For time()
#include <cstdlib>     // For srand()
using namespace std;


//-----------------------------------------------------------------------------------------
int main()
{
    int randValue;      
    char c;             
    char specialCharacter; 
    const int r = 114;
   


    
    
    //  random number generator
    srand( time( 0));  //  different results each time
    
    // Display  information
    cout << "\n";
    cout << "Program #1: Guess It  \n";
    cout << "Author: Dione David   \n";
    cout << "Lab: Tues 1pm     \n";
    cout << "Date: 09/11/2017 \n";
    cout << "System: MacBook Pro  \n";
    cout << " \n";
    
    // Choose a random character 
    randValue = rand() % 26; 
 
    // If the random number is odd, add it to 'a'.  If even, add it to 'A'
    if( randValue %2 == 0) {
        specialCharacter = 'A' + randValue;
    }
    
    else {
        specialCharacter = 'a' + randValue;
    }
       
    
    // Display table of numbers with random characters
    for( int i=99; i>=0; i--) {
        // Get a random number  0..25
        randValue = rand() % 26;
        
        
         if( randValue %2 == 0) {
            c = 'A' + randValue;
        }
        else {
            c = 'a' + randValue;
        }
        
        // Display the number that preceeds each displayed character
        printf("%3d:" , i);
        
        
        // Display this random character.  If the position is a multiple
        // of 9, display the "special" character instead.
        if( i%9 != 0) {
            cout << c;   // display the random character
        }
        else {
            cout << specialCharacter;   // display the special character
        }
        
        // print a newline character if we're at the end of a line
        if( i%10 == 0) {
            cout << "\n";
        }
        
        
    }
    
    // Display instructions and have user press enter when ready
    cout << "\n";
    cout << "1. Choose any two-digit number in the table above (e.g. 73).  \n";
    cout << "2. Subtract its two digits from itself (e.g. 73 - 7 - 3 = 63)  \n";
    cout << "3. Find this new number (e.g. 63) and remember the letter next to it. \n"; 
    cout << "4. Now press the 'r' key and I'll read your mind...  \n";
    cin >> c;
    cout << endl;
   
    // Display computer forecast
    cout << "You selected the character: " << specialCharacter;
    cout << endl;
    
    return 0;
}//end main()