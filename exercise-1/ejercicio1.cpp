#include <iostream>

using namespace std;

int main(){

    int a, b, c, suma, producto; float promedio;

   cout<<"ingresa un primer numero entero: "<<endl; cin>>a;

    cout<<"ingresa un segundo numero entero: "<<endl; cin>>b;

    cout<<"ingresa un tercer numero entero: "<<endl; cin>>c;




    suma= a+b+c;

    cout<<"La suma de los numero es: "<<suma<<endl;

    promedio= suma/3;

    cout<<"El promedio es: "<<promedio<<endl;

    producto= a*b*c;

    cout<<"El producto de los numeros es: "<<producto<<endl;

    if(a>b && a>c){
        cout<<"El numero  mayor es: "<<a<<endl;
    }

    else if(b>a && b>c){
        cout<<"El numero mayor es: "<<b<<endl;
    }

    else if (c>a && c>b){
        cout<<"El numero mayor es: "<<c<<endl;
    }


    if(a<b && a<c){
        cout<<"El numero menor es: "<<a;
    }

    else if(b<a && b<c){
        cout<<"El numero menor es: "<<b;
    }

    else if (c<a && c<b){
        cout<<"El numero menor es: "<<c;
    }

    return 0;
}