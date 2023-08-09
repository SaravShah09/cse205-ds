# include<stdio.h>

   int fib(int n){
    int a=0, b=1;
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
       return (fib(n-1) +fib(n-2));
    }
}

int main(){
    
    fib(3);
    return 0;
}