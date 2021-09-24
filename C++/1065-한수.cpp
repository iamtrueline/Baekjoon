#include <iostream>
using namespace std;

int ishan(int n){
    int temp1, temp2;
    
    if(n < 100)
        return 1;
    else if(n == 1000){
        return 0;
    }
    else{
        temp1 = (n%100)/10 - n/100;
        temp2 = n%10 - (n%100)/10;
        if(temp1 == temp2)
            return 1;
        else
            return 0;
    }
}

int main(){
    int num = 0, n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(ishan(i+1)==1)
            num++;
    }
    cout<<num;
    return 0;
}
