#include <iostream>

using namespace std;

int main()
{
    int n, m, c;
    cout << "n=";
    cin >> n;
    m=0;
    do{
        c=n%10;
        n=n/10;
        if(c<5){
            m=m-2*c;
        }else{
            m=m+c;
        }
    }while(n!=0);
    if(m==0){
        cout << "DA";

    }else{
        cout << "NU";
    }
    return 0;
}
