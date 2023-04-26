#include <iostream>
#include <cmath>

using namespace std;

int inserare(int n){
    int m=0;
    int uszj, uuszj,dif, nr=0;

    while(n>9){
        uszj=n%10;
        uuszj=n%100/10;
        if(uuszj>uszj){
            dif=uuszj-uszj;
        }else{
            dif=uszj-uuszj;
        }
        m=(dif*10+uszj)*pow(100, nr)+m;
        n=n/10;
        nr++;
    }
    m=n*pow(10, 2*nr)+m;
    return m;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout << inserare(n);
    return 0;
}
