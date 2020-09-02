#include <iostream>

using std::cout;
using std::endl;

int main(){
    //Declare Variables
    float a;
    float b;
    float sum;

    //Initilize
    a = 5.823;
    b = 10.123;

    //Declare and initialize in the same line
    // int i = 10;
    auto i = 10;

    //Compute the sum;
    sum = a + b;

    //Print string and sum
    cout << "Integer: " << i << endl; 
    cout << "The sum of: " << a <<  "and" << b << "is"  << sum << endl; 

    return 0;
}