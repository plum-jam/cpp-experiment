#include<iostream>
using namespace std;
class CPU{
	char rank;
	int frequency;
	float voltage;
	public:
		CPU(char r,int f,float v){
			rank=r;
			frequency=f;
			voltage=v;
			cout<<"构造一个CPU"<<endl;
		}	
		~CPU(){
			cout<<"析构一个CPU"<<endl;
		}
		char GetRank(){
			return rank;
		}
		int GetFrequency(){
			return frequency;
		}	
		float GetVoltage(){
			return voltage;
		}
		void SetRank(char r){
			rank=r;
		}
		void SetFrequency(int f){
			frequency=f;
		}
		void SetVoltage(float v){
			voltage=v;
		}
	
		void Run(){
			cout<<"CPU开始运行！"<<endl;
			cout<<"等级："<<rank<<endl;
			cout<<"频率："<<frequency<<"MHz"<<endl;
			cout<<"电压："<<voltage<<endl; 
		}
		void Stop(){
			cout<<"CPU停止运行！"<<endl;
		} 
}; 
int main()
{
	CPU c1('D',200,2.5);
	c1.Run(); 
	c1.Stop();
	return 0;
}
