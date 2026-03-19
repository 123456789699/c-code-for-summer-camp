#include<cstring>
#include<iostream>
using namespace std;
#define maxsize 100010
int h[maxsize],e[maxsize],ne[maxsize],idx;
int N;
void Insert(int x){
	int k=(x%maxsize+maxsize)%maxsize;
	e[idx]=x;
	ne[idx]=h[k];
	h[k]=idx++;
}
bool find(int x){
	int k=(x%maxsize+maxsize)%maxsize;
	for(int i=h[k];i!=-1;i=ne[i])
	if(e[i]==x)
	return true;
	else
	return false;
}
int main(){
	cin>>N;
	memset(h,-1,sizeof(h));
	while(N--){
		string op;
		int x;
		cin>>op>>x;
		if(op[0]=='I') Insert(x);
		else {
			if(find(x))
			cout<<"Yes"<<endl;
			else 
			cout<<"No"<<endl;
		}
	}
}
