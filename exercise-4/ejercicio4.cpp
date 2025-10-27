#include<iostream>
using namespace std;

int main(){

int a, b, c, medio;

cout<<"ingresa tres numeros enteros: "; cin>>a>>b>>c;

if(a>b && a>c){
    cout<<"el numero mayor es: "<<a<<endl;
}

else if(b>a && b>c){
    cout<<"el numero mayor es: "<<b<<endl;
}


else{
    cout<<"el numero mayor es: "<<c<<endl;
}



if(a<b && a<c){
    cout<<"el numero menor es: "<<a<<endl;
}

else if(b<a && b<c){
    cout<<"el numero menor es: "<<b<<endl;
}

else{
    cout<<"el numero menor es: "<<c<<endl;
}

if((a>b && a<c) || (a>c && a<b )){
    medio=a;
}

else if((b>a && b<c)||(b>a && b<c)){
    medio=b;
}

else{
    medio=c;
}

cout<<"el numero de enmedio es: "<<medio<<endl;

    return 0;
}