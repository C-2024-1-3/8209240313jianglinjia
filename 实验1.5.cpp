#include<iostream>
using namespace std;
int main()
{
	int F= 0;
	double C = 0;
	cout << "请输入华氏温度" << endl;
	cin >> F;
	C = (F *1.0- 32) * 5 / 9;
	cout << "摄氏温度为" << (double)C << endl;
	return 0;
}