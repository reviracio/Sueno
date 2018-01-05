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
    timeval t1, t2;
    gettimeofday(&t1, NULL);
    string line;
    cout << endl;
    cout << "Press a Enter to continue...";
    getline(cin,line);
    gettimeofday(&t2, NULL);
    int stopwatchTime = (t2.tv_sec - t1.tv_sec) * 1000 + (t2.tv_usec - t1.tv_usec)/1000;
    cout << "Elapsed time: " << stopwatchTime/1000 << ":" << stopwatchTime%1000 << endl;
}