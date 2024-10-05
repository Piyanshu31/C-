#include <iostream>  //header file library let us use input and output object and variable (cout,cin)
using namespace std; /*allow us to use names form standard library for object and variable. we can use 'std' keyword follows by '::' insted of 'using namespace std'*/

int first() // Function
{
    cout << "Hello World\n"; // object
    cout << "Bye World" << "\n";
    cout << 3;
    cout << "\n";
    cout << 4 * 5 << "\n";
    cout << "My name is Raj " << endl;
    return 0;
}

// THIS IS JUST THE INTRO

/*Object commonly used:
1."cout with <<" use to print the text
    text must written in: ""
2."cin with >>" use to take variable from user*/

/*Escape Sequance
1."/n" is use to to insert an line in output
2."endl" is another way to insert line
3."\t" is use to create horizontal tab
4."\\" is use to insert a blackslash in output (\)
5." \" "is used to make bouble quote in output ("")
*/

// Comments :
//  "//": Comment for single line
//  "/* */" : Comment is the line between them

/*Variable Type:
1.int : integer (123 to -123)
2.double : float number
3.char : Character
4.string : text
5.bool : true or false (true = 1 and false = 0)

const : is use to make variable only read-Only or unchangeable*/

int variable()
{
    int a = 10;
    double b = 5.99;
    char c = 'M';
    string d = "Mr. Mime";
    bool e = false;

    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
}

int main()
{
    first();
    variable();
    return 0;
}