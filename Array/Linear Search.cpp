int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.

    for(int i=0;i<num;i++){
        if(arr[i] == num){
            return i;
        }
    }

    return -1;
}