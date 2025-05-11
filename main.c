#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv){
    if(argc < 2){
        printf("Usage: %s <performance|balanced|extreme|extreme-hybrid>\n", argv[0]);
        return 1;
    }
    if(strcmp(argv[1], "balanced") == 0){
        system("sudo cp /usr/share/tlp-switch/configs/tlp.balanced.conf /etc/tlp.conf");
        printf("TLP is started with balanced settings\n");
        system("sudo tlp start");
    }else if(strcmp(argv[1], "extreme") == 0){
        system("sudo cp /usr/share/tlp-switch/configs/tlp.extreme.conf /etc/tlp.conf");
        printf("TLP is started with extreme settings\n");
        system("sudo tlp start");
   }else if(strcmp(argv[1], "performance") == 0){
        system("sudo cp /usr/share/tlp-switch/configs/tlp.performance.conf /etc/tlp.conf");
        printf("TLP is started with performance settings\n");
        system("sudo tlp start");
   }else if(strcmp(argv[1], "extreme-hybrid") == 0){
        system("sudo cp /usr/share/tlp-switch/configs/tlp.extreme-hybrid.conf /etc/tlp.conf");
        printf("TLP is started with extreme-hybrid settings\n");
        system("sudo tlp start");
   }
    return 0;
    
}