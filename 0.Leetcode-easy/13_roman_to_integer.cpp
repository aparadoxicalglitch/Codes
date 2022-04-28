#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int value = 0;
        int l = s.length();
        int IntString[l];
        
        for (int i = 0; i<l; i++){
            if (s[i] == 'I'){
                IntString[i]=1;
            }
            else if(s[i] == 'V'){
                IntString[i]=5;
            }
            else if(s[i] == 'X'){
                IntString[i]=10;
            }
            else if(s[i] == 'L'){
                IntString[i]=50;
            }
            else if(s[i] == 'C'){
                IntString[i]=100;
            }
            else if(s[i] == 'D'){
                IntString[i]=500;
            }
            else if(s[i] == 'M'){
                IntString[i]=1000;
            }
            
            value+=IntString[i];
            
            if (i>0 && i<l){
                if(IntString[i-1]<IntString[i]){
                    value-=(IntString[i-1]*2);
                }
            }
        }
        return value;
    }
};
int main()
{
    Solution s;
    cout<<s.romanToInt("MC");
}