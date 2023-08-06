#include<bits/stdc++.h>
using namespace std;


int fisrtOcc(int arr[], int size, int key){
	
	int s = 0;
	int e = size-1;
	
	int mid = s + (e - s)/2;
	int ans = - 1;
	
	while(s <= e){
		
		if(arr[mid]==key){
			ans = mid;
			e = mid - 1;
		}
		else if(key > arr[mid]){
			s = mid + 1;
		}
		else if(key < arr[mid]){
			e = mid - 1;
		}
		mid = mid = s + (e - s)/2;
	}
	
	return ans;
}

int lastOccu(int arr[], int n, int key){
	
	int s = 0;
	int e = n-1;
	int mid = s + (e - s)/2;
	int ans =  -1;
	
	while(s <= e){
		
		if(key == arr[mid]){
			
			ans = mid;
		    s = mid + 1;
		}
		else if(key > arr[mid]){
			s = mid + 1;
		}
		else if(key < arr[mid]){
			e = mid - 1;
		}
		mid = s + (e - s)/2;
	}
	
	return ans;
}
int main(){
	
	
	int numbers[5] = {1,3,3,3,5};
	
	int first = fisrtOcc(numbers,5,3);
	
	int second = lastOccu(numbers,5,3);
	
	int total = abs(first - second) + 1;
	
	cout<<"The first occurence of 3 at index  "<<first<<endl;
	cout<<"The first occurence of 3 at index  "<<second<<endl;
	cout<<"The total nmber of occurence   "<<total<<endl;
	
}
