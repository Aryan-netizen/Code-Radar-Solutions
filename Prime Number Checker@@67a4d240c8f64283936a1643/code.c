// Your code here...

void isPrime(int n){
    int c=0;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        printf("1");
    }else{
        printf("0");
    }
}