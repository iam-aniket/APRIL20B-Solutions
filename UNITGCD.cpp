#include<bits/stdc++.h>
#define loop(i,a,n) for(int i = a; i < n ; i++)
#define lli long long int
#define pb push_back
#define tek ios_base::sync_with_stdio(false)

using namespace std;
void sieve(lli n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    
    int count = 0;
	vector<int> v;
	
	for (int p = 1; p<=n; p++) 
    {
    	if (prime[p])
	    	count++;   		
		else
			v.pb(p);
	}
	
	int x = v.size();

	if(n == 1)
		cout<<"1\n";
	else
    	cout<<n/2<<"\n";
	
	cout<<count<<" ";
	loop(p,1,n+1)
		if(prime[p])
			cout<<p<<" ";
	cout<<"\n";
	
	loop(i,0,x)
	{
		if(i == x - 1)
			cout<<"2 "<<v[i] - 1<<" "<<v[i]<<"\n";
		else
		{
			cout<<"2 "<<v[i]<<" "<<v[i] + 1<<"\n";
		
			if(v[i + 1] == v[i] + 1)
			++i; 
		}
	}
} 
int main()
{
	tek;
	cin.tie(NULL);
	int t = 1;
	cin>>t;
	while(t--)
	{
		lli n = 1;	
		cin>>n;
		
		if(n == 1)
		{
			cout<<1<<"\n"<<"1 1\n";
		}	
		else if(n % 2 == 0)
		{
			cout<<n/2<<"\n";
			loop(i,1,n)
			{
				cout<<"2 "<<i<<" "<<i+1<<"\n";
				i++;	
			}
		}
		else
		{
			cout<<n/2<<"\n";
			cout<<"3 1 2 "<<n<<"\n";
			loop(i,3,n)
			{
				cout<<"2 "<<i<<" "<<i+1<<"\n";
				i++;	
			}
		}
		
	}
}
/*
1
88

44
24 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83
2 4 5
2 6 7
2 8 9
2 10 11
2 12 13
2 14 15
2 16 17
2 18 19
2 20 21
2 22 23
2 24 25
2 26 27
2 28 29
2 30 31
2 32 33
2 34 35
2 36 37
2 38 39
2 40 41
2 42 43
2 44 45
2 46 47
2 48 49
2 50 51
2 52 53
2 54 55
2 56 57
2 58 59
2 60 61
2 62 63
2 64 65
2 66 67
2 68 69
2 70 71
2 72 73
2 74 75
2 76 77
2 78 79
2 80 81
2 82 83
2 84 85
2 86 87
2 87 88
*/
/*
49
26 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
2 3 4
2 5 6
2 8 9
2 9 10
2 11 12
2 14 15
2 15 16
2 17 18
2 20 21
2 21 22
2 24 25
2 26 27
2 27 28
2 29 30
2 32 33
2 34 35
2 35 36
2 38 39
2 39 40
2 41 42
2 44 45
2 45 46
2 48 49
2 50 51
2 51 52
2 54 55
2 56 57
2 57 58
2 59 60
2 62 63
2 64 65
2 65 66
2 68 69
2 69 70
2 71 72
2 74 75
2 76 77
2 77 78
2 80 81
2 81 82
2 84 85
2 86 87
2 87 88
2 90 91
2 92 93
2 94 95
2 95 96
2 98 99
2 99 100
*/
