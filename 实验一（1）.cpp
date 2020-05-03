/*计算1-100的和：*/
#include<iostream.h>
int main()
{
	int i=1;
	int sum=0;
	do{
		sum+=i;
		i++;
	}while(i<=100);
	cout<<"1~100的和为："<<sum<<endl;
return 0;
}
