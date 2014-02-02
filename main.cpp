#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, number;
    stack<int> numbers;
    cout<<"Masukkan berapa tumpukan yang ingin dibuat : ";
    cin>>n;
    for(int i =0; i<n; i++){
       cin>>number;
       numbers.push(number);
    }
    cout<<endl<<endl;
    while(!numbers.empty()){
       cout<<numbers.top()<<endl;
       numbers.pop();
    }
    cout<<endl;
    system("PAUSE");
    return 0;
}
