#include <stdlib.h>

int main() {
    // Execute the shell commands
    system("touch /tmp/test1");
    system("mkdir /tmp/usb");
    system("mnt /dev/sdb1 /tmp/usb"); // Assuming you have a 'mnt' command
    system("touch /tmp/usb/test2");

    return 0;
}
