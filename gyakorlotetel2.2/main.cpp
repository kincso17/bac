#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n;
    cout << "n=";
    cin >> n;
    /*for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==n-1){
                v[i][j]=n;
            }
        }
    }
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            if(i+j<n-1){
                v[i][j]=v[i+1][j]-1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j>n-1){
                v[i][j]=v[i-1][j]-1;
            }
        }
    }*/
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j<=n-1){
                v[i][j]=i+j+1;
            }else{
                v[i][j]=n-1 -(i+j)+ n;
            }
        }
    }
    //vagy igy
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
