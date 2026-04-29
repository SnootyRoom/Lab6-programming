#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>

class Student
{
    private:
        std::string name;
        std::string surname;
        unsigned int studentId;
        std::vector<unsigned int> grades;
    
    public:
        Student(std::string name, std::string surname, unsigned int studentId);

        ~Student();

        void addGrade(unsigned int grade);

        float getAverage() const;

        void printInfo() const;


};

#endif