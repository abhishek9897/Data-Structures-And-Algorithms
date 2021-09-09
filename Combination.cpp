#include<bits/stdc++.h>
using namespace std;

void print(vector<string>v){
	vector<string>::iterator i;
	for(i=v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	
	
}

void combination(int currentBox,int totalBoxes,int selected,int toSelect,vector<string>path)
{
	if(currentBox>totalBoxes){
		if(selected==toSelect){
			print(path);
			
		}
		return ;
	}
	path.push_back("-");
	combination(currentBox+1,totalBoxes,selected,toSelect,path);
	path.pop_back();
	path.push_back("I");
	combination(currentBox+1,totalBoxes,selected+1,toSelect,path);
	path.pop_back();

  
}

 
int main(){	
	cout<<"All the combinaton for selecting box :"<<endl;
	vector<string>path;
//we have to select 2 boxes!(assuming)
//  we have 4 boxes in total
//  we start from the first box as currentbox=1;
//  we have intiaaly selected 0 boxes;
  
		 combination(1,4,0,2,path);
		
	
	return 0;
}	
