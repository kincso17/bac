#include <iostream>

using namespace std;

string secventa(string n){
    size_t found =n.find("22");
    while(found!=string::npos){
        n.replace(found,2,"20");
        found=n.find("22", found+2);
    }
    return n;
}

int main()
{
    string n;
    cout << "n=";
    cin >> n;
   cout << secventa(n);

    return 0;
}

