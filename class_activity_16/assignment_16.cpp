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

// Function to sort students
void sortStudents(std::vector<std::string>& students, std::vector<int>& grades) {
    for (size_t i = 0; i < students.size(); ++i) {
        for (size_t j = i + 1; j < students.size(); ++j) {
            if (students[i] > students[j]) {
                std::swap(students[i], students[j]);
                std::swap(grades[i], grades[j]);  // Swap grades as well
            }
        }
    }
}

// Function to sort grades
void sortGrades(std::vector<int>& grades, std::vector<std::string>& students) {
    for (size_t i = 0; i < grades.size(); ++i) {
        for (size_t j = i + 1; j < grades.size(); ++j) {
            if (grades[i] > grades[j]) {
                std::swap(grades[i], grades[j]);
                std::swap(students[i], students[j]);  // Swap names as well
            }
        }
    }
}

int main() {
    std::vector<std::string> students = {"Alice", "Bob", "Charlie", "David", "Eve"};
    std::vector<int> grades = {85, 92, 78, 90, 88};
    
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
    std::cout << "Average grade: " << average << std::endl;
    std::cout << "Highest grade: " << highest << std::endl;
    std::cout << "Lowest grade: " << lowest << std::endl;
    std::cout << "Students above average:" << std::endl;

    for (size_t i = 0; i < grades.size(); i++) {
        if (grades[i] > average) {
            std::cout << students[i] << std::endl;
        }
    }

    return 0;
}
