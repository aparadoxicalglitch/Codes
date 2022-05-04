#include<iostream>
using namespace std;

int main()
{
    int s,t;
    cout<<"Enter the value of s : ";
    cin>>s;
    cout<<"Enter the value of t : ";  
    cin>>t;
    int al,ol;
    cout<<"Enter the location of apple tree : ";  
    cin>>al;  
    cout<<"Enter the location of orange tree : "; 
    cin>>ol;
    int na,no;
    cout<<"Enter the number of apple : ";
    cin>>na; 
    cout<<"Enter the number of orange : ";
    cin>>no; 
    
    int apple[100], orange[100];
    int ap = 0, ora =0;
    int ea,eo;
    cout<<"Enter the unit distance of apple ";
    for(int i = 0; i < na; i++)
    {
        cin>>ea;
        apple[i] = ea+al;
    }
    cout<<"Enter the unit distance of orange ";
    for(int i = 0; i < no; i++)
    {
        cin>>eo;
        orange[i] = eo+ol;
    }
    int c1=0, c2=0;
    for(int i = 0; i < na; i++)
    {
        if(apple[i]>=s && apple[i]<=t)
        {
            c1++;
        }
    }
    for(int i = 0; i < no; i++)
    {
        if(orange[i]>=s && orange[i]<=t)
        {
            c2++;
        }
    }
    cout<<"The number of apple in sam's house range : "<<c1<<endl;
    cout<<"The number of orange in sam's house range : "<<c2<<endl;

    return 0;
}