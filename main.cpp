
#include "MeloRPG.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    //cout << "Version " << MeloRPG_VERSION_MAJOR << "." << MeloRPG_VERSION_MINOR << endl;

    std::string windowTitle("Yo!");
    MeloRPG meloRPG;
    meloRPG.createWindow(800, 600, windowTitle);
    meloRPG.start();
}