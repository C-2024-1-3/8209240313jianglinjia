#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point()
	{
		x = 60; y = 80;
	}
	void setpoint(int i,int j)
	{
		x = x + i; y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p;
	int i, j;
	p.display();
	cout << "ÇëÊäÈëi£¬j" << endl;
	cin >> i >> j;
	p.setpoint(i, j);
	p.display();
	return 0;
}