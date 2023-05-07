#include "mbed.h"

InterruptIn JS_up(p15);
InterruptIn JS_down(p16);
InterruptIn JS_left(p17);
InterruptIn JS_right(p18);

Timeout DB;

void print_JS_up() {
    printf("The JS is Up\n");
}

void print_JS_down() {
    printf("The JS is Down\n");
}

void print_JS_left() {
    printf("The JS is Left\n");
}

void print_JS_right() {
    printf("The JS is Right\n");
}

void DB_up() {
    DB.attach(&print_JS_up, 0.2);
}

void DB_down() {
    DB.attach(&print_JS_down, 0.2);
}

void DB_left() {
    DB.attach(&print_JS_left, 0.2);
}

void DB_right() {
    DB.attach(&print_JS_right, 0.2);
}

int main() {
    JS_up.rise(&DB_up);
    JS_down.rise(&DB_down);
    JS_left.rise(&DB_left);
    JS_right.rise(&DB_right);

    while(1) {
         }
}