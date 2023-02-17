#include <iostream>

using namespace std;

int main()
{
    int m, n, v[100][1020];
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    int x=0;

    for(int i=m; i>0; i--){
        for(int j=n; i>0; i--){
            v[i][j]=x*x;
            x=x+2;

        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; i<=n; i++){
            cout << v[i][j] <<" ";

        }
        cout<< endl;
    }
    return 0;
}
