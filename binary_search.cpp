#include <iostream>
#include <vector>
using  namespace std;

int binary_search (vector <int> arr,int ter)
{
    int st=0,end=arr.size()-1;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(ter>arr[mid])
        {
            st=mid+1;
        }
        else if (ter<arr[mid])
        {
            st=mid-1;
        }
        else{
            return mid;
        }
    }
}


// main function
int main()
{
    vector <int> arr={-1,0,3,4,5,9,12};
    int ter=12;
    cout<< binary_search( arr,ter)<<endl;
    return 0;
}

