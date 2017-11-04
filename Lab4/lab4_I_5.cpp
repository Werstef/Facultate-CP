#include <iostream>
using namespace std;

int i;


void for_loop(int i){

    for(i=2; i<=60; i+=2)
        cout<<i<<" ";

    cout<<"\n";

}

void while_loop(int i){

    while(i<=60){
        cout<<i<<" ";
        i+=2;
    }

    cout<<"\n";

}

void dowhile_loop(int i){

    do{
        cout<<i<<" ";
        i+=2;
    }while(i<=60);

    cout<<"\n";

}

int main () {

    cin>>i;

    for_loop(i);
    while_loop(i);
    dowhile_loop(i);

    return 0;
}
