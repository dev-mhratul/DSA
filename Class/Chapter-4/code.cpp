#include <iostream>
using namespace std;

int main(){
    // 1st pattern problem
    // for(int i=0; i<4; i++){
    //     for(int j=1; j<5; j++){
    //     cout<<j;
    //     }
    //     cout<<endl;
    // }

    // 2nd pattern problem.
    // int n=3; 
    // int num= 1;

    // for(int i= 0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<< num;
    //         num++;
    //     }
    //     cout<<endl;
    // }

    
    // triangle pattern;
    
    // for(int i= 0; i<5; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // // triangle pattern-2

    // for(int i=1; i<n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }


    // triangle pattern-3
    // for(int i=1; i<n; i++){
    //     for(int j=i; j>0; j--){
    //         cout<<j;                                
    //     }
    //     cout<<endl; 
    // }

    // inverted triangle pattern;

    // int n=4;
    // for(int i=1; i<=n; i++){
    //     for(int j=2; j<=i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=i; k<=n; k++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }


    int n=4;
    // 1st
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        cout<<"*";

        if(i != 0){
            for(int k=0; k<(2*i-1); k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }

    // 2nd
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+2; j++){
            cout<<" ";
        }
        cout<<"*";

        if(i != n-2){
            for(int k=0; k<(2*(n-i)-5); k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

    }

    
    
    return 0;
}