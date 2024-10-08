#include <iostream> //header file library let us use input and output object and variable (cout,cin)
#include <string>
#include <cmath>
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

/*Data Type:
1.int : integer (4 byte)
float : decimal value (4 byte)
2.double : decimal number (8 byte)
3.char : Character (1 byte)
4.string : text
5.bool : true or false (true = 1 and false = 0) (1 byte)*/

// const : is use to make variable (eg. a,b) only read-Only or unchangeable

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
    return 0;
}

/*Operations :
1.Arithmetic operation:
    +: Addition
    -: Subtraction
    *: Multiplication
    /: Division
    %: Modulus
    ++: Increment
    --: Decrement

2.Assignment operation: (= , += , -= , *= , /= , %= ,etc) (a+=3: a=a+1)

3.comparison operation:
    == : equal to
    != : not equal to
    > : Greater than
    < : Less than
    >= : Greater than equal to
    <= : Less than equal to

4.logical operation:
    && : AND
    || : OR
    ! : NOT

3.Bitwise operation:
    & : Bitwise And
    | : Bitwise Or
    ~ : Bitwise Not
    >> : Bitwise right shift
    << : Bitwise left shift
    ^ : Bitwise EX-Or
*/

int str()
{
    string firstname = "Leo";
    string lastname = "Das";
    cout << "\n";
    string fullname = firstname + " " + lastname;
    cout << fullname << "\n";

    string fname = "Leo";
    string lname = "Das";
    string flname = fname.append(lname);
    cout << flname << endl;

    string a = "20";
    string b = "24";
    string z = a + b;

    cout << z << endl;
    cout << firstname.length() << endl;
    cout << flname.size() << "\n";

    string ch = "Balveer";
    cout << ch[4] << endl;
    ch[4] = 'D';
    cout << ch << endl;

    string myString = "Hello";
    cout << "Original string: " << myString << "\n";
    cout << "First character: " << myString.at(0) << "\n";
    cout << "Second character: " << myString.at(1) << "\n";
    cout << "Last character: " << myString.at(myString.length() - 1) << "\n";
    myString.at(0) = 'J';
    cout << "Changed string: " << myString << "\n";

    // for typing spaces
    string name;
    cout << "Type your full name: ";
    getline(cin, name);
    cout << "Your name is: " << name << endl;

    // Taking input from user
    string finame;
    cout << "Type your first name: ";
    cin >> finame;
    cout << "Your name is: " << finame << "\n";

    return 0;
}

/*String: **(For using sring we need to add string library)**
1.String Concatenation: in '+' operation is use between them
    -append can be use insted of + as above example
2.When you add two number in string then they didn't get add but are written in front of each other
3.Text length: nameofvariable.length() is to find string length
    -nameofvariable.size() gives us same result as length
4.Access string: nameofvarriable[loc] this will print the char on that place
    -also is we assign any value at that place then char at that place will change
    -variable.at(loc) give us specific positon
5.Input from user: if you want then you can use simple varible infront of cin
    - to take spaces we should take gitline(cin,variable)*/

int math()
{
    int a = 100;
    int b = 50;
    float c = 40.7;
    cout << "\n";
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    cout<<sqrt(a)<<"\n";
    cout<<round(c)<<endl;
    cout<<log(b)<<endl;
    return 0;
}

/*Maths:  
1.max(a,b) : print greater number
2.min(a,b) : print small number
**(cmath library need to be use maths function)**
3. squrt(a) : give square root of a
4.round (a) : take roud up of the number
5.log (a) : give natural log of a
*/

int main()
{
    first();
    variable();
    str();
    math();
}