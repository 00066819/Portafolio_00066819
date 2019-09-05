#include<iostream>
using namespace std;
int fun(int low, int high, int x, int *a){
	if (low>high){
		cout<<"El valor no se encuentra en el arreglo."<<endl;
		return -1;
}
int mid=(low+high)/2;

if (x==a[mid]){
	return mid;
}

if (x<a[mid]){
	return fun(low, mid-1, x, a);
}else {
	return fun(mid+1, high, x, a);
}
}
int main()
{
	int x, low=0, high=7, a[8]={1, 3, 4, 5, 17, 18, 31, 33}, i=0;
	cout<<"Ingrese el valor a buscar: ";
	cin>>x;
	i =  fun(low, high, x, a);
	if (i != -1){
	cout<<"El valor se encuentra en la cassila" <<" "<<i<<endl;
	}
	return 0;
}