#include <iostream>

using namespace std;

int main()
{
    int n, i, k;
    cout << "n=";
    cin >> n;
    i=2;
    k=0;
    while(n>=i){
        while(n%i==0){
            k=k+1;
            n=n/i;
        }
        if(i==2){
            i=i+1;
        }else{
            i=i+2;
        }
    }
    cout<< k;

}
