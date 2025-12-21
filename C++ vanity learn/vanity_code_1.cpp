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
///////////////////////////////////////////////// 1
_____________________________________________________________

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
////////////////////////////////////// 2
____________________________________________________________

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
/////////////////////////////////////////// 3
________________________________________________________

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
////////////////////////////////////////// 4
___________________________________________________________


#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer in range of under 100 : ";
    cin >> object;
    while(cin.fail()) {
        cout << "please enter an integer, try again : ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> object;
        }
    for(object ; object <= 100; object++) {
        cout << object << endl;
        }
}
////////////////////////////////////////////// 5
__________________________________________________________________

#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer in range of under 100 : ";
    cin >> object;
    while(cin.fail()) {
        cout << "please enter an integer, try again : ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> object;
        }
    if(object > 100) {
        cout << "please enter an integer under 100, try again : ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> object;
    }
    else {
        for(object ; object <= 100; object++) {
            cout << object << endl;
        }
    }
}
///////////////////////////////////////////// 6
___________________________________________________________________________

#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer in range of under 100 : ";
    cin >> object;
    while(cin.fail()) {
        cout << "please enter an integer, try again : ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> object;
        }
    while(object > 100) {
        cout << "please an integer that is under 100, try again : ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> object;
    }
    for(object ; object <= 100 ; object++) {
        cout << object << endl;
    }
}
/////////////////////////////////////////7-1
_______________________________________________________________________________

#include <iostream>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer in range of under 100 : ";
    cin >> object;
    while(cin.fail() || object > 100) {
        if(cin.fail()) {
            cout << "please enter an integer type of input, try again : ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> object;
        }
        else if(object > 100) {
            cout << "please enter and integer that is in range of under 100, try again : ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >>  object;
        }
        else {
            for(object ; object <= 100 ; object++) {
            cout << object << endl;
            }
        }
    }
    return 0;
}
/////////////////////////////////////////////////////////7-2
_______________________________________________________________________________________

#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer in range of under 100 : ";
    cin >> object;
    while(cin.fail() || object > 100) {
        if(object < 0 || object >= 100 || ) {
            for(object ; object <= 100 ; object++) {
            cout << object << endl;
            return 0;
            }
        }
        else if(object > 100) {
            cout << "please enter and integer that is in range of under 100, try again : ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >>  object;
        }
        else {
            cout << "please enter an integer type of input, try again : ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> object;
        }
    }
    return 0;
}
//////////////////////////////////////////////////////////////7-3
___________________________________________________________________________________

#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    int object;
    cout << "enter your starting integer in range of under 100 : ";
    cin >> object;
    while(cin.fail() || object > 100) {
        if(!(typeid(object).name() == i)) {
            cout << "please an integer type of input, try again : ";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> object;
        }
        else if(object > 100) {
            cout << "please enter an integer with value under 100, try again : ";
        } 
    }
    for(object ; object <= 100 ; object++) {
            cout << object << endl;
            return 0;
    return 0;
}
//////////////////////////////////////////////////////////7-4
_______________________________________________________________________________

#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main() {
    int object;
    cout << "please enter and integer with value under 100 : ";
    while(!(cin >> object) || object > 100) {
        if(object > 100){
            cout << "please enter an integer with value under 100, try again : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if(cin.fail()) {
            cout <<"please enter an integer type of input, try again : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    for(object ; object <= 100 ; object++) {
        cout << object << endl;
    }
    return  0;
}
/////////////////////////////////////////////7-5
