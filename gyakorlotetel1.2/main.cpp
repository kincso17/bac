#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    for(int i=0; i<n; i++){
        cout << v[i][0]<< " ";
    }
    for(int j=1; j<n; j++){
        cout << v[n-1][j]<< " ";
    }
    for(int i=n-2; i>=0; i--){
        cout << v[i][n-1]<< " ";
    }
    for(int j=n-2; j>0; j--){
        cout << v[0][j]<< " ";
    }

    return 0;
}
