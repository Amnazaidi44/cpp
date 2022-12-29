#include<iostream>
using namespace std;
int main() {
    int arr[10], sum=0;
    cout<<"Welcome to programme of Amna Zaidi"<<endl;
    cout<<"Enter any 10 integers"<<endl;
    for(int i=2; i<12; i++) {
        cin>>arr[i];
    }
    for(int i=2; i<12; i++) {
        if (i==3||i==5) {
            continue;
        }
        else {
            sum=sum+arr[i];
        }
    } {
        cout<<endl;
        cout<<"Sum of 10 except index 3 and 5 is : "<<sum<<endl;
        cout<<"Reverse order"<<endl;
    }
    for(int i=9; i>-1; i--) {
        cout<<arr[i]<<endl;
    }
    return 0;
}