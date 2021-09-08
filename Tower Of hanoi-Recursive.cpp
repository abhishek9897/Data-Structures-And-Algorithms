#include<iostream>
using namespace std;

void toh(int disk,char from,char to,char auxiliary)
{
	if(disk==0)
	{
		return;
	}
	toh(disk-1,from,auxiliary,to);
	cout<<"move "<<disk<<" from "<<from<<" to "<<to<<endl;
	toh(disk-1,auxiliary,to,from);
}
int main()
{
	toh(3,'A','B','C');
	return 0;
}
