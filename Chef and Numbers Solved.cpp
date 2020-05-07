//Codechef problem Chef and Numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif

int t ; cin>>t;
int size;
int* answer = new int[t];
int loop = t;
while(t--){
	 cin>>size;
	int* a = new int[size]; int maxi = INT_MIN;
for(int i=0;i<size;i++)
{
	cin>>a[i]; maxi = max(a[i],maxi);
}
int n = maxi + 1; 
int freq_arr[n]; fill(freq_arr,freq_arr+n,0);

for(int i = 0; i <size;++i)
{
	freq_arr[a[i]]++;
	if (a[i + 1] == a[i])
		i++;
}
int ans = freq_arr[0];int pos;
for (int i = 1; i < n; ++i)
{
	if(freq_arr[i]>ans){
		ans = freq_arr[i];
		pos = i;
	}
}
	delete[] a;
answer[t] = pos;
}
for(int i=loop-1;i>=0;i--){
	cout<<endl<<answer[i];
}
delete[] answer;
return 0;
}
