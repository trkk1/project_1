//
//  assignment_16.cpp
//  CIS25
//
//  Created by Minh Tran on 10/7/24.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function to sort students
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

// Function to sort grades
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

int main() {
    vector<string> students = {"Alice", "Bob", "Charlie", "David", "Eve"};
    vector<int> grades = {85, 92, 78, 90, 88};
    
    // Sort students and grades
    sortStudents(students, grades);
    sortGrades(grades, students);

    // Calculate average, highest, and lowest grades
    double sum = 0;
    int highest = grades[0];
    int lowest = grades[0];

    for (int grade : grades) {
        sum += grade;
        if (grade > highest) highest = grade;
        if (grade < lowest) lowest = grade;
    }

    double average = sum / grades.size();

    // Output results
    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;
    cout << "Students above average:" << endl;

    for (size_t i = 0; i < grades.size(); i++) {
        if (grades[i] > average) {
            cout << students[i] << endl;
        }
    }

    return 0;
}
