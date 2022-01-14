#include <string> //To obtain to_string() function
class Solution {
public:
    bool isPalindrome(int x) {
        //Use to_string function to convert int to a string
        string num = to_string(x);
        int j = num.size();
        int half = num.size()/2;
        int isTrue = 0;
        bool isPal = false;
        for (int i=0;i<half;i++){
            if(num.at(i)!=num.at(j)){
                isPal = false;
                break;
            }
            else if (num.at(i)==num.at(j)){
                isTrue++;
                j--;
                if(isTrue==half){
                    isPal = true;
                    break;
                }
                isPal = false;
            }
        }
        return isPal;
    }
};
