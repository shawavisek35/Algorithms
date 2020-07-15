#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int x,y;
    pair <int,int> coordinate;
    cout << "Enter the coordinate of your position : ";
    cin >> x;
    cin >> y;
    coordinate = make_pair(x,y);
    cout << "You entered : " << coordinate.first << "\t" << coordinate.second << "\n";

    //More advanced use of pairs
    pair <int,char> demo1;
    //can be accessed through demo1.first ,demo1.second

    pair <int , pair < float , int > > demo2;
    //can be accessesd as demo2.first , demo2.second.first , demo2.second.second


    pair <char , pair < int,int>> demo3;

    //one can swap two pairs
    //by using pair1.swap(pair2)
    
    return 0;
}