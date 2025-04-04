#include <iostream>
using namespace std;

int main(){
    cout<<"int:"<<sizeof(int)<<"bytes"<<endl;
    cout<<"char:"<<sizeof(char)<<"bytes"<<endl;
    cout<<"float:"<<sizeof(float)<<"bytes"<<endl;
    cout<<"double:"<<sizeof(double)<<"bytes"<<endl;
    cout<<"bool:"<<sizeof(bool)<<"bytes"<<endl;

    int a=74;
    int b=185;
    cout<<"a:"<<a<<" operador direccion: "<<&a<<endl;
    cout<<"b:"<<b<<" operador direccion: "<<&b<<endl;
    int* dir=&a;
    cout<<dir<<endl;
    cout<<*dir<<endl;
    cout<<&dir<<endl <<sizeof(dir)<<endl;
}