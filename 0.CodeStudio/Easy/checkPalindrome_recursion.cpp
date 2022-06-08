#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}
bool isPalindrome(string &s)
{
	int n = s.length();
     
    // An empty string is
    // considered as palindrome
    if (n == 0)
        return true;
     
    return checkPalindrome(s, 0, n - 1);
}

int main()
{
    
    return 0;
}
