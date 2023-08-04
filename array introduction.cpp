#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,arr1[100],arr2[100],i;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>> arr1[i];
    }
    for(i=0;i<N;i++)
    {
        arr2[i]=arr1[ N-i-1];
    }
    for(i=0;i<N;i++)
    {
       cout<<arr2[i]<<" "; 
    } 
  
    return 0;
}