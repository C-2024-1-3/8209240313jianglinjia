#include<iostream>
using namespace std;
class Time             
{
private:            
		int hour;
	    int minute;
		int sec;
public:

	void shuru(int _hour,int _minute,int _sec)
	{
		hour = _hour; minute = _minute; sec = _sec;
	   }
	void printf()
	{
		cout <<hour << ":" <<minute << ":" <<sec << endl;
	}
};
int main()
{
	Time t1;
	int _hour, _minute, _sec;
	cin >>_hour;
	cin >>_minute;
	cin >>_sec;
	t1.shuru(_hour, _minute, _sec);
	t1.printf();
	return 0;
}