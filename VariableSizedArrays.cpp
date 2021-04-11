#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num_of_arrays , querries;
    cin>>num_of_arrays>>querries;
    int array_of_querries[querries];
    vector <int> array_of_ptrs[num_of_arrays];
    for (int k = 0 ; k < num_of_arrays ; k++)
    {
        int a;
        cin>> a;
        for (int l = 0 ; l <a ; l++)
        {
            int o;
        
            cin>>o;
            array_of_ptrs[k].push_back(a);
        }
    }
    for (int l = 0 ; l<querries ; l++)
    {
    int x,y;
    cin>>x>>y;
    array_of_querries[l]= array_of_ptrs[x][y]; 
    }
    for ( int p = 0 ; p< querries ;p++)
    {
        cout<<array_of_querries[p]<<endl;

    }
    return 0;
}