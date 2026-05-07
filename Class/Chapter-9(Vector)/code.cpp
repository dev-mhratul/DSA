#include <iostream>
#include <vector>
using namespace std;


int vectorPro(vector<int> num, int rnge){
    int falt=0;
    for(int i=0; i<rnge; i++){
         falt= falt^num[i];
    }
    return falt;
}

int main(){
     vector <int> num= {2,2,1,3,3,4,4,5,5};
     int rnge= num.size();
     cout<< vectorPro(num, rnge);


}