#include<bits/stdc++.h>
using namespace std;

void doTugOfWar(vector<int> &arr, int n, int index, vector<int> &set1, vector<bool> visited, int count, int globalDiff, long long sum, vector<bool> &finalVisited) {
    if(index == n) {
        return;
    }
    if(count == n/2) {
        long long currSum = 0;
        for(auto t : set1) {
            currSum += t;
        }
        if(abs(sum/2 - currSum) < globalDiff) {
            globalDiff = abs(sum/2 - currSum);
            for(int i=0;i<n;i++) {
                finalVisited[i] = visited[i];
            }
            
        }
        return;
    }
    set1.push_back(arr[index]);
    visited[index] = true;
    doTugOfWar(arr, n, index+1, set1, visited, count+1, globalDiff, sum, finalVisited);
    set1.pop_back();
    visited[index] = false;
    doTugOfWar(arr, n, index+1, set1, visited, count, globalDiff, sum, finalVisited);
    return;
}

int main() {
    vector<int> arr = {23, 45, -34, 12, 0, 98, -99, 4, 189, -1, 4, 5};
    int n = 12;
    long long sum = 0;
    for(auto t : arr) {
        sum += t;
    }
    vector<int> set1;
    vector<bool> visited(n,false);
    vector<bool> finalVisited(n,false);
    int globalDiff = INT_MAX;
    doTugOfWar(arr, n, 0, set1, visited, 0, globalDiff, sum, finalVisited);
    for(int i=0;i<n;i++) {
        if(finalVisited[i]) cout << arr[i] << " ";
    }
    return 0;
}