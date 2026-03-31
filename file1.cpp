#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    cout<<"PELUANG FOR"<<endl
    for(int i=0; i<=4; i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    srand(time(0));

    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }
    cout<<"bilangan acak while yang terakhir ="<<x <<endl;
    cout<<endl;

    cout<<"PERULANGAN DO...WHILE"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand ()%10;
    }while(x<=5);

    cout<<"bilangan acak do-while yang terakhir ="<<x <<endl;
    cout<<endl;
}
Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"memasukkan nilai matematika = ";
    cin>>nilM
    cout<<"memasukkan nilai bahasa inggris = ";
    cin>>nilB
}