#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.

    for(int i=1;i<n;i++){
        int j=i-1;
        int temp = arr[i];

        for(; i>=0; j--){

            if(arr[j] > temp){

                //shift the elements

                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = temp;
    }
}
