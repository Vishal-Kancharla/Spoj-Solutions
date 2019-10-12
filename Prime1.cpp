#include <bits/stdc++.h> 
using namespace std; 

void simpleSieve(long limit, vector<long>& prime) 
{ 
	bool mark[limit + 1]; 
	memset(mark, false, sizeof(mark)); 

	for (long i = 2; i <= limit; ++i) { 
		if (mark[i] == false) { 
			prime.push_back(i); 
			for (long j = i; j <= limit; j += i) 
				mark[j] = true; 
		} 
	} 
} 


void primesInRange(long low, long high) 
{ 
	long limit = floor(sqrt(high)) + 1; 
	vector<long> prime; 
	simpleSieve(limit, prime); 

	long n = high - low + 1; 

	bool mark[n + 1]; 
	memset(mark, false, sizeof(mark)); 

	for (long i = 0; i < prime.size(); i++) { 
		long loLim = floor(low / prime[i]) * prime[i]; 
		if (loLim < low) 
			loLim += prime[i]; 
		if(loLim==prime[i]) 
			loLim += prime[i]; 
		for (long j = loLim; j <= high; j += prime[i]) 
			mark[j - low] = true; 
	} 

	for (long i = low; i <= high; i++) 
		if (!mark[i - low]) 
			cout<<i<<endl; 
} 

int main() { 
	int t;
	cin>>t;
	while(t--){
		long low,high;
		cin>>low>>high;
		primesInRange(low,high);
		if(t)
			cout<<endl;
	}
} 