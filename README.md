# chinna-cpp-journey
chinna's journey with learning C++ with sololearns, help of gpt 5 to find better way to code that i can apply to my project!

## EXPLAINING MY CODE

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

this code us namespace std so i dont have to do ::std every time i typed code
i first declare int main() to start writing block of code, then declare "object" as integer type of data, next block of code "cout" give output "enter your starting integer : " then give user an input object to type in an integer, value of an object will be starting point for counting until value hit 100


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
