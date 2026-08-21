#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int prod = 0;
        while(x != 0){
            int ld = x % 10;
            x = x / 10;
            if(prod > INT32_MAX/10 || prod < INT32_MIN/10){
                return 0;
            }
            prod = prod*10 + ld;
        }
  return prod;

    }
};