#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100], k;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    int tmp=v[k-1][k-2];
    for(int j=k-2; j>=1; j--){
        v[k-1][j]=v[k-1][j-1];
    }
    v[k-1][0]=tmp;
    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
