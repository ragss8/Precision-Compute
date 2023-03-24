/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
  
void precisionCompute(int x, int y, int n)
{
    // Base cases
    if (y == 0) {
        cout << " " << endl;
        return;
    }
    if (x == 0) {
        cout << 0 << endl;
        return;
    }
    if (n <= 0) {
        cout << x / y << endl;
        return;
    }
  
    if (((x > 0) && (y < 0)) || ((x < 0) && (y > 0))) {
        cout << "-";
        x = x > 0 ? x : -x;
        y = y > 0 ? y : -y;
    }
  
    int d = x / y;
  
    for (int i = 0; i <= n; i++) {
        cout << d;
        x = x - (y * d);
        if (x == 0)
            break;
        x = x * 10;
        d = x / y;
        if (i == 0)
            cout << ".";
    }
}
  
// Driver Program
int main()
{
    int n;
    cout<<"enter the numerator";
    cin>>n;
    
    int d;
    cout<<"enter the denominator";
    cin>>d;
    int b;
    cout<<"the number of iterations induced";
    cin>>b;
    precisionCompute(n, d, b);
    return 0;
}
