#include<iostream>
using namespace std;
int main()
{
	int F= 0;
	double C = 0;
	cout << "�����뻪���¶�" << endl;
	cin >> F;
	C = (F *1.0- 32) * 5 / 9;
	cout << "�����¶�Ϊ" << (double)C << endl;
	return 0;
}