#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

long MaximumPariwiseProduct(std::vector<long int> vec,long n)
{
    long max1 = 0 , max2 = 0;
    long index  = -1;
    for (long i = 0; i < n ; i++)
    {
        if (vec[i]>max1)
        {
            max1 = vec[i];
            index = i;
        }
    }
    for (long i = 0; i < n ; i++)
    {
        if ((i != index) && (max2<vec[i]))
        {
            max2 = vec[i];
        }
    }
    return max1*max2;
    

}


int main()

{
    long n;
    cin>>n;
    vector <long> vec;
    long a;
    for (long  i =0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    long result = MaximumPariwiseProduct(vec,n);
    cout <<result;
}