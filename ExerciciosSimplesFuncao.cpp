#include <iostream>

using namespace std;

void mensagem()
{
cout<<"MENSAGEM RECEBIDA!"<<endl;
}

int main()
{
    int i;

    i=1;

    while( i<=3 )
    {
        mensagem();

        i +=1;
    }

}

