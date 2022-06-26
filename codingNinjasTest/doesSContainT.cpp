bool solve(char large[], char *small) {
    
    //base case
    if(large[0] == '\0' && small[0] != '\0') return false;
    if(small[0] == '\0') return true;
    
    //hypothesis + Induction
    if(large[0] == small[0]) return solve(large+1, small + 1);
    else return solve(large+1, small);
}

bool checksequenece(char large[] , char*small) {
	return solve(large, small);
}
