#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    char string[80];
    cin>>n;
    
    for(int i = 0; i < n; i++){
        int sum = 0;
        int add = 1;
        cin>>string;
        for(int j = 0; j < strlen(string); j++){
            if(string[j]=='O'){
                sum += add;
                add++;
            }
            else{
                add = 1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
