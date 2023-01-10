
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b;
        int sum;
        cin >> a;
        cin >> b;

        sum = a + b;
        cout << sum << endl;
        t = t - 1;
    }
    return 0;
}