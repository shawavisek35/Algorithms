/*
    Example
    n=2
    m=2
    N=3
    arr[] = {1,1,1}

    output: 1
*/

int minPages(int n, int m, int N, int arr[]) {
    int i, j, min, sum;
    min = sum = 0;
    for (i = 0; i < N; i++) {
        sum += arr[i];
    }
    if (m > sum) {
        return -1;
    }
    for (i = 0; i < N; i++) {
        if (m - arr[i] < 0) {
            break;
        }
        m -= arr[i];
        min++;
    }
    return min;
}