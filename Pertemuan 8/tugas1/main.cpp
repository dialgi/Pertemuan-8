#include <iostream>

using namespace std;
//insert sort
void insertsort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;

        for(j=i-1;j>=0&&arr[j]<temp;j--)
        {
        arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }

}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,1,4,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertsort(arr,n);
    cout<<"Urutan : ";
    printarr(arr,n);

    return 0;
}
/*bubble sort
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j--){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"";

    }
    cout<<endl;
}
int main()
{
    int arr[]={2,2,1,3,1,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    cout<<"Urutan : ";

    printarr(arr,n);

    return 0;
}*/
