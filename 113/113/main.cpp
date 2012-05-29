#include <iostream>
using namespace std;
#include <stdlib.h>
int main ()
{
	int n  = 0, count = 0, max = 0;
 cin >> n;
 while (n != 1)
 {
	cout << n << " ";
 if (!(n % 2))
 {
 n /= 2;
 }
 else
 {
 n *= 3;
 n += 1;
 }
 if (n > max)
 {
 max = n;
   }
  count++;
 }
 cout << endl << count << ' ' << max << endl;
	system("pause");
	return 0;
}
