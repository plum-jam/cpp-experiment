//计算图形面积：
#include<iostream>
using namespace std;
double graph(double r)
{
	return 3.14*r*r;}
double graph(double x,double y)
{
	return x*y;}
double graph(double a,int b)     //为了与圆的面积区别
{
	return a*a;}

int main()
{
	int i,b;
	double r,x,y,a;
	cout<<"请输入数字（1表示圆，2表示长方形，3表示正方形）：";
	cin>>i;
	switch(i){
		case 1:
			cout<<"请输入圆的半径：";
			cin>>r;
			cout<<"圆的面积为："<<graph(r)<<endl;
			break;
		case 2:
			cout<<"请输入长方形的长和宽：";
			cin>>x>>y;
			cout<<"长方形的面积为："<<graph(x,y)<<endl;
			break;
		case 3:
			cout<<"请输入正方形的边长(再随机输入一个整数)：";
			cin>>a>>b;
			cout<<"正方形的面积为："<<graph(a,b)<<endl;
			break;
		default:
			cout<<"输入格式错误！"<<endl;
	}
	return 0;
}
