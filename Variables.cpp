// C++ Variables
    /*
    Variables are containers for storing data values.

    In C++, there are different types of variables (defined with different keywords), for example:

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false

    e.g.

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    */


// Declare Multiple Variables
    /* 
    int x = 5, y = 6, z = 50;
    cout << x + y + z; 
    */

// One Value to multiple Varibles
    /*
    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;
    */


// What Identifiers means
    /*
    All C++ variables must be identified with unique names.
    These unique names are called identifiers.
    Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
    Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
    
    // Good
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;
    */

// Naming Variables Rules
    /*
    The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
    */


// C++ Constants
    /*
    Constants
    When you do not want others (or yourself) to override existing variable values, use the const keyword 
    (this will declare the variable as "constant", which means unchangeable and read-only):

    You should always declare the variable as constant when you have values that are unlikely to change:

    const int minutesPerHour = 60;
    const float PI = 3.14;
    */