#include <bits/stdc++.h> 


int fisrtOcc(vector<int>& arr, int size, int key){
	
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

int lastOccu(vector<int>& arr, int n, int key){
	
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
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here

    pair<int,int>p;
    p.first = fisrtOcc(arr,n,k);
    p.second = lastOccu(arr,n,k);


return p;
}
