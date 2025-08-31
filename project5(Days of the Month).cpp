#include <stdio.h>

int main(void) {
    int month;

    
    printf("Enter month number (1-12): ");
    if (scanf("%d", &month) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (month) {
        
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
        case 12: 
            printf("That month has 31 days.\n");
            break;

        
        case 4:  
        case 6:  
        case 9:  
        case 11: 
            printf("That month has 30 days.\n");
            break;

        
        case 2:
            printf("That month has 28 days.\n");
            break;

        
        default:
            printf("Invalid month number. Please enter 1 through 12.\n");
    }

    return 0;
}
