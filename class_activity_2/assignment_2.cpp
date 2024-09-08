//
//  assignment_2.cpp
//  CIS25
//
//  Created by Minh Tran on 9/8/24.
//

#include "assignment_2.hpp"

#include <iostream>

int main(){
    int made = 95000;
    double estateTax = 0.04;
    double countyTax = 0.02;
    
    double totalEstateTax = made * estateTax;
    double totalCountyTax = made * countyTax;
    double totalTax = totalEstateTax + totalCountyTax;
    
    std :: cout << "Total Sales: $" << made << std :: endl;
    std :: cout << "Total Estate Tax: $" << totalEstateTax << std :: endl;
    std :: cout << "Total County Tax: $" << totalCountyTax << std :: endl;
    std :: cout << "Total Tax: $" << totalTax << std :: endl;
}
