#include<bits/stdc++.h>  
using namespace std; 

int main() 
{ 
    // Initializing a vector 
    int n;
    cout << "Enter number of elements: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements of array:-"<<endl;
    for(int i=0; i<n; i++)
        cin>>v[i];
    // Converting vector into a heap 
    // using make_heap() 
    make_heap(v.begin(), v.end());
    
    //Displaying the elements of heap
    cout << "Elements present in heap: ";
    for(auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout<<endl;
    
    // Displaying the maximum element of heap 
    // using front()
    cout << "The maximum element of heap is : "; 
    cout << v.front() << endl; 
    
    return 0; 
} 