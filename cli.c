#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv){
    if(argc < 2){
        printf("Usage: %s <default|extreme>\n", argv[0]);
        return 1;
    }
    int configs = system("ls ~/.config/tlp-switch/configs");
    if(configs > 0) {
        printf("Error: cannot get configs\nPlease copy tlp.conf.default and tlp.conf.extreme into:\n~/.config/tlp-switch/configs");
        system("mkdir ~/.config/tlp-switch");
        return 1;
    }
    if(strcmp(argv[1], "default") == 0){
        system("sudo cp ~/.config/tlp-switch/configs/tlp.conf.default /etc/tlp.conf");
        printf("TLP is started with default settings\n");
        system("sudo tlp start");
    }else if(strcmp(argv[1], "extreme") == 0){
        system("sudo cp ~/.config/tlp-switch/configs/tlp.conf.extreme /etc/tlp.conf");
        printf("TLP is started with extreme settings\n");
        system("sudo tlp start");
   }
    return 0;
    
}