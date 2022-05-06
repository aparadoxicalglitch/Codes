#include<iostream>
using namespace std;

int main(){
    int n,p,front,back;
    cout<<"Enter the number of pages : ";
    cin>>n;
    cout<<"Enter the page number you want to go to : ";
    cin>>p;
    front = p/2;
    back = n/2-p/2;
    if(front<back)
    {
        cout<<"You will have to turn "<<front<<" pages from the front";
    }
    else
    {
        cout<<"You will have to turn "<<back<<" pages from the back";
    }
}
