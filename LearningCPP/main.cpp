//
//  main.cpp
//  LearningCPP
//
//  Created by Narendranatha Sajjala on 7/4/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int age = 2;
    cout << "the age entered is " << age << endl;
    if(age > 64 ){
        cout << " You are old" << endl;
    } else if (age > 19){
        cout << " You are an adult " << endl;
    } else if (age > 12)
        cout << " you are a teen" << endl;
    else if ( age > 5)
        cout << "You are a child" << endl;
    else if ( age > 2)
        cout << " you are a toddler" << endl;
    else
        cout << "you are infant" << endl;
    
    
    cout << " Below is switch statement example \n";
    int day = 9;
    switch (day){
        case 1:
            cout << "Monday"<< endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout <<"Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "enter a number 1-7" << endl;
    }
    
    
    return 0;
}
