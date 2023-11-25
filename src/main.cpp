//
// Created by Maikol Guzman on 22/11/23.
//
#include <iostream>
#include <cstdlib>
#include "Student.h"

/*!
 * \mainpage Technical documentation of the example.
 * \section buildingproject Building the Project
 *
 * \subsection step1 Creating a Build Directory
 *
 * It's a good practice to do an out-of-source build. This keeps your build files separate from your source files.
 * \code{.sh}
 * mkdir build
 * cd build
 * \endcode
 * \subsection step2 Running CMake
 * From within the build directory, run CMake to generate the build system.
 *
 * \code{.sh}
 * cmake ..
 * \endcode
 *
 * \subsection step3 Compiling the Project
 * After CMake has done its job, you can use the generated build system to compile the project.
 *
 * \code{.sh}
 * make
 * \endcode
 * This will compile your project and generate an executable in the build directory.
 *
 * \section references References
 *
 * <a href="https://github.com/una-eif201-progra1-master/dev.funda.basic-classes.objects.2">Github repository of the example</a>
 *
 * \date 2021-11-23
 * \author Maikol Guzman Alan
 * \copyright <a href="https://mikeguzman.dev/">mikeguzman.dev</a>
 *
 * \file main.cpp
 * \brief The main.cpp file contains the entry point of the program.
 */

int main() {
    system("clear");
    std::cout << "Universidad Nacional de Costa Rica - www.mikeguzman.dev" << std::endl;

    Student student("Alice", 20); // Creating an object

    student.display(); // Direct access to public method

    std::cout << "Student's initial age: " << student.getAge() << std::endl; // Indirect access to private attribute

    student.setAge(21); // Indirect access to modify private attribute
    student.display(); // State of the object is now changed


    std::cout << std::endl;
    return 0;
}