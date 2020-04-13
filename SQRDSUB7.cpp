#include <bits/stdc++.h> 
#define loop(i,a,n) for(lli i = a; i < n; i++)
#define lli long long int
#define tek ios_base::sync_with_stdio(false)
#define pb push_back

using namespace std; 

int main() 
{ 	
	tek;
	cin.tie(NULL);
	lli t = 1;
	cin>>t;
	while(t--)
	{
		lli n = 1;
		cin>>n;
	
		lli a[n + 1] = {0},b[n + 1] = {0},c[n + 1] = {0},d[n + 1] = {0},count = 0,nonzero[n+1] = {0};
		lli x = 0,y = 0,ans = 0;
		
		
		loop(i,0,n)
			cin>>a[i];	
		loop(i,0,n)
		{
			a[i] = abs(a[i]);
		}
		loop(i,0,n)
		{
			if(a[i] % 4 == 0)
				b[i] = 4;
			else if(a[i] % 2 != 0)
				b[i] = 1;
			else
				b[i] = 2;
		}
		//loop(i,0,n)
		//cout<<b[i]<<" ";
	
		loop(i,0,n)
		{
			if(b[i] == 4)
			{
				c[i] = count;
				count = 0;
			}
			else if(b[i] == 1)
				count++;
			else
			{
				c[i] = count;
				count = 0;
			}
		}
		//cout<<"\n";
		//loop(i,0,n)
		//cout<<c[i]<<" ";
		//cout<<"\n";
		
		lli size = 0;
		loop(i,0,n)
		{
			if(b[i] == 4 || b[i] == 2)
			{
				nonzero[size] = c[i];			
				size++;
			}
		}
		
		lli ptr = 1,ct = 0;
		
		for(int i = n-1; i >= 0; i--)
		{
			if(a[i] % 4 != 2)
			{
				ct++;
			}
			else
				break;
		}
		loop(i,0,n)
		{
			if(b[i] == 4 || b[i] == 2)
			{
				if(ptr == size)
					d[i] = ct;
				else
				{
					d[i] = nonzero[ptr];
					ptr++;				
				}
			}
		}
		//loop(i,0,n)
		//	cout<<d[i]<<" ";
		
		//cout<<"\nPTR NON ZERO : \n";
		//loop(i,0,size)
		//	cout<<nonzero[i]<<" ";
		//cout<<"\n\n";
		
		loop(i,0,n)
		{
			if(a[i] % 4 ==  2)
			{
				x = c[i]+1;y = d[i]+1;
				ans += x * y;
			}
		}
		lli tot = 0;
		tot = (n * (n + 1))/2;
		//cout<<"\nFinal = "<<tot<<" - "<<ans<<" = "<<tot - ans<<"\n";
		cout<<tot - ans<<"\n";
	}
}
/*
OP

1
1
21
7
9 2 1 4 6 3 1

6
11
15
20
28
37
45
*/
/*
1
10
1 2 3 4 5 6 7 8 9 10
*/
