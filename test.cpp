#include<iostream>
using namespace std;



void print(int a){
    cout<<a<<endl;
}

void print(char a){
    cout<<a<<endl;
}



int main()
{
    int a[10] = {2, 9, 4, 8, 12, 14, 18, 4, 2, 5};
    int ans[10];
    //for elements except the last one
    for(int i = 0; i<10; i++){
        for(int j = i+1; j<10; j++){
            if(a[i] < a[j]){
                //cout<<"closest element that is greater than "<<a[i]<<" and is to the right of it is "<<a[j]<<endl;
                ans[i] = a[j];
                break;
            }
            else {
                ans[i]= a[i];
               // break;
            }
        }
    }

    ans[9] = a[9]; //for the last element
    //printing the array
    cout<<"{";
    for(int i = 0; i<10; i++){
        if(i != 9) cout<<ans[i]<<", ";
        else cout<<ans[i]<<"}";
    }
  
    return 0;
}