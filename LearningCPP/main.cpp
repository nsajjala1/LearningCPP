//
//  main.cpp
//  LearningCPP
//
//  Created by Narendranatha Sajjala on 7/4/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    cout << " Hello, welcome to Arjun's carpet cleaning service \n";
    int small_rooms {0};
    int big_rooms {0};
    cout << "How many small rooms would you like cleaned?  ";
    cin >> small_rooms;
    cout << "How many big rooms would you like cleaned?  ";
    cin >> big_rooms;
    const double small_price {25};
    const double big_price {35};
    const double tax {0.06};
    cout << "\n====================================" << endl;
    cout << "Estimation for carpet cleaning service \n";
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of big rooms: " << big_rooms << endl;
    
    double cost = (small_price * small_rooms) + (big_price * big_rooms);
    double total_tax = cost * tax;
    cout << "Cost : $" <<  cost << endl;
    cout << "Tax : $" << total_tax << endl;
    cout << "====================================" << endl;
    cout << " total estimate is $" << cost + total_tax << endl;
    cout << "this estimate is valid for 30 days  " << endl;
    return 0;
}
