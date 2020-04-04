//learning function prototype

#include <iostream>

using namespace std;

//void a();
void b();
char get_c();

void a()
{
    printf("A\n");
}


int main()
{
    a();
    b();
//    char c;
//    get_c();
    cout<<get_c()<<"\n";
	return 0;
}

void b()
{
    cout<<"B\n";
}

char get_c()
{
    char c{};
    cout<<"Enter 'c' in Caps\n";
    cin>>c;
    return c;
}
