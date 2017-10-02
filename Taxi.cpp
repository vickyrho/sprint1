#include<iostream>
#include<vector>

using namespace std ;

int main()
{
	
	int num ;	
	vector<int> v;
	int sum = 0;
	int val,q ;
	cout<<"enter the number of groups"<<endl;
	cin>>num;
	cout<<"enter the number of students in the groups"<<endl;
	for(int i = 0; i<num ; i++)
	{
		cin>>val ; 
		v.push_back(val);
	}
	
	for(int i = 0 ; i < num ; i++)
	{
		sum=sum+v[i];
	}
	
	int q = sum/4;
	int r = sum%4;
	
	if(r>0)
	q=q+1;

	cout<<q;
}
