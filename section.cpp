#include<iostream>
using namespace std;
void SwapByRef(int& a,int& b){
    int Temp=a;
    a=b;
    b=Temp;
}
void SwapByVal(int a,int b){
    int Temp=a;    a=b;
    b=Temp;
}
int main(){
    int x=10,y=15;
    SwapByRef(x,y);
    cout<<x<<endl;
    cout<<y<<endl;

}