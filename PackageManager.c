#include <stdio.h>
#include <stdlib.h>
#include "PackageManager.h"
#include <string.h>


const char* LIP(){

    return system("apt list --installed");

}
const char* LUP(){

    return system("apt list --upgradeable");

}
const char* UIP(char *name){
    char comm[100] = "sudo apt-get remove ";

    //comm =  "sudo apt-get remove "
    strcat(comm, name);
    //comm = "sudo apt-get remove + name"

    return system(comm);
}
const char* ISP(char *name){
    char inComm[100] = "sudo apt-get install ";

    //inComm =  sudo apt-get install + el name
    strcat(inComm, name);

    return system(inComm);
}
const char* che(char *name){
    char commn[100]="dpkg -s ";
    //commn= dpkg-s+name
    strcat(commn,name);
    strcat(commn, " | grep \"Status:\" ");
    return system(commn);

}
