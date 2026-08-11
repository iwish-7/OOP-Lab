#include <iostream>
using namespace  std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    float *arr = new float[n];

    for(int i=0;i<n;++i) 
        cin>>arr[i];

    float sum=0.0;
    for(int i=0;i<n;++i) 
        sum+=arr[i];

    float avg = sum/n;

    cout<<"Sum = " << sum << "\n";
    cout<<"Average = " << avg << "\n";

    delete[] arr;
    arr = nullptr;

    return 0;
}
