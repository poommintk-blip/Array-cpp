#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 30};
    int i, total = 0;
    
    for (i=0; i<2; i++)
        total = total + a[i];
        
    cout << "The sum is " << total << "." << endl;
    
    return 0;
} 