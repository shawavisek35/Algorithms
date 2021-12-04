#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  
    int calculate(int a, char oper, int b) {

      if(oper == '*'){
        return a*b; 
      }
      else if(oper == '+'){
        return a+b;
      }
      else{
        return a-b;
      }
    }
  
    int convertToInt(string s) {
      int ans = 0;
      for(auto it : s) {
        ans = (ans*10) + it - '0';
      }
      return ans;
    }
  
    bool isOperator(char oper) {
      if(oper == '*' || oper == '+' || oper == '-') {
        return true;
      }
      return false;
    }
  
    vector<int> diffWaysToCompute(string expression) {
      vector<int> ans;
      if(expression.size() == 1 || expression.size() == 2) {
        ans.push_back(convertToInt(expression));
        return ans;
      }
      
      for(int i=1;i<expression.size();i++) {
        if(!isOperator(expression[i])) continue;
        vector<int> op1 = diffWaysToCompute(expression.substr(0,i));
        vector<int> op2 = diffWaysToCompute(expression.substr(i+1));
        
        for(auto p1 : op1) {
          for(auto p2 : op2) {
            ans.push_back(calculate(p1, expression[i], p2));
          }
        }
      }
      
      return ans;
      
    }
};