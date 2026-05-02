#include <iostream>
using namespace std;

// int linearSearch(int arr[],int terget,int sz){
//     for(int i=0; i<sz; i++){
//         if(arr[i] == terget){
//             return i;
//         }
//     }
//     return -1;
// }

    void reverseArr(int arr[], int sz){
        int start=0, end= sz-1;
        
        while(start < end){
            swap(arr[start] , arr[end]);

            start++;
            end--;
        }
    }


int main(){
    // leanier search algorithm

    int arr[]= {1,2,3,4,5,6};
    int sz= 6;
    
     reverseArr(arr, sz);
    
    for(int i=0; i<sz; i++){
        cout<< arr[i];
    }

    return 0; 
}