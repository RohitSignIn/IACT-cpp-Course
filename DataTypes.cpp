// C++ Data Types
    /*
    A variable in C++ must be a specified data type:

    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String #include <string>
    */

// Basic Data Type
    /*
    boolean	1 byte	        Stores true or false values
    char	1 byte	        Stores a single character/letter/number, or ASCII values
    int	    2 or 4 bytes	Stores whole numbers, without decimals
    float	4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
    double	8 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
    */

   //Special Thing About FLoating point Number
        /*
        Scientific Numbers
        A floating point number can also be a scientific number with an "e" 
        to indicate the power of 10:

        #include <iostream>
        using namespace std;
        
        int main () {
        float f1 = 35e3;
        double d1 = 12E4;
        cout << f1 << "\n";
        cout << d1;
        return 0;
        }

        OUTPUT
        35000
        120000
        */
    
    // What is ASCII Values
        /*
        American standard code for information interchange
        A standard data-encoding format for electronic communication between computers.

        char a = 65, b = 66, c = 67;
        cout << a;
        cout << b;
        cout << c;
        */

    // Note: String - This is not a built-in type, but it behaves like one 
    // in its most basic usage. String values must be surrounded by double quotes: