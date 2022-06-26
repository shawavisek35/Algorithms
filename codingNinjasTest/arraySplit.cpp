bool solve(int *input, int n, int i, int ls, int rs) {
    if(i == n) return ls == rs;
    
    if(input[i] %5 == 0) ls += input[i];
    else if(input[i] %3 == 0) rs += input[i];
    else return solve(input, n, i+1, ls+input[i], rs) || solve(input, n, i+1, ls, rs + input[i]);
    
    return solve(input, n, i+1, ls, rs);
}

bool splitArray(int *input, int size) {
    return solve(input, size, 0, 0, 0);
}
