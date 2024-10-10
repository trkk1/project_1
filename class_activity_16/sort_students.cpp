//
//  sort_students.cpp
//  CIS25
//
//  Created by Minh Tran on 10/7/24.
//

#include "sort_students.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function to sort students
namespace gradesAnalysis {
void sortStudents(vector<string> & students, vector<int>& grades) {
    for (size_t i = 0; i < students.size(); ++i) {
        for (size_t j = i + 1; j < students.size(); ++j) {
            if (students[i] > students[j]) {
                swap(students[i], students[j]);
                swap(grades[i], grades[j]);  // Swap grades as well
            }
        }
    }
}
}
