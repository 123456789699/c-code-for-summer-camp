#include<iostream>
using namespace std;
#define maxsize 100010
int h[maxsize],s; 
int n,m;
void down(int u){
	int t=u;
	if(u*2<=s&&h[u*2]<=h[t]) t=u*2;
	if(u*2+1<=s&&h[u*2+1]<=h[t]) t=u*2+1;
	if(t!=u){
		swap(h[t],h[u]);
		down(t);
	} 
}
int main(){
	cin>>n>>m;
	s=n;
	for(int i=1;i<=n;i++)
	cin>>h[i];
	for(int i=n/2;i;i--)
	down(i);
	while(m--){
		cout<<h[1]<<" ";
		h[1]=h[s];
		s--;
		down(1);
	}
	return 0;
}
