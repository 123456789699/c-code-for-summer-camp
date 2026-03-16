#include<iostream>
using namespace std;
#define maxsize 100010
int n,k;
int a[maxsize];
void quicksort(int a[],int l,int r){
	if(l>=r) return ;
	int x=a[(l+r)/2],i=l-1,j=r+1;
	while(i<j){
		do i++;while(a[i]<x);
		do j--;while(a[j]>x);
		if(i<j) swap(a[i],a[j]);
	}
	quicksort(a,l,j);quicksort(a,j+1,r);
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	cout<<a[k];
	return 0;
}
