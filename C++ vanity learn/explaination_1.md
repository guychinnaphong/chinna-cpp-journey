# EXPLAINING MY CODE

this is an attempt to make functionality code which will start counting to 100 as user desired, if user enter 5 output should count from 5 to 100 <br>

<br>

#include < iostream > is used for to start writing c++, also use to install some stuff. it's like setting up a back stage to prepare for show but instead you built some software <br>

<br>

int main() {} used for actual code writing and not setting up evironment <br>

<br>

using namespace std so i dont have to write std:: over and over again, though shouldn't be in big project <br>

<br>

'\n' use to start new line <br>

<br>

endl or std::endl use to start new line <br>

<br>

i was doing practice on sololearn and starts questioning my knowledge... so i began wandering out with gpt 5 to find various ploblem set to do so i will absorbs knowledges into my brain and these are attempt to do random function of code, somes broken but some actually worked!  


### please correct me if im wrong on any of these im still a beginner, thanks! <br>
<br>
_________________________________________________________________________________________ 

<br>

## RAW 1st CODE
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
<br>

### 1st CODE OPERATION
<br>
<br>

"this code us namespace std so i dont have to do ::std every time i typed code
i first declare int main() to start writing block of code, then declare "object" as integer type of data, next block of code "cout" give output "enter your starting integer : " then give user an input object to type in an integer, value of an object will be starting point for counting until value hit 100" <br>

<br>

1. i declared int main() to start writing codes <br>
2. i declare object as int <br>
3. output "enter your starting integer:" <br>
4. give user ability to input value using std::cin (shortend to cin) <br>
5. if input value is integer that is less than 100 it'll be starting point to count to 100 <br>
<br>
<br>

__+ use namespace std to shorten std:: part__ ✅ <br> 
_- C++ will raise error if enter any other type of data than integer_ ❌ <br>
*- code will be executed but no output if value is __more or equal to 100__* ❌ <br>
<br>
<br>
code worked fine 🔥 <br>

### 1st verion with std:: <br>

```cpp
#include <iostream>

int main() {
    int object;
    std::cout << "enter your starting integer : ";
    std::cin >> object;
    for(object ; object <= 100 ; object++) {
        std::cout << object << std::endl;
    }
    return 0;
}
```

______________________________________________________________________________________



## RAW 2nd CODE
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
### 2nd CODE OPERATION
"also use namespace std so i dont have to type it again and again, first action is output "enter your starting integer : " then allow user to give input, the input will be assign to int type object called "object". after that i take object again but in if statement which killed some part of codes?, i want input to be starting point where it'll count until 100 and increase by 1 time per output (if input is 1 output will be like : 1, 2, 3, 4, 5... until 100 but with new line in every output).  after that i do else statement which will work once code above failed, it'll give output "your input is not an integer please try again", clear the input and then something (i probably did not finish this code at cin(object.length) part, my code did not work so there iis possible that code below this statement is fixed or attempt to fix this."



1. i output "enter your starting integer : "
2. i gave user ability ti enter input value
3. input assigned to int object called "object"
4. take input again but in an if statement
5. for loop "start at value of an object ; only work when value of an object is below to equal to 100 ; object add 1 to itself each time looped" as statement and output object AND "endl" command to start new line of code
6. else line of code started when if part failed
7. output "your input is not an integer please try again : "
8. clear input cache?
9. tried to use .length() function which and " " as stop point (it is supposed to be use with cin.ignore() but i forgot



_this is hell of a mess 💔_



 **+ use namespace std so i dont have to type std::** ✅  
 *- start 2 input command because i thought the cin part doesn't work when it's in if function* ❌  
 *- there's not proper loop, for loop in this case is in if else function which cause it not to work at all, no output until user enter input again* ❌  
 *- on else function code wont work because it's invalid, i forgot to add cin.ignore part which will appear later on* ❌  
 *- no ; part caused whole things to die* ❌  
 *- there's no while loop which means that on else part function will just end there, no re-input* ❌  



 **and i learned**
 - cin part will work even in if statement  
 - to get my loop to take input over and over again until it's right i have to use while loop  
 - for loop in this case works fine but need second input to be filled, accept only integer and if it's not then straight to else part  
 - i have to take a little break during coing or else my brain will completely fried  
 - i have to put semicolon after every single line or my code will start speaking gibberish  
 - without while loop my code wont let user enter input value again  

______________________________________________________________________________________________________________________________

# RAW 3rd CODE

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
### 3rd CODE OPERATION
this code above also use namespace so i dont have to write ::std everytime again, first start off by declaring and integer type object called "object"  since this code is prob fixed verion of code above. then after i output "enter your starting integer : " and allow user to input value. after that i try doing loop with rule "if object is not equal to 100" for some reason. then follow up with if statement if input of object failed, output "your input is not an integer please try again : " then clear an input, ignore 100 character but stop at space bar " "
after that come with else statement which means that objectt passed if statement above, object will go in for loop. object will be starting number for counting in this for loop with rule of only allow loop to work when object is less than or equal to 100, object will increase by 1 per output (object++).... this code is also not finished so i made this finished verion below, it works perfectly fine just lack of polishing which make it looks bad



1. declaring int object called "object"  
2. output "enter your starting integer : "  
3. allow user to enter input value
4. do loop which only true when object is not equal to 100
5. under loop if statement which i take input again "if process of taking input failed"
6. output "your input is not an integer please try again : "
7. clear input value cache?
8. ignore 100 character behind limiter " " part (which supposed to be '\n' due to input taking nature)
9. else statement
10. under else statement is for loop stated "starting point is accorded to "object" input value; only works when "object" value is under or equal to 100; add up +1 per loop

    

*this is not a mess but i have to go on a bus so it wasn't finished and a little broken ❤️‍🩹* 



**+ improvement from 2nd code, attempting to fix code by using while loop** ✅   
*- take 2 input because i still haven't realized it's wrong* ❌  
*- cin.ignore() part wont work normally (probably) becauuse it wasn't '\n' which cause output terminal to have big gap per message* ❌  
*- no output because for loop part was never put to work. because it's in while loop with statement "this loop only work if value of "object" is not equal to 100 >>> **valid input never enter the loop due to such statement*** ❌  



**after 3rd code i learned**  
- in this case never put for loop in else part because input will never be processed due to statement of while loop  
- i have to stop taking 2 inputs  
- i have to use '\n' instead of " " to make input terminal look cleaner  



# ATTEMPT TO FIX VERION OF RAW 3rd CODE 
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
### DESCRIPTION
it isn't fixed fully

*output terminal when you attempt to input actual number under 100*
```cpp
enter your starting integer : 5
5
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
```
* note that output went normally from starting point to 100
### what's wrong?
1. you have to enter input 2 times in order to get code working

   

# 4th RAW CODE
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
### 4th CODE OPERATION
1. i use namespace std not to type ::std multiple time <br>
2. i declare int main() to start writing code <br>
3. i declare object called "object" as a name, type is integer <br>
4. i output "enter your starting integer in range of 100 : " <br>
5. i wrote while loop with have statement which... is statement but also allow user to enter input. "i allowed user to  input a value which have to be same type as variable i use (in this case int or integer), if process failed i'll proceed the looping operation and if not. you can go through to for loop below" <br>
6. if input value error occur while loop will output "Please enter an integer, try again : "  <br>
7. while loop will clear input terminal with cin.clear() <br>
8. cin.ignore() will ignore all input data until '\n' (a way to start new line) <br>
9. loop go back to while loop's statement and allow user to input value again <br>
10. if input value is valid (in this case value must be type integer like "object" variable which we assign it to take input value) code will not run the while loop part because it is false in loop's statement <br>
11. for loop statement "loop will start at value of "object" variable; loop will only work if value of "object" is less than or equal to 100; object will add itself up by 1 in each loop" <br>
12. after for loop statement loop will output value of variable "object"  that point of the loop <br>
13. after all operation is done everything will end at return 0; <br>
<br>
<br>
*this code worked at best performance i can think of right now! 🔥❤️* <br>
<br>
**+ EVERYTHING WAS FIXED AND ALL OPERATIONAL AS OBJECT REQUIRES** ✅ <br>
**+ no more input 2 times due to inexperience** ✅ <br>
**+ while loop worked properly** ✅ <br>
**+ if value is right (is an integer or int in this case) while loop will not work and code operation will skip dircetly to counting process (for loop part)** ✅ <br>

