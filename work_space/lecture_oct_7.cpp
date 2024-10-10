//
//  lecture_oct_7.cpp
//  CIS25
//
//  Created by Minh Tran on 10/7/24.
//

#include "lecture_oct_7.hpp"
#include <iostream>
using namespace std;

void increasePrice(double* price){
    *price *= 1.2;
}

int main(){
    double price = 100;
    increasePrice(&price);
    cout << price << endl;
    
    
    
    
    
    
    
    
    /*
    const int x = 10;
    const int* const ptr = &x;
    */
    
    /*
    int x = 10;
    int* ptr = &x;
    cout << *ptr << endl;
    
    int y = 30;
    *ptr = y; //or ptr = &y;
    cout << *ptr << endl;
    */
    
    
    /*
    int number = 10;
    cout << number << endl;
    cout << &number << endl;
    
    //pointers
    int* ptr = &number;
    cout << *ptr << endl;
     */
    
    return 0;
}


/*
int main(){
    int value[3] = {10, 20, 30};
    //int x = value[0];
    //int y = value[1];
    //int z = value[2];
    
    auto [x, y, z] = value;
    return 0;
}
*/
