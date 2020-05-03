#include<iostream>
using namespace std;
class Car{
	char color[10];
	float speed;
	public:
		void Input(){
			cout<<"Enter the color：";   cin>>color;
			cout<<"Enter the speed：";   cin>>speed;
		}
	friend void Output(Car &);
};
void Output(Car &c){
	cout<<"------------\n输出结果为："<<endl;
	cout<<"color："<<c.color<<endl;
	cout<<"speed："<<c.speed<<endl;
}
int main(){
	Car car;
	car.Input();
	Output(car);
	return 0;
}
