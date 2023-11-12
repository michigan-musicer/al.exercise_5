#include "e5_in_class_practice.h"

// // void shout() {
// //     printf("SLOW DOWN!!!!!");
// // }

// // void shoutCareful() {
// //     printf("CAREFUL!!!");
// // }

// // void shoutGoAway() {
// //     printf("GO AWAY!!!!");
// // }

// // void shoutOhNo() {
// //     printf("OH NO!!!");
// // }

// // }

// // void shoutHi() {
// //     printf("HI\n");
// // }

// // void shoutPotato() {
// //     printf("POTATO\n");
// // }

// // void shoutGamer() {
// //     printf("GAMER\n");
// // }

// void bar() {
//     printf("bar before\n");
//     printf("bar after\n");
// }

// void foo() {
//     printf("foo before\n");
//     bar();
//     printf("foo after\n");
// }

// int main() {
//     printf("main before\n");
//     foo();
//     printf("main after\n");
// }




// void shout(char * str) {
//     printf("%s\n", str);
// }

// int main() {
//     shout("SLOW DOWN!!!");
//     shout("CAREFUL!!!");
//     shout("GO AWAY!!!");
//     shout("oh no");
// }

// // // int main() {
// // //     shout("FUS RO DAH"); // will print "FUS RO DAH" to terminal
// // // }

// int add(int a, int b) {
//     return a + b;
// }

// // // int stuffAfterReturn() {
// // //     return 1;
// // //     printf("This is after return\n");
// // }


// // if time, demonstrate what happens if x = 2147483647 (MAX_INT)
void countDown(int x) {
    if (x == 0) {
        printf("Blast off!\n");
        return;
    }
    else {
        printf("%d...", x);
        countDown(x - 1);
    }
}

int main() {
    countDown(5); // will count down from 5 to 1, then blast off
}

// // int main() {
// //     printf("%d\n", add(2, 3)); // prints 5
// //     printf("%d\n", add(75, 25)); // prints 100
// //     printf("%d\n", add(33, 43)); // prints 76
// //     printf("%d\n", add(-70, 114)); // prints 44
// // }

// // void scratch() {










// // }

// // int main() {
// //     printf("hello!\n");
// //     call_some_function();
// // }
