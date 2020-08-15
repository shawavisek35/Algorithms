#include <iostream>
using namespace std;
char s1[100], s2[100], result[100];
int table[100][100];

int main()
{
    int n1, n2, k=0;
    cin >> n1 >> n2;
    cin >> s1 >> s2;
    cout << s1 << "\n" << s2 << "\n";
    int j=0;
    while(j<n2){
        table[0][j] = 0;
        j++;
    }
    int i=0;
    while(i<n1){
        table[i][0] = 0;
        i++;
    }

    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                table[i][j] = 1+table[i-1][j-1];
                result[k++] = s1[i-1];
            }
            else
            {
                table[i][j] = max(table[i-1][j], table[i][j-1]);
            }
            
        }
    }
    cout << table[n1][n2] << "\n" << result << "\n";
    return 0;
}