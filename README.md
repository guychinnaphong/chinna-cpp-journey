# chinna-cpp-journey
chinna's journey with learning C++ with sololearns, help of gpt 5 to find better way to code that i can apply to my project!

## EXPLAINING MY CODE

# RAW FIRST CODE
```cpp
#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer : ";
    cin >> object;
    for(object ; object <= 100 ; object++) {
        cout << object << endl;
    }
    return 0;
}
```
### FIRST CODE DESCRIPTION
this code us namespace std so i dont have to do ::std every time i typed code
i first declare int main() to start writing block of code, then declare "object" as integer type of data, next block of code "cout" give output "enter your starting integer : " then give user an input object to type in an integer, value of an object will be starting point for counting until value hit 100

RAW SECOND CODE
```cpp
#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer : ";
    cin >> object;
    if(cin >> object){
        for(object ; object <= 100 ; object++) {
        cout << object << endl;
        }
    }
    else {
        cout << "your input is not an integer please try again : ";
        cin.clear()
        cin(object.length(), ' ')
    }
    return 0;
}
```
### DESCRIPTION
also use namespace std so i dont have to type it again and again, first action is output "enter your starting integer : " then allow user to give input, the input will be assign to int type object called "object". after that i take object again but in if statement which killed some part of codes?, i want input to be starting point where it'll count until 100 and increase by 1 time per output (if input is 1 output will be like : 1, 2, 3, 4, 5... until 100 but with new line in every output).  after that i do else statement which will work once code above failed, it'll give output "your input is not an integer please try again", clear the input and then something (i probably did not finish this code at cin(object.length) part, my code did not work so there iis possible that code below this statement is fixed or attempt to fix this.

# RAW THIRD CODE

```cpp
#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer : ";
    cin >> object;
    while(object != 100) {
        if(!(cin >> object)){
            cout << "your input is not an integer please try again : ";
            cin.clear();
            cin.ignore(100, ' ');
        }
        else {
            for(object ; object <= 100 ; object++) {
            cout << object << endl;
            }
```
### DESCRIPTION
this code above also use namespace so i dont have to write ::std everytime again, first start off by declaring and integer type object called "object"  since this code is prob fixed verion of code above. then after i output "enter your starting integer : " and allow user to input value. after that i try doing loop with rule "if object is not equal to 100" for some reason. then follow up with if statement if input of object failed, output "your input is not an integer please try again : " then clear an input, ignore 100 character but stop at space bar " "
after that come with else statement which means that objectt passed if statement above, object will go in for loop. object will be starting number for counting in this for loop with rule of only allow loop to work when object is less than or equal to 100, object will increase by 1 per output (object++).... this code is also not finished so i made this finished verion below, it works perfectly fine just lack of polishing which make it looks bad


# FIX VERION OF RAW THIRD CODE ✅
```cpp
#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer : ";
    cin >> object;
    while(object != 100) {
        if(!(cin >> object)){
            cout << "your input is not an integer please try again : ";
            cin.clear();
            cin.ignore(100, ' ');
        }
        else {
            for(object ; object <= 100 ; object++) {
            cout << object << endl;
            }
        }
    }
}
```
### description
it works fine! just lack feature

# FOURTH RAW CODE
```cpp
#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer in range of 100 : ";
    while(!(cin >> object)) {
        cout << "Please enter an integer, try again : ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    for(object; object <= 100; object++) {
        cout << object << endl;
    }
    return 0;
}
```
### FOURTH CODE DESCRIPTION
1. i use namespace std not to type ::std multiple time
2. i declare int main() to start writing code
3. i declare object called "object" as a name, type is integer
4. i output "enter your starting integer in range of 100 : "
5. i give
