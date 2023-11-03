#include <iostream>
using namespace std;

int main() {
    int n, sum = 0,i;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (i = 1; i <= n; ++i) 
	{
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}

