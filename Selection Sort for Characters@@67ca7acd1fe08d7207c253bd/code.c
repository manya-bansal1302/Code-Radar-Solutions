// Your code here...
int selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}