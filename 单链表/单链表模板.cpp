#include<iostream>
using namespace std;
#define maxsize 100010
int head,ne[maxsize],e[maxsize],idx;
void init(){
	idx=0;
	head=-1;
}
void Insert_top(int x){
	e[idx]=x;
	ne[idx]=head;
	head=idx++;
}
void Insert(int k,int x){
	e[idx]=x;
	ne[idx]=ne[k-1];
	ne[k-1]=idx++;
}
void Delete(int k){
	if(k==0)
	head=ne[head];
	else
	ne[k-1]=ne[ne[k-1]];
}
int main(){
	int M;
	cin>>M;
	init();
	while(M--){
		char op[2];
		cin>>op;
		if(op[0]=='H') {int x;cin>>x;Insert_top(x);}
		else if(op[0]=='I') {int x,k;cin>>k>>x;Insert(k,x);}
		else {int k;cin>>k;Delete(k);}
	}
	for(int i=head;i!=-1;i=ne[i])
	cout<<e[i]<<" ";
	return 0;
}
