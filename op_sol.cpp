#include <bits/stdc++.h>

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	int odd = 0;
  	for (int i = 0; i < n; i++) {
  		int a;
  		cin >> a;
  		if (a % 2 == 1) {
  			odd++;
  		}
  	}                                         
  	// the two numbers must have the same parity (even + even or odd + odd) to get an even sum
  	// check the frequency of odd numbers:
  	// if the its frequency is even then we can merge all numbers into a single number
  	// otherwise, two numbers will ALWAYS remain
  	cout << (odd % 2 == 0 || n == 1 ? 1 : 2) << '\n';	
  }
  return 0;
}      
