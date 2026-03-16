#include<iostream>
using namespace std;
#define maxsize 100010
int n,k;
int a[maxsize];
int p;
int quicksortk(int a[],int l,int r,int k){
	if(l==r) return a[l];
	int x=a[(l+r)/2],i=l-1,j=r+1;
	while(i<j){
		do i++;while(a[i]<x);
		do j--;while(a[j]>x);
		if(i<j) swap(a[i],a[j]);
	}
	if((j-l+1)>=k)
	p=quicksortk(a,l,j,k);
	else 
	p=quicksortk(a,j+1,r,k-(j-l)-1);
	return p;
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int tmp=quicksortk(a,0,n-1,k);
	cout<<tmp;
	return 0;
}
