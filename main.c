#include <stdio.h>
#include <stdlib.h>
#include "PackageManager.h"
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc>1){
    if(strcmp(argv[1],"--help") == 0){
        printf("A  package  manager  keeps track of what software is installed on\nyour computer, and allows you to easily install new software, up‐\ngrade  software  to  newer  versions, or remove software that you\npreviously installed. As the name suggests, package managers deal\nwith packages: collections of files that are bundled together and\ncan be installed and removed as a group.   Often,  a  package  is\njust  a  particular  program. For instance, the instant messaging\nclient gaim is contained in the Debian package of the same  name.\nOn the other hand, it is common for programs to consist of sever‐\nal interrelated packages. For instance,  the  gimp  image  editor\nconsists  not only of the gimp package, but also of the gimp‐data\npackage; in addition, several optional add‐on packages  (contain‐\ning  esoteric data, documentation, and so on) are also available.\nIt is also possible for several small,  related  programs  to  be\ncontained  in a single package: Some packages require other pack‐\nages in order to function. In Debian, packages can depend upon, ,\nrecommend, suggest, break, or conflict with other packages.");
    }}else{

    char command[50];
    char buf[100];
    //gets(command);
    //strcpy( command, "dir" );
    //system(command);
    char c;

    printf("######################\n\n->>PACKAGE MANAGER<<-\n\n######################\n");

    while(c != 'f')
    {
        printf("press\n--------\n-a list all install packages. \n-b list all upgradeable packages. \n-c install package. \n-d uninstall package. \n-e check package install or not. \n-f exit \n >");
        scanf("%c", &c);
        getchar();
        switch(c)
        {
            case 'a':
                LIP();
                break;

            case 'b':
                LUP();
                break;

            case 'c':
                printf("Enter Package name: ");
                scanf("%s", &command);
                getchar();
                ISP(command);
                break;

            case 'd':
                printf("Enter Package name: ");
                scanf("%s", &command);
                getchar();
                UIP(command);
                break;

            case 'e':
                printf("Enter Package name: ");
                scanf("%s", &command);
                getchar();
                che(command);
            break;
        }
    }
    }
    return 0;
}


