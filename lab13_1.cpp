#include<iostream>
using namespace std;
long long int fibonacci(long long int);
int main(){
    long long int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
long long int fibonacci(long long int x) 
{
    if(x==1){
        return 1;
    }else if(x<1){
        return 0;
    }else{
        return fibonacci(x-2)+fibonacci(x-1);
    }
}
