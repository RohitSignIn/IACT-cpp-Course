#include<iostream>
using namespace std;

// Function
void LinearSearch(int key){
    
   int arr1[6] = {2,3,4,5,9,0};

    for(int i=0; i<=5; i++){
        
        if(arr1[i] == key){
            cout<<i;
        }
    }
    cout<<-1;
}

int main(){

LinearSearch(11); // Function Calling

return 0;
}