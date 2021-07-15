#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return false;

        string z = to_string(x);
        string y = z;
        reverse(y.begin(), y.end());

        if(z == y){
            return true;
        }
        return false;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution x;

    int a = 121;
    int b = -121;
    int c = 10;
    int d = -101;

    cout << x.isPalindrome(c) << std::endl;




    return 0;
}
