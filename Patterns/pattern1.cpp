#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int row  = 1;              //1   23 345 4567 56789
	int value = row;
	while(row<=n){
		int col = 1;
		while(col <= row){
			cout<<value<<" ";
			value = value + 1;
			col = col + 1;
		}
		cout<<endl;
		row = row + 1;
	}
}
