#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=10){
            int s= (x)-((x/10)*10);
            cout<<(s)<<endl;
        }else{
            cout<<x<<endl;
        }
    }
	// your code goes here
	return 0;
}
