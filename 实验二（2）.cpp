（2）
#include<iostream>
using namespace std;
class student{
	string name;
	float score;
	static float total_score;
	static float count;
	public:
		student(string name1){
			name=name1;
		}
		void show(){
			cout<<"姓名："<<name<<endl;
			cout<<"成绩："<<score<<endl; 
		}
		void account(float score1){
			score=score1;
			total_score+=score;
			++count;
		}
		static float sum(){
			return total_score;
		}
		static float average(){
			return total_score/count;
		}
}; 
float student::total_score=0.0;
float student::count=0.0; 
int main()
{
	student s1("李明");
	s1.account(90); 
	s1.show();
	cout<<"---------------"<<endl;
	student s2("王红");
	s2.account(80);
	s2.show();
	cout<<"---------------"<<endl;
	cout<<"成绩总和："<<student::sum()<<endl;
	cout<<"平均成绩："<<student::average()<<endl;
	return 0;
}
