#include <iostream>
using namespace std;

bool checkfibonacci(long long n)
{
    long long a = 0;
    long long b = 1;
    if (n == a || n == b) return true;
    long long c = a + b;
    while(c < n)
    { 
        a = b;
        b = c;
        c = a + b;
    }
    if(c == n) return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool result = checkfibonacci(n);
        if (result == true) {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
// #include <iostream>

// using namespace std;

// int main()
// {
//      int n,a,b,next;
//      cout<<"Enter a number to check if it is a fibonacci number: ";
//      cin>>n;         // 1)let n=9
//      if(n==0||n==1)  // 2)check if 9=0 or 9=1 (NOT)
//      cout<<n<<" is a fibonacci number\n\n";     //skip
//      else
//      a=0;b=1;        // 3) a=0 , b=1
//      next=a+b;       // 4) next=0+1=1
//      while(next<n)   // 5)loop starts from 1 and continues till next is less then 9
//      {
//         a=b;         // 6) a=1      ,9) a=1   ,12)a=2  ,15) a=3   ,18)a=5
//         b=next;      // 7) b=1      ,10)b=2   ,13)b=3  ,16) b=5   ,19)b=8
//         next=a+b;    // 8)next=1+1=2   ,11)next=1+2=3   ,14)next=2+3=5   ,17)next=3+5=8
//                      // 18)next=5+8=13 (loop ends)
//      }
//      if(next==n)     // 19)check if 13==9 (NOT)
//     cout<<n<<" is a fibonacci number";      //skip
//     else
//     cout<<n<<" is not a fibonacci number"; // 20)prints that 9 is not a fibonacci number.
//     return 0;
// }