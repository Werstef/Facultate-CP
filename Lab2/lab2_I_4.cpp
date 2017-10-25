#include <iostream>
using namespace std;

int no_students,grade;

int main () {

    cin>>no_students;
    int pass=1;
    double under8=0;
    for ( int i=1 ; i<=no_students ; i++ ){
            cin>>grade;
            if ( grade < 5 )
                pass=0;
            if( grade < 8 )
                under8++;
    }

    if ( pass )
        cout<<"Everyone passed \n";
    else
        cout<<"Not everyone passed \n";

    cout<<under8*100/no_students<<"%";


    return 0;
}
