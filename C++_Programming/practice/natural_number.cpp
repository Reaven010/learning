#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
int main() {
    int n;
    cin >>n;
    int sum=(n/2)*(1+n);
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
}