//
//  assignment_18.cpp
//  CIS25
//
//  Created by Minh Tran on 10/7/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//swap with a pointer
void compareInt(int arrayIntegers[], int n){
    for (int i = 0; i < n; i++){
        if (arrayIntegers[i] < arrayIntegers[i + 1]){
            swap(arrayIntegers[i], arrayIntegers[i + 1]);
        }
    }
}

int main(){
    int arrayIntegers[] = {6, 3, 28, 9, 30, 1};
    int n = sizeof(arrayIntegers)/sizeof(arrayIntegers[0]);
    cout << result << endl;
    return 0;
   
    
}
