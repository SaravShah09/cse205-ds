# include<stdio.h>
# include<stdbool.h>

 bool isPowerOfTwo(int n) 
 {
    if (n<=0)
    return false;
    if(n==1)
    return true;
    return !(n&1) && isPowerOfTwo(n/2);
 }


int main(){
    int n = 4;
    isPowerOfTwo(n);
    return 0;
}