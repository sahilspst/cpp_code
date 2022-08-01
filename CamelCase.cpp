#include <iostream>
using namespace std;

int a;
char b;
string str;
long c;
bool hein;

class Solution{
private:
public:
//delimiters : * % -
    string CamelCase(string str){
        int n = str.size();
        string sum = "";
        string ans = "";
        int wordCount = 1;
        //O(n) time complexity
        for (int i = 0; i < n; i++){
        //     if(str[i] != ' ' && str[i] != '*' && str[i] != '%' && str[i] != '-'){
        //         sum += tolower(str[i]);
        //         continue;
        //     }

        if(!(int(str[i]) >= 32 && int(str[i]) <= 47)){
                sum += tolower(str[i]);
                continue;
            }

                sum[0] = toupper(sum[0]);
                ans += sum;
                sum = "";  
        }

        sum[0] = toupper(sum[0]);
        ans += sum;
        ans[0] = tolower(ans[0]);
        return ans;
    }
};

int main()
{

    cout<<a<<endl<<b<<endl<<str<<endl<<c<<endl<<hein<<endl;
    // Solution a;
    // string str = "a b c d-e-f%g";
    // string obj = a.CamelCase(str);
    // cout<<"Camel Case is : "<<obj<<endl;
    // return 0;
}
