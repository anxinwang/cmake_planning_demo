#include <iostream>
#include "process.h"

using namespace std;

void test()
{
    cout << "test" << endl;
}

int main()
{

    cout << "planning start" << endl;
    Process p;
    p.planProcess();
    cout << "planning end" << endl;
    return 0;
}