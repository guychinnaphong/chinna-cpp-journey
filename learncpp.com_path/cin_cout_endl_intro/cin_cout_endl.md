# INTRODUCTION TO IOSTREAM, CIN, COUT and ENDL

iostream was a C++ library which use for  getting input, output which can be wrote as <br>
<br>
```#include <iostream> ``` <br>
<br>
and function which come with this library is <br>
<br>
```std::cin``` which use for getting input from user <br>
```std::cout``` which use for getting output from user <br>
```std::endl``` which use for ending a line to start new line <br>
<br>

```cpp
#include <iostream> // for std::cout

int main()
{
    std::cout << "Hello world!"; // print Hello world! to console

    return 0;
}
```
output : <br>
<br>

```cpp
Hello world!
```

int main() {} is being use to start all line of main code other than just pure set up <br>
example code above will print out "Hello world!" on console <br>
also use return 0; so C++ code will end properly! <br>
<br>
you can also print out number using cout function, not just string! with example below <br>
<br>

```cpp
#include <iostream> // for std::cout

int main()
{
    std::cout << 4; // print 4 to console

    return 0;
}
```

output :
```cpp
4
```

you can also print out variable! <br>
<br>
```cpp
#include <iostream> // for std::cout

int main()
{
    int x{ 5 }; // define integer variable x, initialized with value 5
    std::cout << x; // print value of x (5) to console
    return 0;
}
```

output : <br>
<br>
```cpp
5
```

you can also print multiple of them <br>
<br>
```cpp
#include <iostream>

int main() {
    int bro{67};
    std::string bwawa{"bwawa"};
    std::cout << bro << bwawa;
    return 0;
}
```

output will be : <br>
<br>
```cpp
67bwawa
```
 or using different type of variable but with same output <br>
 <br>
 ```cpp
#include <iostream>

int main() {
    std::cout << 67 << "bwawa";
    return 0;
}
```

because this is not python the output will not start new line after 1 output!  <br>
<br>
we can also try to format the output better by outputing string first before actual value! <br>
<br>
```cpp
#include <iostream>

int main() {
    std::string game{"among us"};
    std::cout << "most influential game in 2020 is : " << game;
    return 0;
}
```
output <br>
<br>
```cpp
most influential game in 2020 is : among us
```

as you can see the thing will look better! <br>
and incase if you want new line, because 2 input will not be seperate by line in C++ you can also use ```std::endl``` to end current line and start new one below! <br>
<br>
```cpp
#include <iostream>

int main() {
    std::string game{"among us"};
    std::cout << "most influential game in 2020 is... " << std::endl << game;
    return 0;
}
```

output will be... <br>
<br>
```cpp
most influential game in 2020 is...
among us
```

you also should use std::endl everytime output is use because it's good habit! <br>
<br>
### std::cout is buffered 
i dont exactly remember but i think i've saw buffer in my logic gate class? learncpp said that the code on complier goes to (wait in line part) or memory part called buffer before going to it's destination (console or terminal) <br>
prob cuz computer work by writing things in memory? probably!  also flushed buffer meant that all the code waiting in buffer reached console or terminal <br>
<br>
### Writing data to a buffer is typically fast, whereas transferring a batch of data to an output device is comparatively slow. Buffering can significantly increase performance by batching multiple output requests together to minimize the number of times output has to be sent to the output device. ###

<br>

which mean that use of std::endl can be slow since it flushed buffer so we have alternative of using ``` '\n' ```
<br>

```cpp
#include <iostream>

int main() {
    std::string fruit{"banana"};
    std::cout << "most delicious fruit is..." << '\n' << fruit;
    return 0;
}
```

output will be <br>
<br>
```cpp
most delicious fruit is...
banana
```

we also use ' ' for single character for '\n' and " " for string/text <br>
<br>

### CIN
we use cin to get input from user and wether an input will be valid is about it's type
whether default type of data when it was declared is string, int, float, double or etc. an input have to be the same type as original variable and if not then it will be invalid

```cpp
#include <iostream>

int main() {
    int input_number;
    std::cout << "please enter your favourite number : ";
    std::cin >> input_number;
    std::cout << "your favourite number is : " << input_number;
    return 0;
}
```
### make sure to not confuse between cout << and cin >> (different direction thingy)(<<) and (>>)
if i enter a number output will be valid like this <br>
<br>
```cpp
please enter your favourite number : 67
your favourite number is : 67
```

this works because input (67) is actually the same type of data and original variable (int) but if not then C++ complier will give you total gibberish error <br>
you can also do multiple input in one line but i wont gonna give example cuz this took too much of my time! <br>

### cin is also buffered

```cpp
#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers: ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}
```

<br>
<br>
<br>
<br>


sorry this progress is not a halt because writing all these took 2 danm hours out of my life, i can NOT do these during whole course progress since i WILL ran out of time. i have like 9 months left before uni at current date so i dont have much time to spare! sorry for inconvenience

you can find all the course detail at https://www.learncpp.com/ <br>
whole thing is filled with ads but it teachs you down to hardware and not just software. yk good programmer need to know hardcare to have effective code so this is a really good source to learn from. i'll still continue my practice progress tho!
