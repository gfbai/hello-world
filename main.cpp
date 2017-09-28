#include <unistd.h>
#include <string>
#include <iostream>

using namespace std;

int
main(int argc, char *argv[])
{
    string path = "/tmp/debug";

    // The following works no matter the file's ownership
    if (0 == access(path.c_str(), F_OK))
    {
        cout << "File exists ..." << endl;
    }
    else
    {
        cout << "File not exists ..." << endl;
    }

    return 0;
}
