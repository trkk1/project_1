//
//  sort_grades.cpp
//  CIS25
//
//  Created by Minh Tran on 10/7/24.
//

#include "sort_grades.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace gradesAnalysis{
void sortGrades(vector<int>& grades, vector<string> & students) {
    for (size_t i = 0; i < grades.size(); ++i) {
        for (size_t j = i + 1; j < grades.size(); ++j) {
            if (grades[i] > grades[j]) {
                swap(grades[i], grades[j]);
                swap(students[i], students[j]);  // Swap names as well
            }
        }
    }
}
}
