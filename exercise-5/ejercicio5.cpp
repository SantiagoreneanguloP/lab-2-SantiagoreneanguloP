#include<iostream>
using namespace std;

int main(){

int x[6]={0, 1, 2, 3, 4, 5};
int fx[6];

for(int i=0; i<6; i++){
    fx[i]= x[i] * x[i] * x[i] - x[i] * x[i] + 5;
    cout<< x[i]<<"  "<<fx[i]<<endl; 
}


    return 0;
}