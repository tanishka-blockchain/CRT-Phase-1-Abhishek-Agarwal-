// Problem 1 --
// Stack 

#include<iostream>
#include <stack>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    stack<int> st;
    //java -- stack<integer> st = new stack<>();
    
    //push the data into the stack  
    for(int i = 0; i < n; i++) {
        st.push(arr[i]);
    }
    
    //pop out the most data from the stack and put into the aray
    for(int i = 0; i < n; i++){
        arr[i] = st.top();
        st.pop();
    }
    
    cout << "reversed array..";
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// Problem 2 -- Leet Code - 344
// Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {

        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            st.push(s[i]);
        }
        int i = 0;
        while(!st.empty()) {
            s[i++] = st.top();
            st.pop();
        }      
    }
};

// Problem 3 -- Leet Code - 20
// Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s) {
            if(c == '(')
                st.push(')');
            else if (c =='[')
                st.push(']');
            else if (c == '{')
                st.push('}');

        else {
            if(st.empty() || st.top() != c){
                return false;
            } st.pop();
        }        
        } 
        return st.empty();
    }
};            

// Problem 4 -- Geeks for Geeks
// Next Greater Element

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> nge(n);
        
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() <=arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                nge[i] = -1;
            } else {
                nge[i] = st.top();
            }
            st.push(arr[i]);
        }
        return nge;
    }
};
