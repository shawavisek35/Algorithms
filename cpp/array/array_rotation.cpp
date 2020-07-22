#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class ArrayRotation
{
    public:
        
        vector <int> rotate(vector <int> arr,int d)
        {
            queue <int> temp;
            register int i;
            for(i=0;i<d;i++)
            {
                temp.push(arr[i]);
            }
            vector <int> ::iterator t,t2;
            t2 = arr.begin();
            t = arr.begin();
            for(i=0;i<d;i++)
            {
                t++;
            }
            arr.erase(t2,t);
            for(i=0;i<d;i++)
            {
                arr.push_back(temp.front());
                temp.pop();
            }
            return arr;
            
        }

};

int main()
{
    int n,element,d;
    vector <int> numbers,array;
    cout << "Enter the no. of elements : ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> element;
        numbers.push_back(element);
    }
    cout << "Enter the rotation value : ";
    cin >> d;

    //creating an object
    ArrayRotation Array;
    array = Array.rotate(numbers,d);
    for(auto t : array)
    {
        cout << t << "  "; 
    }
    cout << "\n";
    return 0;
}