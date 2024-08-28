#include <iostream>
#include <string>

struct Student {
    int id;
    std::string name;
    int age;
};

int main() {
    // Create 3 student structs using pointers
    Student* student1 = new Student{1001, "John Doe", 20};
    Student* student2 = new Student{1002, "Jane Smith", 21};
    Student* student3 = new Student{1003, "Bob Johnson", 19};

    // Print the student information
    std::cout << "Student 1:" << std::endl;
    std::cout << "ID: " << student1->id << std::endl;
    std::cout << "Name: " << student1->name << std::endl;
    std::cout << "Age: " << student1->age << std::endl << std::endl;

    std::cout << "Student 2:" << std::endl;
    std::cout << "ID: " << student2->id << std::endl;
    std::cout << "Name: " << student2->name << std::endl;
    std::cout << "Age: " << student2->age << std::endl << std::endl;

    std::cout << "Student 3:" << std::endl;
    std::cout << "ID: " << student3->id << std::endl;
    std::cout << "Name: " << student3->name << std::endl;
    std::cout << "Age: " << student3->age << std::endl << std::endl;

    // Clean up the dynamically allocated memory
    delete student1;
    delete student2;
    delete student3;

    return 0;
}