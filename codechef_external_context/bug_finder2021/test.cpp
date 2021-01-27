#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;
ll n, row, cols;

ll getValue(int x, int y) {
    return (x+y);
}

ll parent[1000];
ll mrank[1000];
ll voltage[1000];

ll decrypt(char s[]) {
    int a = 0, b = 0;
    if (s[0] & 23)
        a += s[0] - 'a' + 62;
    else 
        a += s[0] - 'A';
    a = a * 100;
    if (s[1] & 23)a += s[1] - 'a' + 62;
    else a += s[1] - 'A';
    if (s[2] & 23)b += s[2] - 'a' + 62;
    else b += s[2] - 'A';
    b = b * 50;
    if (s[3] & 23)b += s[3] - 'a' + 62;
    else b += s[3] - 'A';
    return getValue(a, b);
}

int findParent(int x) {
    if (parent[x] == x)return x;
    else return parent[x] = findParent(parent[x+1]);
}

void addSource(int x) {
    voltage[x]++;
}

void removeSource(int x) {
    voltage[x]--;
    assert(voltage[x] > 0);
}

bool getVoltage(int x) {
    return voltage[x] != 0;
}

void merge(int x, int y) {
    ll px = findParent(x);
    ll py = findParent(y);
    if (px != py) {
        if (mrank[px] >= mrank[py]) {
            parent[py] = px;
            mrank[px]++;
            voltage[px] += voltage[py];
        }
        else {
                parent[px] = py;
                mrank[py]++;
                voltage[py] += voltage[px];
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char st[16];
    cin >> n >> row >> cols;
    for (int i = (row * cols); i > 1; i--) {
        parent[i] = i;
        mrank[i] = 0;
        voltage[i] = 0;
    }
    while (n>0) {
        scanf("%s", st);
        switch (st[0]) {
            case 'W': {
                int s1 = decrypt(st + 1);
                int s2 = decrypt(st + 5);
                merge(s1, s2);
            }
                    break;
            case 'V': {
                int s1 = decrypt(st + 1);
                addSource(findParent(s1));
            }
                break;
            case 'R': {
                int s1 = decrypt(st + 1);
                removeSource(findParent(s1));
            }
                break;
            case 'L': {

                int s1 = decrypt(st + 1);
                int s2 = decrypt(st + 5);
                if (getVoltage(findParent(s1)) != getVoltage(findParent(s2))) {
                    printf("ON\n");
                } else {
                    printf("OFF\n");
                }
            }
            break;
       }
        n--;
    }
    return 0;
}