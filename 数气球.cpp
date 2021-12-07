#include<iostream>
#include<cstring>
using namespace std;
const int N=205;
int n,k;
char c;
int cheak[300]; //65,78
int main(){
	cin>>n;
	while(n--){
		cin>>k;
		for(int i=0;i<k;i++){
		cin>>c;
		cheak[c]++;			
		}
	}
	cout<<cheak[65];
	for(int i=66;i<=78;i++)
	cout<<" "<<cheak[i];
	return 0;
}
