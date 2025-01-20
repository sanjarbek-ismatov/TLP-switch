#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv){
    if(argc < 2){
        printf("Usage: %s <default|extreme>\n", argv[0]);
        return 1;
    }
    if(strcmp(argv[1], "default") == 0){
        system("sudo cp configs/tlp.conf.default /etc/tlp.conf");
        printf("TLP is started with default settings\n");
        system("sudo tlp start");
    }else if(strcmp(argv[1], "extreme") == 0){
        system("sudo cp configs/tlp.conf.extreme /etc/tlp.conf");
        printf("TLP is started with extreme settings\n");
        system("sudo tlp start");
    return 0;
    }
}