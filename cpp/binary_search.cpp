//binary search
#include <iostream>
#include <vector>
using namespace std;

vector <int> v;
int binary_search(int,int,int);

int main()
{    
    int key,n,a,result;
    cout << "Enter the length of the array : ";
    cin >> n;
    for(int i=0 ;i <n ; i++)
    {
        cout << "Enter element at array[" << i << "] : ";
        cin >> a;
        v.push_back(a);
    }
    cout << "Enter the element to find : ";
    cin >> key;
    result = binary_search(0,v.size()-1,key);
    cout << "Element found at : " << result << "\n";
    return 0;
}

int binary_search(int beg,int end,int key)
{
    int mid = (beg+end)/2;
    if(v[mid]==key)
    {
        return mid;
    }
    
    if(v[mid]>key)
    {
        binary_search(beg,mid,key);
    }
    else{
        binary_search(mid+1,end,key);
    }
}