// --- Created by reviracio on 05.01.18. ---//

#include <iostream>
#include <string.h>
#include <stdio.h>

#include "CppHeader/SuenoHeader.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Search(int argc, char** argv){

    string searchKey="";

    searchKey=argv[1];

    if(searchKey=="hello"){
        system("/home/reviracio/Code/CLionProjects/Sueno/BashScripts/HelloWorld.sh"); //w programie
    }else if(searchKey=="update"){
        system("apt-get update");
    }else if(searchKey=="upgrade"){
        system("apt-get update && apt-get upgrade");
    } else if(searchKey=="stopwatch"){
        stopWatch();
    }else if(searchKey=="clion"){
        system("/bin/bash -c /opt/Clion/bin/clion.sh &"); //po programie
    }else if(searchKey=="javaHello"){
        system("/home/reviracio/Code/CLionProjects/Sueno/BashScripts/JavaHelloWorld.sh");
    }
}

int main(int argc, char** argv) {
    cout << "Sueno project: " << endl;

    if(argc>=2){
        Search(argc,argv);
    }else{
        cout << "Nice to meet you" << endl;
        //GitTest2
    }

    return 0;
}
