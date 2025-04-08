// Your code here...
kthSmallest(int arr[],int n,int k){
    int temp = -1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                temp =arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d",temp);
}