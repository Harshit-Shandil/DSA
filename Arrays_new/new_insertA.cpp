#include <iostream>
using namespace std;
int main()

{
    
    // int arr[4]={10,30,40,50};

    // for(int i=0; i<4; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


    int i=0; 
    int n=0;
    cout<< "Enter n" <<endl;
    cin>>n;
    int arr[n]={0};
    
    cout<<"Insert values :";
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<< "Printing inserted values" <<endl;
     for (i=0; i<n; i++)
    {
        cout<< arr[i] <<" ";
    }

    return 0;
}