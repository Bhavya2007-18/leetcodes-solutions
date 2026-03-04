#include <iostream>
using namespace std;

int main(){

    int arr[] = {2, 7, 11, 15};
    int target = 9;

    for ( int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        for ( int j=i+1; j < sizeof(arr)/sizeof(arr[0]); j++){
            if (arr[i] + arr[j] == target){
                cout << "Indices: " << i << " and " << j << endl;
                break;
            }
        }
    }





    return 0;
}