//
//  main.cpp
//  LearningConditionalStatements
//
//  Created by Narendranatha Sajjala on 7/5/24.
//

#include <iostream>
using namespace std ;
int main(int argc, const char * argv[]) {
    // insert code here...
 
  // ******if and else *****************
    int time = 20;
    cout << " IF ELSE statement " << endl ;
    if (time < 18) {
      cout << "Good day."<<endl;
    } else {
      cout << "Good evening. "<<endl;
    }
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result <<endl;
  
  
    // *********if elseif ***********
    cout << "if and elsif statement " << endl ;
    if (time < 10) {
      cout << "Good morning."<<endl;
    } else if (time < 20) {
      cout << "Good day."<<endl;
    } else {
      cout << "Good evening."<<endl;
    }
 
    
    
    // **************** SWITCH ***************
    cout << "SWITCH STATEMENT \n" ;
    int day = 4;
    switch (day) {
      case 1:
        cout << "Monday" <<endl;
        break;
      case 2:
        cout << "Tuesday"<<endl;
        break;
      case 3:
        cout << "Wednesday"<<endl;
        break;
      case 4:
        cout << "Thursday"<<endl;
        break;
      case 5:
        cout << "Friday"<<endl;
        break;
      case 6:
        cout << "Saturday"<<endl;
        break;
      case 7:
        cout << "Sunday"<<endl;
        break;
    }
    
    
    // ********** WHILE loop ***********
    cout << "while loop "<<endl ;
    int i = 0;
    
    while (i < 5) {
      cout << i << "\n";
      i++;
    }
    
    
    cout<<"do while loop";
    i=0;
    do {
      cout << i << "\n";
      i++;
    }
    while (i < 5);
    
    
    
    return 0;
}
