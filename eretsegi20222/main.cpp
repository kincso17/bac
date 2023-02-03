#include <iostream>

using namespace std;

int main()
{
    int n, m, v[100][100], nr=0;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            while(v[i][j]<v[i][j-1] && v[i][j]<v[i-1][j] && v[i][j]<v[i+1][j] && v[i][j+1]){
                nr++;
            }
        }
    }
    cout << nr;

    return 0;
}
