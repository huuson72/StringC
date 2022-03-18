
#include<iostream>
#include<string.h>
using namespace std;
// int getMaxValue(int *p ,int n){
//    int maxValue = p[0];
//    for (int i = 0; i <n; i++)
//    {
//       if (p[i]>maxValue)
//       {
//          maxValue = p[i];
//       }
//    }
//    return maxValue;

   
// }
// int main(){
// int n;
// int arr[100];
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//    cin>>arr[i];

// }
//  cout << "Max value = " << getMaxValue(arr, n);
// return 0;


// }
int main(){
int n;
cin>>n;
int *arr;
arr = new int[n];
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
  if (arr[i]%3==0 && arr[i]%5!=0)
  
     cout<<arr[i]<<" ";
  
  
}
delete[]arr;





}