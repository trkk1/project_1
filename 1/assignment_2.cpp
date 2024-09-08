//
//  assignment_2.cpp
//  CIS25
//
//  Created by Minh Tran on 9/8/24.
//

#include "assignment_2.hpp"

#include <iostream>

int main(){
    double made = 95000;
    double estateTax = 0.04;
    double countyTax = 0.02;
    
    double totalEstateTax = made * estateTax;
    double totalCountyTax = made * countyTax;
    double totalTax = estateTax + countyTax;
    
    std :: cout << "Total Sales: $" << made << "\n";
    std :: cout << "Total Estate Tax: $" << totalEstateTax << "\n";
    std :: cout << "Total County Tax: $" << totalCountyTax << "\n";
    std :: cout << "Total Tax: $" << totalTax << "\n";
    
}
