#include <iostream>

using namespace std;

void min_max(int*arr,int size,int*min,int*max){
    *max=*arr;
    *min=*arr;
    for(int* p=arr+1;p<arr+size;p++){
        if(*p>*max){
            *max=*p;
        }
        if(*p<*min){
            *min=*p;
        }
    }
}
int main(){

    int a[5]={6,10,3,71,13};
    int y,x;
    min_max(a,5,&y,&x);
    cout<<"min: "<<y<<endl;
    cout<<"max:"<<x<<endl;
    int b[5]={7,65,90,158,764};
    min_max(b,5,&y,&x);
    cout<<"min: "<<y<<endl;
    cout<<"max:"<<x<<endl;
    return 0;
}