#include<iostream>
using namespace std;
void read_matrix(int array[30][30],int p,int q)//function display read matrix is declared here//
{
    int i,j;
    for(i=0;i<p;i++)
    {for(j=0;j<p;j++)
    {
        cout<<"array["<<i<<"]["<<j<<"]:";
        cin>>array[i][j];
    }
    }
}
void dispaly_matrix(int array[35][35],int p,int q)//dispaly matrix function is used here
{
    int i,j;
    for (i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            cout<<" "<<array[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int p [35][35];
    int r,c;
    cout<<"Enter he number of rows:";
    cin>>r;
    cout<<endl;
    cout<<"enter the numner of colomns:";
    cin>>c;
    read_matrix(p,r,c);
    cout<<"The matrix is:";
    cout<<endl;
    dispaly_matrix(p,r,c);
    return 0;
}

