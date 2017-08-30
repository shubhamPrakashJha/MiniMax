#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {


    long int arr[5];
    long int sum[5];
    long int minimum;
    long int maximum;
    for(int i = 0; i<5; i++){
        cin >> arr[i];
    }
    sum[0] = arr[1]+arr[2]+arr[3]+arr[4];
    sum[1] = arr[0]+arr[2]+arr[3]+arr[4];
    sum[2] = arr[1]+arr[0]+arr[3]+arr[4];
    sum[3] = arr[1]+arr[2]+arr[0]+arr[4];
    sum[4] = arr[1]+arr[2]+arr[3]+arr[0];

    minimum = sum[0];
    maximum = sum[0];
    for(int i =0;i<=4;i++){
        if(sum[i]>maximum){
            maximum = sum[i];
        }
        if(sum[i]<minimum){
            minimum = sum[i];
        }

    }
    cout<<minimum<<" "<<maximum;

    return 0;
}