// Comment syntax similar to javascript
#include <iostream>

// white-space lines have no effect on the program
int main() {
  std::cout << "Hello World!";
}
/*
lines starting with a hash sign are directives read and
interperated by a preprocesser, these special lines are interperated
before the compilation of the program is run.

int main()
this line initiates the declartion of a function, 
the function main() is a special function,
it is the function that is called when the program is run,
The execution of all c++ programs begins with the main function
regardless of where the function is actually located in the code

for loop syntax 

for (init; condition; increment) {
    statement(s);
}
*/

using namespace std;

int loop() {
    // for loop execution
    for (int a = 10; a < 20; a = a + 1) {
        cout << "value of a: " << a << endl;
    }
    return 0;
}
// functions can be written inline,
// whitespace doesn't effect how the function gets ran
// so the next functions will do the same thing
int oneLine () { std::cout << " Hello World! "; std::cout << " I'm a C++ program "; }

int multipleLine() {
    cout << "Hello World";
    cout << "I'm a c++ program";
}