# include<iostream>
using namespace std ;
# define MAX 20
int main(){
    int arr[MAX],i,j,k,n,temp,xchanges;
    cout<<"Enter the number of elements ?";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the element"<<(i+1)<<":";
        cin>>arr[i];
    }
    cout<<"unsorted list:\n";
    cout <<arr[i];
    cout<<"\n";
    for(i=0;i<n-1;i++){
        xchanges=0;
        for(j=0;j-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchanges++;
            }
        }
        if(xchanges==0)
        break;
        cout<<"After the pass"<<(i+1)<<" elements are:";
        for(i=k;k<n;k++){
            cout<<arr[i];
            cout<<"\n";
        }
        cout<<"sorted listed is:";
        for(i=0;i<n;i++){
            cout<<arr[i]<<",";
        }
    }
    return 0;
}
