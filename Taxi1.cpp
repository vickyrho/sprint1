#include<iostream>
#include<vector>

using namespace std ;



int main()
{

        int num ;
        vector<int> v;
        int sum = 0;
        int val ,q;
     	int count4=0,count3=0,count2=0,count1=0;
	//   cout<<"enter the number of groups"<<endl;
        cin>>num;
     //   cout<<"enter the number of students in the groups"<<endl;
        for(int i = 0; i<num ; i++)
        {
                cin>>val ;
                v.push_back(val);
        }

        for(int i = 0 ; i < num ; i++)
        {
                switch(v[i])
		{
			case 1:
			count1++;
			break;
			
			case 2:
                        count2++;
                        break;
			
			case 3:
                        count3++;
                        break;
			
			case 4:
                        count4++;
                        break;

		}
        }

        q = count4 ; 

	while(count2 > 1)
	{
	count2=count2-2;
	q++;
	}
	
	if(count3>count1)
	{
		q+=count3;
	}
	else
	{
		q+=count3;
		count1=count1-count3;	
	}
	
	if(count2==1){
	q=q+1;
	count2--;
	count1=count1-2;
	}
	
	if(count1>0)
	{
		q+=count1/4;
		count1=count1%4;
	}
	
	if(count1>0)
	{
	q++;	
	}

	cout<<q;
}


