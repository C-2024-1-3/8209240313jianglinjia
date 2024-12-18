#include<iostream>
using namespace std;
class student
{
public:
	int num;
	int score;
};
void max(student p[])
{
	for (int i =0; i < 4; i++)
	{
		if (p[i].score > p[i + 1].score)
		{
			p[i + 1].num = p[i].num;
			p[i + 1].score = p[i].score;
		}
	}
	cout << p[4].num << endl;
}
int main()
{
	student stu[5];
	for (int j = 0; j < 5; j++)
	{
		cout << "输入学号和成绩" << endl;
		cin >> stu[j].num >> stu[j].score;
	}
	max(stu);
	return 0;
}