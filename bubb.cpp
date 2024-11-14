# include <iostream>
using namespace std;
# define MAX 20
int main(){
  int arr[MAX],swap,xchanges=0,n;
  cout<<"Enter the array of elements you want:";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"Enter the element"<<(i+1)<<",";
    
    cin>>arr[i];
  }
  cout<<"unsorted lits is\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
    if(arr[j]>arr[j+1])  {
      swap=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=swap;
      xchanges++;
    }
    }
    if (xchanges==0)
    break;
    cout<<"Afetr the pass <"<<(i+1)<<"> elements are:";
    for(int k=0;k<n;k++)
      cout<<arr[k]<<",";
  
  cout<<"\n";
}
    cout<<"sorted list";
    for(int i=0;i<n;i++)
    
      cout<<arr[i]<<" ";
    return 0;
  
}