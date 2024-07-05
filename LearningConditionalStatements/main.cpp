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
 /*
  // ******if and else *****************
    int time = 20;
    if (time < 18) {
      cout << "Good day.";
    } else {
      cout << "Good evening.\n";
    }
   // string result = (time < 18) ? "Good day." : "Good evening.";
   // cout << result
  
  
    // *********if elseif ***********
    int time = 2;
    if (time < 10) {
      cout << "Good morning.";
    } else if (time < 20) {
      cout << "Good day.";
    } else {
      cout << "Good evening.";
    }
 */
    
    
    // **************** SWITCH ***************
    int day = 4;
    switch (day) {
      case 1:
        cout << "Monday";
        break;
      case 2:
        cout << "Tuesday";
        break;
      case 3:
        cout << "Wednesday";
        break;
      case 4:
        cout << "Thursday";
        break;
      case 5:
        cout << "Friday";
        break;
      case 6:
        cout << "Saturday";
        break;
      case 7:
        cout << "Sunday";
        break;
    }
    
    
    return 0;
}
