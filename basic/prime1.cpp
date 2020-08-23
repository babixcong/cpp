#include<iostream>
using namespace std;
int main(){
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i=2;i<=n;i++)
            while (n%i == 0  ) {
                cout << i << " ";
                n /= i;
            }
        cout << endl;
        
    }
    return 0;
}


class a;
class b;

class c{
    $a;
    $b;
    __contruct(class a, class b) {
        this->a = a;
        this->b = b;
    }
}

a1 = new class a();
b1 = new class b();
c1 = new(a1, b1);


app->bind('C', function() {
    a1 = new class a();
    b1 = new class b();
    c1 = new class (a1, b1);
})




app->resolve('C';)
app['C']
app('C');
app->make('C');
