#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
	#endif

string leftmethod(string s);
string rightmethod(string s);
int t; cin>>t;
string s;



while(t--){
	cin>>s;
	string s1 = leftmethod(s);
	string s2 = rightmethod(s);
	if(s1.compare(s2) == 0)
    	cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
return 0;
}

string leftmethod(string s){
	string s1 = s.substr(1);
	char s2 = s.at(0);
	s1.push_back(s2);
	return s1;
}
string rightmethod(string s){
	int n = s.length();
	char sn = s[n-1];
	string s2 = s.erase(n-1,1);
	
	 string s3(1, sn); 
	
	s3.append(s2);
	return s3;
}
