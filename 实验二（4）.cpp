#include<iostream>
#include<cstring>
using namespace std;
class Date{
	private:
		int year,month,day;
	public:
		Date(){}
		Date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		void input(){
			cout<<"出生日期：";   cin>>year>>month>>day;
		}
		void output(){
			cout<<"出生日期："<<year<<"年"<<month<<"月"<<day<<"日"; 
		}
};
class Person{
	private:
		char id[19];
		string name,sex;
		Date birthday;
	public:
		Person(){}
		Person(int y,int m,int d,char i[19],string n,string s):birthday(y,m,d){
			strcpy(id,i);
			name=n;
			sex=s;
		}
		void input(){
			cout<<"录入数据："<<endl;
			cout<<"编号：";   cin>>id;
			cout<<"姓名：";   cin>>name;
			cout<<"性别（男/女）：";   cin>>sex;
			birthday.input(); 
		}
		void output(){
			cout<<"----------\n显示人员信息："<<endl;
			cout<<"编号："<<id<<endl;
			cout<<"姓名："<<name<<endl;
			cout<<"性别："<<sex<<endl;
			birthday.output();
		}
		
};
int main(){
	Person p1;
	p1.input();
	p1.output();
	return 0;
}
