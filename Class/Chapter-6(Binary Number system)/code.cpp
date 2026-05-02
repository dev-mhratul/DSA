#include <iostream>
using namespace std;

// int decToBin( int decs){
//      int ans=0, pow=1;

//      while(decs>0){
//         int rem= decs % 2;
//         decs /= 2;

//         ans+=(rem*pow);
//         pow*=10;

//     }
//     return ans;
// }


int binToDec( int binNum){
     int ans=0, pow=1;

     while(binNum>0){
        int rem= binNum % 10;
        binNum /= 10;

        ans+=(rem*pow);
        pow*=2;

    }
    return ans;
}


int main(){
    int dec= 1110100100;
    cout<<binToDec(dec)<<endl;
    return 0;
}