void reverseArray(vector<int> &arr , int m) {
    int start = 0;
    int end = arr.size()-1;
    //Go to index from which we have to reverse the array
    for(int i=0;i<=m;i++){
        start++;
    }
    //Using two pointers swap method we can reverse the array
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
