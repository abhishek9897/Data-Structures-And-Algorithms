#include<bits/stdc++.h>
using namespace std;
#define pair pair<int,pair<int,int> >

vector<int> mergeKArrays(vector<vector<int> >arr)
{
	vector<int>v;
	priority_queue<pair,vector<pair>,greater<pair> >q;
	for(int i=0;i<arr.size();i++)
	{
//		        element,row,index;

		q.push({arr[i][0],{i,0}});
	}
	while(!q.empty())
	{
		pair current=q.top();
		int i=current.second.first;
		int j=current.second.second;
		v.push_back(current.first);
		q.pop();
		if(j+1<arr[i].size())
		{
			q.push({arr[i][j+1],{i,j+1}});
		}
		
	}
	return v;
	
}
int main()
{
	 vector<vector<int> > arr={{ 2, 6, 12 },
                              { 1, 9 },
                              { 23, 34, 90, 2000 }};
 
    vector<int> output = mergeKArrays(arr);
 
    cout << "Merged array is " << endl;
    for (auto x : output)
        cout << x << " ";
 
	return 0;
}
