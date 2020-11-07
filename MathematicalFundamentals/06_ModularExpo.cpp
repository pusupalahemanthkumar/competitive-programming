/* MathematicalFundamentals -ModularExpo */

/* 

               MODULAR EXPO 

The idea is based on below properties.

Property 1:
(m * n) % p has a very interesting property:
(m * n) % p =((m % p) * (n % p)) % p

Property 2:
if b is even:
(a ^ b) % c = ((a ^ b/2) * (a ^ b/2))%c ? this suggests divide and conquer
if b is odd:
(a ^ b) % c = (a * (a ^( b-1))%c) % C

Property 3:
If we have to return the mod of a negative number x whose absolute value is less than y:
then (x + y) % y will do the trick


*/

/*

   (a ^ n * b * m ) % mod

*/
// Recursive C++ program to compute modular power  
#include <bits/stdc++.h>  
using namespace std; 
  
int exponentMod(int A, int B, int C)  
{  
    // Base cases  
    if (A == 0)    // 0 ^ B = 0
        return 0;  
    if (B == 0)    // A ^ 0 = 1
        return 1;  
  
    // If B is even  
    long y;  
    if (B % 2 == 0) {  
        y = exponentMod(A, B / 2, C);  
        y = (y * y) % C;  
    }  
  
    // If B is odd  
    else {  
       y = A % C;  
       y = (y * exponentMod(A, B - 1, C) % C) % C;  
  
    }  
  
    return (int)((y + C) % C);  
}  
  

int main()  
{  
    int A = 3, B = 2, C = 10;  
    cout << "Expo Power is " << exponentMod(A, B, C);  
    return 0;  
}  


