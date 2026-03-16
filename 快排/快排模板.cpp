#include<iostream>
using namespace std;
#define maxsize 100010
void quicksort(int a[],int l,int r){
	int i=l-1,j=r+1,x=a[(l+r)/2];
	if(l>=r) return ;
	while(i<j){
	do i++;while(a[i]<x);
	do j--;while(a[j]>x);
	if(i<j) {
		swap(a[i],a[j]);
	}
}
	quicksort(a,l,j);
	quicksort(a,j+1,r);
}
int main(){
	int n;
	int a[maxsize];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
} 
