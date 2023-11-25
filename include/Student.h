//
// Created by Maikol Guzman on 25/11/23.
//

#ifndef MAIN_STUDENT_H
#define MAIN_STUDENT_H

#include <iostream>
#include <string>

/*!
 * \class Student
 * \brief The Student class represents a student.
 */
class Student {
private:
    std::string name; // Attribute (Encapsulation)
    int age; // Attribute (Encapsulation)

public:
    // Constructor (Method for initialization)
    Student(std::string n, int a) : name(n), age(a) {}

    // Method to display student info (Abstraction)
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Getter (Indirect access to private attribute)
    int getAge() const {
        return age;
    }

    // Setter (Indirect access to private attribute)
    void setAge(int a) {
        if (a > 0) {
            age = a;
        }
    }

    // Additional methods can be added here...
};

#endif //MAIN_STUDENT_H
