#include <bits/stdc++.h>

using namespace std;
int main()
{
    char arr[2];
    fgets(arr,2);
    char hor[8]={'a','b','c','d','e','f','g','h'};
    char ver[8]={'1','2','3','4','5','6','7','8'};
    for(auto i:hor)
    {
        arr[1]!=i?(cout<<arr[0]<<i<<endl):continue;
    }
    for(auto i:ver)
    {
        arr[0]!=i?(cout<<i<<arr[1]<<endl):continue;
    }
}