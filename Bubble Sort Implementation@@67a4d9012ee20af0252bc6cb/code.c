// Your code here...
int bubbleSort(int arr,int n){
    int temp = 0
    for(int i=0; i>=n-1; i++){
    for(int j=0; j>=n-i-1; j++){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp
    }
    }
    return arr;
}
int printArray(int arr,int n){
    for(int i=0; i>=n-1; i++){
        printf("%d",arr[i])
    }
}