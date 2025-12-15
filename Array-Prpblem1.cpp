#include <iostream>

using namespace std;
int main(){
    int a[100];
    int i, n = 0;

    cout << "Enter elements in the array: " << endl;
    cin >> n;

    //i <= Size of the Array a - 1
    for(i = 0; i <= n - 1; i++)
    cin >> a[i];

    cout << "Elements in the array are: " << endl;
    for(i = 0; i <= n - 1; i++)
    cout << a[i];

    return 0;
}