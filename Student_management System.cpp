#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
		public:
			Person(){
			cout<<"Welcome to Student Management System:"<<endl;
			}
			Person(string n,int a){
				name=n;
				age=a;
			}
			void inputPerson(){
				cout<<"Enter Student name:";
				cin>>name;
				cout<<"Enter age:";
				cin>>age;
			}
			void displayPerson(){
				cout<<"Student name is:"<<name<<endl;
				cout<<"Age is:"<<age<<endl;
			}
			~Person(){
				cout<<"Person Destructor called:"<<endl;
			}
};
class Student:public Person{
	private:
		int roll_no;
		string department;
		int semester;
		float marks;
		public:
			Student(){
				cout<<"Welcome to Student class:"<<endl;
			}
			Student(int r,string d){
				roll_no=r;
				department=d;
				semester=0;
				marks=0;
			}
			Student(string n,int a,int r,string d,int s,float m):Person(n,a){
				roll_no=r;
				department=d;
				semester=s;
				marks=m;
			}
			void inputStudent(){
				inputPerson();
				cout<<"Enter roll_no:";
				cin>>roll_no;
				cout<<"Enter department:";
				cin>>department;
				cout<<"Enter semester:";
				cin>>semester;
				cout<<"Enter marks:";
				cin>>marks;
				}
				void displayStudent(){
					displayPerson();
					cout<<"Roll_no is:"<<roll_no<<endl;
					cout<<"Department is:"<<department<<endl;
					cout<<"Semester is:"<<semester<<endl;
					cout<<"Marks is:"<<marks<<endl;
					
					cout<<"Grade:";
					if(marks>=80){
						cout<<"Grade A"<<endl;
					}
					else if(marks>=70){
						cout<<"Grade B"<<endl;
					}
					else if (marks>=60){
						cout<<"Grade C"<<endl;
					}
					else if(marks>=50){
						cout<<"Grade D"<<endl;
					}
					else{
						cout<<"Fail"<<endl;
					}
				}
				void calculateGrade(){
					cout<<"Student Grade is:";
					if(marks>=80){
						cout<<"Grade A"<<endl;
					}
					else if(marks>=70){
						cout<<"Grade B"<<endl;
					}
					else if (marks>=60){
						cout<<"Grade C"<<endl;
					}
					else if(marks>=50){
						cout<<"Grade D"<<endl;
					}
					else{
						cout<<"Student is Failed:"<<endl;
					}
				}
				void calculateFee(){
					cout<<"Total AI Fee = 55000"<<endl;
				}
				void calculateFee(float fee){
					cout<<"Total fee = "<<fee<<endl;
				}
				void calculateFee(float fee,float scholarship){
					cout<<"Fee after scholarship=(fee-scholarship)"<<endl;
				}
				~Student(){
					cout<<"Student destructor is called:"<<endl;
				}
				
};
int main(){
	Student s;
	int choice;
	do{
		cout<<"---WELCOME TO STUDENT MANAGEMENT SYSTEM---"<<endl;
		cout<<"1.Add Student"<<endl;
		cout<<"2.Display Student Information"<<endl;
		cout<<"3.Calculate Grade"<<endl;
		cout<<"4.Calculate Fee"<<endl;
		cout<<"5.Exit"<<endl;
		
		cout<<"Enter your choice:"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				s.inputStudent();
				break;
			case 2:
				s.displayStudent();
				break;
			case 3:
				s.calculateGrade();
				break;
				case 4:
			{
				int feechoice;
				cout<<"---FEE MENU---"<<endl;
				cout<<"1.Default Fee"<<endl;
				cout<<"2.Fee with Amount"<<endl;
				cout<<"3.Fee with Scholarship"<<endl;
				cout<<"Enter you feechoice:";
				cin>>feechoice;
				if(feechoice==1){
					s.calculateFee();
				}
				else if(feechoice==2){
				float fee;
				s.calculateFee(fee);
				}
				else if(feechoice==3){
					float fee,scholarship;
					cout<<"Enter Fee:";
					cin>>fee;
					cout<<"Enter Scholarship:";
					cin>>scholarship;
					s.calculateFee(fee,scholarship) ;
				}
				else{
					cout<<"Invalid Feechoice:"<<endl;
					break;
				}
			}
			case 5:
				cout<<"Program Ended Successfully."<<endl;
				break;
				default:
				cout<<"Invalid Choice:"<<endl;
		}
	}
	while(choice!=5);
	return 0;
}
