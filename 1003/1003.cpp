#include <iostream>
#include <string>
#include<stdio.h>
using namespace std;
int main()
{
	int T;
//	int arr[100000];
	freopen("input.txt","r",stdin);
	if(cin>>T)
	{
		for(int i=0;i<T;++i)
		{
			int n;
			int max=-1001;
			int curmax=0;
			int start=1,end=1;
			int temp=1;
			int a;
			cin>>n;
			for(int j=1;j<=n;++j)
			{
				cin>>a;
				curmax+=a;
				if(curmax>max)
				{
					max=curmax;
					start=temp;
					end=j;

				}
				if(curmax<0)
				{
					curmax=0;
					temp=j+1;
				}

			}
			cout<<"Case "<<i+1<<":"<<endl;
			cout<<max<<" "<<start<<" "<<end<<endl;
			if(i!=T-1)cout<<endl;

		}
	}
	return 0;
}
