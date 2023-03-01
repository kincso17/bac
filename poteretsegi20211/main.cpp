#include <iostream>

using namespace std;

void cuburi(int n){
    for(int i=n; i>0; i--){
        cout  << i*i*i << " ";
    }
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cuburi(n);
    return 0;
}
