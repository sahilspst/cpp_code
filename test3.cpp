#include <iostream> 
using namespace std; 



int main()
{
    int a[10];
	int c = 2;
    a[-1] = 5;
    cout<<"Difference = "<<&a[-1] - &c<<endl;
    // for (int i = 0; i < 20; i++)
    // {
    //     cout<<"Before changing "<<&c<<endl;
    //     a[i-10] = 10;
    //     cout<<"After changing "<<&a[i]<<endl;
    //     cout<<"Difference = "<<&a[i] - &c<<endl;
    // }
    
	cout<<c<<endl;
    // cout<<&a[11]<<endl;
    // cout<<&c<<endl;
    return 0;
}