//Program to convert a number from start to end
//using multiplication operation and find 
//out the minimum no. of operations

#include<vector>
#include<queue>
#include<iostream>
using namespace std;

int findMinOperation(int start, int end, vector<int> nums) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    while(!q.empty()) {
        pair<int, int> point = q.front();
        q.pop();
        if(point.first == end) return point.second;
        for(auto it : nums) {
            if(point.first * it <= end) q.push({point.first * it, point.second+1});
        }
    }
    return -1;
}

int main() {
    int start = 3;
    int end = 29;
    vector<int> nums = {2, 5, 10};
    cout << findMinOperation(start, end, nums) << "\n";
    return 0;
}