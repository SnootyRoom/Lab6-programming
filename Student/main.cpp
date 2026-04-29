#include "Student.h"
#include <iostream>
#include <random>


int main(int, char **)
{   
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    std::cout<<"Create student Oleg Sokolov id=37"<<std::endl;
    Student student1("Oleg", "Sokolov", 37);

    std::cout<<"Add grade 2 to student1"<<std::endl;
    student1.addGrade(2);

    std::cout<<"Student1 info"<<std::endl;
    student1.printInfo();

    std::cout<<std::endl;

    std::cout<<"Create student Artem Safin id=7"<<std::endl;
    Student student2("Artem", "Safin", 7);

    std::cout<<"Add 100 random grades for student2 in range (1, 100)"<<std::endl;

    for (unsigned int i = 0; i < 100; i++) student2.addGrade(distrib(gen));

    std::cout<<"Student2 info"<<std::endl;
    student2.printInfo();


    return 0;
}