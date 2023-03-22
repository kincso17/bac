#include <iostream>

using namespace std;

int main()
{
  int n, k,p=1,nr, c;
  cout << "n=";
  cin >> n;
  cout << "k=";
  cin >> k;
  if(k==0){
    nr=-1;
  }else{
    nr=0;
    do{
        c=n%2;
        n=n/10;
        if(c!=0){
            nr=nr+(n%10)*p;
            p=p*10;
        }else{
            k=k-1;
        }
    }while(n!=0 && k!=0);
  }
  cout << nr;
    return 0;
}
