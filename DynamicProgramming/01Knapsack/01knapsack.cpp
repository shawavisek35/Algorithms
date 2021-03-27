#include <iostream>
using namespace std;


int knapsack(int w[], int v[], int capacity, int n)
{
    int dp[n+1][capacity+1],i,j;

    //Initialization of the dp matrix
    for(i=0;i<=n;i++)
    {
        dp[i][0] = 0;
    }
    for(i=0;i<=capacity;i++)
    {
        dp[0][i] = 0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=capacity;j++)
        {
            if(w[i-1]>j)
            {
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(v[i-1]+dp[i-1][j-w[i-1]], dp[i-1][j]);
            }
        }
    }
    return dp[n][capacity];
}

void DisplayTable(int t[][100], int n, int c)
{
    for(int i=0;i<=n; i++)
    {
        for(int j=0;j<=c;j++)
        {
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main()
{

    int n,w[100],v[100],capacity,i;
    cout << "Enter the Number of elements : ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "Enter the Weight of first element : ";
        cin >> w[i];
        cout << "Enter the Value of the first element : ";
        cin >> v[i];
    }
    cout << "Enter the capacity of the knapsack : ";
    cin >> capacity;
    cout << knapsack(w, v, capacity, n) << "\n";
    return 0;
}