#include <iostream>

using namespace std;



int main () {

    int input_seconds;

    cin>>input_seconds;

    int fhours=input_seconds / 3600;

    input_seconds-=fhours * 3600;

    int fminutes= input_seconds / 60;

    input_seconds-=fminutes * 60;

    cout<<fhours<<" "<<fminutes<<" "<<input_seconds;

    return 0;
}
