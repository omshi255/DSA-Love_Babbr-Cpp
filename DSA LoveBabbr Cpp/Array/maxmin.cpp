// #include <iostream>
// using namespace std;
// #include <climits>
// int getmax(int num[],int n)
// {
// int max = INT_MIN;
//   for(int i=0;i<n;i++)
//     {
//         if(num[i]>max)
//         {
//           max = num[i];
//         }
//     }
//    return max;
// }
// int getmin(int num[],int n)
// {
// int min = INT_MAX;
//   for(int i=0;i<n;i++)
//     {
//         if(num[i]<min)
//         {
//           min = num[i];
//         }
//     }
//    return min;
// }

// int main()
// {
//   int size ;
//   cout<<"enter the size of an array"<<endl;
//   cin>>size;

//   int num[100];// max size
//    cout<<"enter the elements of an array : "<<endl;
//   for(int i=0;i<size;i++)
//     {
//       cin>>num[i];
//     }

//   cout<<"max is:"<<getmax(num,size)<<endl;
//   cout<<"min is:"<<getmin(num,size)<<endl;
//   return 0;
// }
#include <iostream>
using namespace std;
#include <climits>
int getmax(int num[],int n)
{
int maxi = INT_MIN;
  for(int i=0;i<n;i++)
    {
       maxi = max(maxi ,num[i]);
    }
   return maxi;
}
int getmin(int num[],int n)
{
int mini = INT_MAX;
  for(int i=0;i<n;i++)
    {
       mini = min(mini ,num[i]);
    }
   return mini;
}

int main()
{
  int size ;
  cout<<"enter the size of an array"<<endl;
  cin>>size;

  int num[100];// max size
   cout<<"enter the elements of an array : "<<endl;
  for(int i=0;i<size;i++)
    {
      cin>>num[i];
    }

  cout<<"max is:"<<getmax(num,size)<<endl;
  cout<<"min is:"<<getmin(num,size)<<endl;
  return 0;
}