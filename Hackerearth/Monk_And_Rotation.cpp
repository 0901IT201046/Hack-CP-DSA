#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		int A[n];
		k = k % n;
		for(i=0;i<n;i++)
		{
			cin>>A[i];
		}
		for(int i = 0; i < n; i++)
    	{
       if(i < k)
       {
           cout << A[n + i - k] << " ";
       }
       else
       {
           cout << (A[i - k]) << " ";
       }
       }
    cout << "\n";
}
	
	return 0;
}
