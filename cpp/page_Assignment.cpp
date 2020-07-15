//Page assignment algorithm
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
using namespace std;

bool checkSearchSpace(vector <int> , int , int);

//function to minimiza the no of pages read by an individual student
void assignPages(vector <int> books,int student)
{
    int sum = accumulate(books.begin(),books.end(),0);
    int maxpages = INT16_MAX;
    int l=0,mid=0;
    int h = sum;

    while(l<=h)
    {
        mid = (l+h)/2;
        if(checkSearchSpace(books ,mid,student))
        {
            maxpages = min(maxpages,mid);
            h = mid-1;
        }
        else{
            l = mid+1;
        }

    }
    cout << maxpages << " " << sum-maxpages;

}

//function to check whether a given search space is valid
bool checkSearchSpace(vector <int> books,int mid,int students)
{
    int studentCount = 1;
    int i=0;
    int partial_sum=0;
    while(i<books.size())
    {
        if(books[i]>mid){
            return false;
        }
        if(partial_sum + books[i]>mid){
            partial_sum = books[i];
            studentCount ++;
            if(studentCount>students){
                return false;
            }
        }
        else{
            partial_sum += books[i];
        }
        i++;

    }
    return true;
}

int main()
{
    vector <int> books;
    int n,students,pages;
    cout << "Enter the total number of books : " ;
    cin >> n;
    cout << "Enter the total number of students : ";
    cin >> students;
    
    for(int i=0;i<n;i++)
    {
        cin >> pages;
        books.push_back(pages);
    }
    cout << sizeof books / sizeof books[0];
    assignPages(books,students);
    return 0;
}