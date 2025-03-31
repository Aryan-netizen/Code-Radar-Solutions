// Your code here...

int isPrime(int n){
    int c=0;
    for(int i=2;i<n-2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        return 1;
    }else{
        return 0;
    }
}