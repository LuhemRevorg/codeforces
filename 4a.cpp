
#include <iostream>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	int w;
	cin >> w;
	(w > 2 && w % 2 == 0) ? cout << "YES" : cout << "NO";
    	return 0;
}
