// Your code here...
int selectionSort(char arr[][100],int n){
    char temp[100];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
          if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
    }
}

int printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}