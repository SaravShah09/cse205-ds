# include<stdio.h>

int smallestEvenMultiple(int n){
    if (n%2!=0)
    {
        return n*2;
    }
    else
    {
        return n;
    }
}
int main(){
    printf("%d",smallestEvenMultiple(4));
    return 0;
}
