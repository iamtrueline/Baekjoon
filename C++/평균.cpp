#include <iostream>
using namespace std;

int main () {
    int n;
    double all = 0, max = 0;
    double score[1000];
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>score[i];
        if(max < score[i]){
            max = score[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        all += score[i]/max*100;
    }

    cout<<all/(double)n;
    return 0;
}
