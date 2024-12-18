#include<iostream>
using namespace std;
class cuboid
{
public:
	int length;
	int width;
	int height;
	void tiji(int length, int width, int height)
	{
		int t = length * width * height;
		cout << t << endl;
	}
};
int main()
{
	cuboid p[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "ÇëÊäÈë³¤£¬¿í£¬¸ß" << endl;
		cin >> p[i].length >> p[i].width >> p[i].height;
	}
	for (int j = 0; j < 3; j++)
	{
		p->tiji(p[j].length, p[j].width, p[j].height);
	}
	return 0;
}