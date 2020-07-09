#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void sort(vector<int>A)
{
	int p, i,j,temp,flag;
	 p=A.size();
	 for(i=1;i<p;i++)
	 {
	 	flag=0;
	 	for(j=0;j<p-1;j++)
	 	{
	 		if(A[j]>A[j+1])
	 		{
	 			flag=1;
	 			swap(A[j],A[j+1]);
			 }
		 }
		 if(flag==0)
		 {
		 	break;
		 }
	 }
	 cout<<"Number of Round:-"<<i-1;
	 cout<<"\nAfter sorting"<<endl;
		for(i=0;i<p;i++)
	{
		cout<<A[i]<<endl;
	}
	
}
int main()
{
	vector<int>A;
	cout<<"Enter the Number of Elements:-";
	int n,i;
	cin>>n;
	cout<<"Enter all Elements:\n";
	for(i=0;i<n;i++)
	{
		int p;
		cin>>p;
		A.push_back(p);
	}
	sort(A);
	
	return 0;
}

