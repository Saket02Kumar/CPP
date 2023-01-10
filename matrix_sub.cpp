#include<iostream>
using namespace std;
class matrix
{
    public : int a[15][15],b[15][15],sub[15][15],i,j,r,c;
    char mat;
    void get();
    void put();
    void matrix_sub();

};

void matrix ::get()
{
    cout<<"enter row and column of the matrix :";
    cin>>r>>c;
    cout<<"\n enter "<<r*c<<"elements in the first matrix :";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];

        }
    }
    cout<<"\n enter"<<r*c<<" elements in the second matrix=";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    }
void matrix ::put()
{
    cout<<"\n given matrices are \n \n";
    cout<<"a=";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"\t"<<a[i][j];
        }cout<<"\n";
    }
    cout<<"\n ...............\n\n";
    cout<<"b=";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"\t"<<b[i][j];
        } cout<<"\n";
    }
}
void matrix :: matrix_sub()
{
cout<<"\n substraction of given matrices is \n ............\n substraction is =\n";
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        sub[i][j]=a[i][j]-b[i][j];
        cout<<"\t"<<sub[i][j];
    }cout<<"\n";
}
}


int main(){
    matrix ob;
    ob.get();
    ob.put();
    ob.matrix_sub();
    
}