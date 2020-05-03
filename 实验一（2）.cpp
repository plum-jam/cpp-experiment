//将do-while语句用for语句代替：
#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int sum=0;
	for(i=1;i<=100;i++){
		sum+=i;
	}
	cout<<"1~100的和为："<<sum<<endl;
return 0;
}
