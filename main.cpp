#include <iostream>
using namespace std;

int main() {
    int n, q, r, d, Nd;

    cout<<"Inserire un nuemero"<<endl;
    cin>>n;

    for(d=1; d<=n; d++)
    {
        q=n/d;

        r=n%d;

        if (r==0)
        {
            cout<<d<<"è divisore di"<<n<<endl;

            Nd=Nd+1;
        }
        else
        {
            cout<<""<<d<<" non è divisore di "<<n<<endl;
        }
    }

    cout<<"I divisori sono "<<Nd<<endl;

    if (Nd==2)
    {
        cout<<n<<" è un numero primo"<<endl;
    }
    else
    {
        cout<<n<<" non è un numero primo"<<endl;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
