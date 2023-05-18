#include <iostream>

using namespace std;

void minarr(int arr[],int n);
int ganjil(int x);

int main()
{
    int n;
    cout << "masukan panjang array : ";
    cin >> n;

    int x[n];
    for(int i=0; i<n; i++){
        cout << "masukan nilai array indeks ke-" << i << " :";
        cin >> x[i];
    }

    minarr(x,n);

    return 0;
}
int ganjil(int x){
    return (x%2==1);
}
void minarr(int arr[],int n){
    int temp = arr[0];
    int index=-1;
    for(int i=0;i<n;i++){
        if(!ganjil(arr[i]) && arr[i]<temp){
            temp=arr[i];
            index=i;
        }
    }
    if(index==-1){
    cout << "bil tidak ada" << endl;
    }else{
    cout << temp <<" adalah bil genap terkecil di index :" << index << endl;
    }
}
