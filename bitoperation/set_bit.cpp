#include<iostream>
#include<algorithm>

using namespace std;

int count_set_bit(int b)
{
   return __builtin_popcount(b); // Corrected function name
}

int main()
{
    cout << count_set_bit(8);  // Output: 1, since 8 is 1000 in binary
}
