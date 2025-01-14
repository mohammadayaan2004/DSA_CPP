/*
Leetcode Q1009 complement of base 10 integer
https://leetcode.com/problems/complement-of-base-10-integer/

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.



Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.


Constraints:

0 <= n < 109
*/

#include <iostream>
#include<cmath>
using namespace std;

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        int rem, ans = 0, mul = 1;
        while (n != 0)
        {
            rem = n % 2;
            rem = rem ^ 1; //xor
            n /= 2;
            ans = ans + rem * mul;
            //ans = rem * pow(2, mul) + ans;
            //mul++;
            mul *= 2;//2^0,2^1,2^2,2^3 ....
        }
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;

    Solution s;
    cout << s.bitwiseComplement(n);
    return 0;
}