#include<bits/stdc++.h>
using namespace std;
struct node{
	int start;
	int end;
	
};
bool compare(node a,node b)
{
	return (a.start<b.start);
}
void mergeIntervals(node arr[],int n)
{
	sort(arr,arr+n,compare);
	stack<node>s;
	s.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		struct node a=s.top();
		if(a.end<arr[i].end)
		{
			s.pop();
			a.end=arr[i].end;
			s.push(a);
			
			
		}
		else if(a.end<arr[i].start)
		{
			s.push(arr[i]);
		}
	}
	while(!s.empty())
	{
		cout<<s.top().start<<" "<<s.top().end<<endl;
		s.pop();
	}
	
}
int main()
{
	 node arr[]={{6,8}, {1,9}, {2,4}, {4,7}};
	 int n=sizeof(arr)/sizeof(arr[0]);
	mergeIntervals(arr,n);
	return 0;
}
