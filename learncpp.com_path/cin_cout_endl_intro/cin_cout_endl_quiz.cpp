#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    return 0;
}

_________________________________________________________________________________________________________

question 1 : enter a character for example "h"

output is 0. input character will stuck in buffer until next input or until cleared. C++ will output value 0 instead
______________________________________________________________________________________________________________

question 2 : try fraction number less than 0.5 and more than 0.5

input is 7.6, output is 7
input is 7.1, output is 7
both rounded up or down to be an integer

________________________________________________________________________________________________________________

question 3 : try small negative integer

input is -7 output is -7. it's an integer
  
_______________________________________________________________________________________________________________

question 4 : try a word

input is  "luna" output is also 0 like question 1

_______________________________________________________________________________________________________________

question 5 : try a really big number (atleast 3 billions)

input is 67676767676767676767676767676767676767676767676767676776767676767676767676767676 output is 2147483647
co pilot said that it's biggest number in modern 32 bits input something idk

________________________________________________________________________________________________________________

question 6 : A small number followed by some letters

input is 678malaysia, output is 678. malaysia part prob stuck in buffer

_________________________________________________________________________________________________________________

question 7 : A few letters followed by a small number, such as abc123

input is brochato199, output is 0. system prob thought that whole thing is a string so they're still in buffer

__________________________________________________________________________________________________________________

question 8 : +5 (three spaces, followed by a plus symbol, and a 5).

input is    +5, output is 5 cuz complier dont like spacebar?

__________________________________________________________________________________________________________________











Question #2

Ask the user to enter three values. The program should then print these values. Add an appropriate comment above function main().

The program should match the following output (when run with input values 4, 5, and 6):

Enter three numbers: 4 5 6
You entered 4, 5, and 6.

__________________________________________________________________________________________________________________


// usually when you're getting multiple input, after one input and whole thing will start line which is opposite of my object, so instead of entering 3 individual input rather. i entered 3 at first input seperated by spacebar. due to c++ system only the first first number be extracted to variable x, after that second and third number will stuck in buffer but since there's more input. these 2 number were sent into variable y and z seperately. because it is seperated by spacebar which is why it doesn't fall down into one number
// after that i just output things and done! exact same format as the question
#include <iostream>
int main() {
    int x;
    int y;
    int z;
    std::cout << "Enter three numbers: ";
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << '.' << std::endl;
    return 0;
}



##### example console if i enter "67 61 69" at once on first input

Enter three numbers: 67 61 69
You entered 67, 61, and 69.

-_________________________________________________________________________



  the answer is quite accurate. this is example answer of code that i should've output





  #include <iostream>

// Asks the user to enter three values and then print those values as a sentence.
int main()
{
    std::cout << "Enter three numbers: ";

    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

    return 0;
}









// it works the same!


