//
//  main.cpp
//  Test2
//
//  Created by Narendranatha Sajjala on 7/5/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    string str;

/**    while(str != "quit"){
        cout << "Enter a name (or type quit to exit) " << endl ;
        getline(cin,str);
        cout << "You Entered < " << str << " >" << endl;
    }
**/
/**    int number = 9;
    while (number > 10){
        cout << number << endl;
        number --;
    }
    cout << "\n \n \n " << endl;
    number = 9;
    do{
        cout << number << endl ;
        number --;
    }while(number > 10);
 **/
    int i, j;
    for(i=0; i<6; i++){
        for(j=0; j<i; j++){
            cout << "*" ;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
