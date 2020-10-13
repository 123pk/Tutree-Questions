/*
Created by :- Pawan Giri
Time complexity :- O(n^2)

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{  
    // we are  using n as input variable for displaying pattern of n
    int n;
    cin>>n;
    
    /*
     Point to note is that we are going to print a pattern of integrs of (n+(n-1)) height and width n
     let us take and example .let take n=4
     so pattern should look like :- 
       
       1 2 3 4
        2 3 4
         3 4
          4
         3 4
        2 3 4
       1 2 3 4
       
       Here we can divide pattern into two part one is upper triangular part and second one is lower triangular part 
       
       * Note :- Both triangles have height (n) here n is 4 and (n) is common in both so we will need to neglect it.
       
       As it already printed in one triangular pattern we don't need to print in second/bottom triangular pattern .
       So height is (n)+(n-1).
       
       And width is not more than n .
     
    
    */
    
    
    //printing upper triangular pattern of height (n) . We will start from 1 to (n)
    
    
    for(int i=1;i<=n;++i)
    {   
        //  Here we are filling up space for leftout elements filled with spaces .This loop will start from 1 to (i-1)
        
        for(int j=1;j<i;++j)
        {
            cout<<" ";
        }
        
        for(int j=i;j<=n;++j)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    
    //printing lower trinagular pattern with height (n-1). Here we start from (n-1) to 1 as (n) is already printed so we will not print (n) again
    
    for(int i=n-1;i>=1;--i)
    {   
        //Here we are filling up space for leftout elements filled with spaces .This loop will start from 1 to (i-1)
        
        for(int j=1;j<i;++j)
        {
            cout<<" ";
        }
        for(int j=i;j<=n;++j)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
