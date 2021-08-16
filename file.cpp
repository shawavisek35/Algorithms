// Given a string s and an array of strings words, determine whether s is a prefix string of words.

// A string s is a prefix string of words if s can be made by concatenating the first k strings in words for some positive k no larger than words.length.

// Return true if s is a prefix string of words, or false otherwise

bool isPrefix(string s, vector<string> &words) {
    int i = 0;
    for (auto word : words) {
        if (s.length() < word.length())
            return false;
        if (s.substr(0, word.length()) == word)
            i++;
    }
    return i == words.size();
}
