#include<iostream>
using namespace std;
int findMissingNo (int arr[], int n)
{
   int sum;  
   sum  = ((n+1)*(n+2))/2;  
   for (int i = 0; i<n; i++)    
      sum -= arr[i];  
   return sum;
}
int main()
 {
   int n;   
   cout<<"Enter the size of array: "; 
   cin>>n;    
   int arr[n-1];  
   cout<<"Enter array elements: "<<endl;   
   for(int i=0; i<n; i++){    
      cin>>arr[i];  
   } 
   int missingNo = findMissingNo(arr,n);
   cout<<"Missing Number is: "<<missingNo;
   return 0;
}