#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    ofstream out("bac.txt");
    int k3=0, k5=0;
    cout<< "n=";
    cin >>n;
    for(int i=1; i<n+1; i++){
        int j=i;
        while(j%3==0){
            j=j/3;
            k3++;
        }
        while(j%5==0){
            j=j/5;
            k5++;
        }
    }
    k3=k3/2;
    if(k3<=k5){
        out << k3;
    }else{
        out << k5;
    }
    return 0;
}
