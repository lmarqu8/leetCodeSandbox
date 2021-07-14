#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        cout<< nums.size() << "\n";
        int x = nums.at(0);
        int k = 0;
        for (int i = 1; i < nums.size(); i++) {
            cout<< x << "=" << nums.at(i) << '\n';

            if(nums.at(i) == x){
                nums.erase(nums.begin()+i);
                i-=1;
            }
            x = nums.at(i);


        }
        cout<< "end \n";
        for( int a = 0; a < nums.size(); a++){
            cout << nums.at(a) << " ";
        }
        cout << '\n';
        return nums.size();

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution x;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout << "\n";

    cout << x.removeDuplicates(nums) << " ";

    return 0;
}
