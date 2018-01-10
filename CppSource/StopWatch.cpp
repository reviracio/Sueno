// --- Created by reviracio on 05.01.18. ---//

#include <iostream>
#include <sys/time.h>
#include <string.h>

#include "../CppHeader/SuenoHeader.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

void stopWatch(){
    timeval startTime;
    timeval stopTime;
    gettimeofday(&startTime, NULL);
    cout << endl;
    cout << "Press a Enter to continue...";
    string line;
    getline(cin,line);
    gettimeofday(&stopTime, NULL);
    int elapsedTime;
    elapsedTime = (stopTime.tv_sec - startTime.tv_sec) * 1000 + (stopTime.tv_usec - startTime.tv_usec)/1000;
    cout << "Elapsed time: " << elapsedTime/1000 << ":" << elapsedTime%1000 << endl;
}