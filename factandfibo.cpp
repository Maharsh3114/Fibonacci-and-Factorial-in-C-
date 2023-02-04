// Fibonacci  
 
 
int fibo(int n){
    if (n<2){
        return 1;
    }
    else{
        return fibo(n-2) + fibo(n-1);
    }
}

//Factorial of a number
//n! = n*(n-1)!

int main(){
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<fact(a)<<endl;
    cout<<"The fibo of "<<a<<" is "<<fibo(a)<<endl;
    return 0;
}
