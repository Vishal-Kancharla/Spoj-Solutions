#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	//cin>>t;
	scanf("%d",&t);
	while(t--){
		long n;
		long long m;
		//cin>>n>>m;
		scanf("%ld %lld",&n,&m);
		vector<int>a(n);
		for(long i = 0 ; i < n ;++i){
			scanf("%d",&a[i]);
			//cout<<a[i]<<endl;
		}
		long temp=0,max_count=0,cur_sum=0;
		int sum=0;
		deque<int>window;
		bool check = true,done =true;
		long i =0;
		while(i != n){
			check = true;
			while(cur_sum <= m && check){
				window.push_back(a[i]);
				cur_sum += a[i];
				temp++;
				i++;
				if(i == n)check = false;
			}

			if(temp-1>=max_count || temp >= max_count && check == false) {
				if((check==false)&&((cur_sum)<sum&&temp==max_count)|| (check==false)&&temp>max_count&&cur_sum<=m){
					sum = cur_sum ; 
					max_count= temp;
					done = false;
				}

				else if(((cur_sum-a[i-1])<sum&&temp-1==max_count) || temp-1>max_count){
					sum = cur_sum - a[i-1]; 
					max_count= temp-1;
					done = false;
				}
			}
			if(!check&&!done)break;	
			while(cur_sum > m){
				cur_sum -= window.front();
				window.pop_front();
				temp--;
			}

		}
		//cout<<sum<<" "<<max_count<<endl;
		printf("%d %ld\n",sum,max_count );
	}
}