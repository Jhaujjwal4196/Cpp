#include <iostream>
using namespace std;
#include "Student.cpp"
main(){
    Student *s1= new Student(20,4196,"Ujjwal",4187);
     
    //  s1->setAge(-20);
    //  s1->setRollNum(4196);
    //  s1->setName("Ujjwal");
    //s1->display();
    cout<<s1->getAge()<<endl;
    cout<<s1->getRegNo()<<endl;

  Student *s2= new Student(*s1);
  s2->display();


}