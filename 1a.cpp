#include <iostream>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
        long long n, m, a;
        cin >> n >> m >> a;
        long long count = 0;
 
        if (n % a == 0) count += n / a;
        else count += 1 + (n / a);
 
        if (m % a == 0) count *= m / a;
        else count *= 1 + m / a;
 
        cout << count;
 
        return 0;
}
