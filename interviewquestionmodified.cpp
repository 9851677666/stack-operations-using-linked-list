#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
     int arr[100];
     vector<int>a;
     vector<int>b;
      int s;
      cout<<"enter the size"<<endl;
      cin>>s;
      cout<<"input values"<<endl;
      for(int i{0};i<s;++i)
      {
          scanf("%d",&arr[i]);
      }
     
     int m;
    cout<<"enter the value to sum up"<<endl;
    cin>>m;
    for(int i{0};i<s;++i)
    {
        int c = arr[i];
        for(int j{0};j<s;++j)
        {
            int p = arr[j];
            if(c+p == m)
            {
                a.push_back(i);
                b.push_back(j);
                
            }
        }
    }
   for(size_t i{0};i<a.size();++i)
   {
       cout<<a[i]<<" "<<b[i]<<endl;
   }
    return 0;
    
}