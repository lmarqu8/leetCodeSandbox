#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isValid(string s) {

        if(s.size() < 2) return false;
        std::cout << "past initial condition" << std::endl;

        std::vector<char> stack;

        for(int i = 0; i < s.size(); i++){


            if(validIN(s.at(i))){
                stack.push_back(s.at(i));
            }
            else if (validOOUT(s.at(i))){
                if (!stack.empty() && stack.at(stack.size()-1) == alternate(s.at(i))){
                    stack.pop_back();
                }
                else return false;
            }

            if (!stack.empty()) std::cout << stack.at(stack.size()-1) << std::endl;


        }
        if (!stack.empty()) return false;
        return true;
    }

    bool validIN(char x){
        if(x == '(' || x == '{' || x == '[') return true;
        else return false;
    }

    bool validOOUT(char x){
        if(x == ')' || x == '}' || x == ']') return true;
        else return false;
    }

    char alternate(char x){
        if (x == '(') return ')';
        if (x == ')') return '(';
        if (x == '{') return '}';
        if (x == '}') return '{';
        if (x == '[') return ']';
        if (x == ']') return '[';
        return NULL;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution x;

    string s1 = "()";
    string s2 = "(){}{}";
    string s3 = "(}";
    string s4 = "([)]";
    string s5 = "{()}";

    cout << x.isValid(s5) << std::endl;


    return 0;
}
