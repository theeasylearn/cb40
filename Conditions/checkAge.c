// input -> user -> age 
// age -> 18+ 
// age -> greater than 18 -> print "Yes, you can vote "
// age -> less than 18 -> print "No, you cannot vote "

#include <stdio.h>
void main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Yes, you can vote \n");
    }

    if (age < 18) {
        printf("No, you cannot vote \n");
    }
    printf("Good bye ");
}

// age = -121 

// age > 18 -> -121 > 18 -> false 
// age < 18 -> -121 < 18 -> true 
//     print "No, you cannot vote "


// age = 20
// age > 18 -> 20 > 18 -> t 
//     print "Yes, you can vote "
// age < 18 -> 20 < 18 -> f -> code will not execute 

// age = 18 
// age > 18 -> 18 > 18 -> f 
// age < 18 -> 18 < 18 -> f 
// print "Good bye "


// age = 18 
// age >= 18 -> 18 >= 18 -> t 
//     print msg1 
// age <= 18 -> 18 <= 18 -> t 
//     print msg2
// print "Good bye " 