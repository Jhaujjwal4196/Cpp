
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    int age;
    int rollNum;
    string name;

    protected:
    int regNo;
   
   public:
   Student(int age,int rollNum,string name, int regNo){
       this->age=age;
       this->rollNum=rollNum;
       this->name=name;
       this->regNo=regNo;
   }
   int getRegNo(){
       return regNo;
   }
   void setAge(int age){
   if (age<0){
       cout<<"Sorry You can't set the age below 0"<<endl;
       return;
   }
       this->age=age;
   }
   int getAge(){

       return age;
   }
   void setName(string name){
       
       this->name=name;
   }
   string getName(){
       return name;
   }
  void setRollNum(int rollNum){
      cout<<"please provide the password to perform this operation"<<endl;
      string a;
      cin>>a;
      if(a=="2580")
       this->rollNum=rollNum;
  else
  { cout<<"Sorry The Password provide is incorrect..you can't set This Roll number:"<<endl;
      return;}
}
  int getRollNum(){
      return rollNum;
  }
  void display(){
 cout<<"Age:\t"<<age<<endl;
 cout<<"Roll Number:\t"<<rollNum<<endl;
 cout<<"Name:\t"<<name<<endl;
  }
  
};