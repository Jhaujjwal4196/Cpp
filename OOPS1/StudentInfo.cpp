#include <iostream>
using namespace std;
#include "Student.cpp"
main(){
    Student *s1= new Student;
     
     s1->setAge(-20);
     s1->setRollNum(4196);
     s1->setName("Ujjwal");
    s1->display();


}