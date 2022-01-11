class Solution {
public:
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        bool isPresent = false;
        unordered_set<string> wList;
        for(auto word : wordList) {
            if(word == endWord) {
                isPresent = true;
                wList.insert(word);
            }
            else{
                wList.insert(word);
            }
        }
        
        if(!isPresent) return 0;
        queue<pair<string,int>> q;
        q.push({beginWord, 1});
        
        //removing the beginWord from the vector if present
        //remove(wordList.begin(), wordList.end(), beginWord);
        
        while(!q.empty()) {
            string s = q.front().first;
            int d = q.front().second;
            q.pop();
            
            //cout << temp << endl;
            for(int i=0;i<s.size();i++) {
                string temp = s;
                for(char ch='a';ch<='z';ch++) {
                    temp[i] = ch;
                    //cout << temp << endl;
                    if(temp == s) continue; //skipping the same word
                    if(temp == endWord) return d+1;
                    if(wList.find(temp) != wList.end()) {
                        q.push({temp, d+1});
                        //cout << temp << "\n";
                        wList.erase(temp);
                    }
                }
            }
        }
        return 0;
    }
};