/*
Created :- Pawan Giri
Time Complexity( O(n*(m log m)))
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{  
    
    // Here we are representing (str) for (main string) and (substr) for substring
    
	string str , substr ;
	
	cin>> str >> substr;
	
	/* we are sorting substring because it will be easy to compare and the position of characters doesnot matter 
	  any permutaion of substring will be our answer
	*/
	
	sort(substr.begin(),substr.end());
   
  int n=str.size(),m=substr.size();         // storing size of string in (n) and size of substring in (m)
	 
	 
	 /*
	   we will look for all substring from each index of size(m)  
	   we will store the substring in temperory string variable , then we will sort it and after sorting we will compare with 
	   our second string(sub string ) . If they are equal then we will print substring and index.
	   
	   Note here we will use another variable string (ans) which will store the substring of size(m) from index (i to i+m) and it will 
	   contain characters in order they appeared in main string.
	 
	 */
	 
	for(int i=0;i<=(n-m);++i)                
	{  
	    string  temp="", ans="";
	    
	    for(int j=0;j<m;++j)
	    {
	        temp+=str[j+i];
	    }
	    
	    ans=temp;                             // we will store the characters in correct order as they appear in main string 
	    
	    sort(temp.begin(),temp.end());        //sorting temperory string so we can do coparison in O(1) time 
	    
	    if(temp==substr)
	    {
	        cout<<"substring "<<ans<<" present at index "<<i<<endl;          // if the temp and substr are equal we will print the substring with index
	    }
	}
    
}
