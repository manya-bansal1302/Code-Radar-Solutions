// Your code here...
int findUnsortedSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}