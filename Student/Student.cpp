#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>

Student::Student(std::string name, std::string surname, unsigned int studentId) : name(name), surname(surname), studentId(studentId) {}

Student::~Student() { std::cout << "Память для студента " << this->name << "освобождена" <<std::endl; }

void Student::addGrade(unsigned int grade) 
{ 
    if (grade >= 2 && grade <= 5) this->grades.push_back(grade);
}

float Student::getAverage() const 
{
    return std::accumulate(this->grades.begin(), this->grades.end(), 0.0) / grades.size();
}

void Student::printInfo() const
{   
    std::cout << std::left
              << std::setw(25) << "Name"
              << std::setw(25) << "Surname"
              << std::setw(15) << "Average grade"
              << std::endl;

    std::cout << std::left
              << std::setw(25) << this->name
              << std::setw(25) << this->surname
              << std::setw(15) << getAverage()
              << std::endl;
}