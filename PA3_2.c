/* Write a C program to print your name in the star pattern.*/
#include <stdio.h>

int main() {
    int r, c;
    // -----FIRST NAME-----------
     // =============== R ===============
    printf("\nR:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 ||
               ((r==1 || r==3) && c<5) ||
               (c==5 && r==2) ||
               (r-c==2))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== A ===============
    printf("\nA:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if((r==1 && c==3) || 
               (r==2 && (c==2 || c==4)) ||
               (r==3) ||
               (r>=4 && (c==1 || c==5)))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== C ===============
    printf("\nC:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(((r==1 || r==5) && c>1) ||
               (c==1 && r>1 && r<5))
                printf("*");
            else printf(" ");
        } printf("\n");
    }
    // =============== H ===============
    printf("\nH:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || c==5 || r==3)
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== I ===============
    printf("\nI:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(r==1 || r==5 || c==3)
                printf("*");
            else printf(" ");
        } printf("\n");
    }
// =============== T ===============
    printf("\nT:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(r==1 || c==3)
                printf("*");
            else printf(" ");
        } printf("\n");
    }
//---------LAST NAME----------------

// =============== D ===============
    printf("\nD:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 ||
               ((r==1 || r==5) && c<4) ||
               (c==4 && r>1 && r<5))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== E ===============
    printf("\nE:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || r==1 || r==3 || r==5)
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== S ===============
    printf("\nS:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if((r==1 && c>1) ||
               (c==1 && r>1 && r<3) ||
               (r==3 && c>1 && c<5) ||
               (c==5 && r>3 && r<5) ||
               (r==5 && c<5))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== H ===============
    printf("\nH:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || c==5 || r==3)
                printf("*");
            else printf(" ");
        } printf("\n");
    }
    // =============== P ===============
    printf("\nP:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 ||
               ((r==1 || r==3) && c<5) ||
               (c==5 && r==2))
                printf("*");
            else printf(" ");
        } printf("\n");
    }
// =============== A ===============
    printf("\nA:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if((r==1 && c==3) || 
               (r==2 && (c==2 || c==4)) ||
               (r==3) ||
               (r>=4 && (c==1 || c==5)))
                printf("*");
            else printf(" ");
        } printf("\n");
    }
    // =============== N ===============
    printf("\nN:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || c==5 || r==c)
                printf("*");
            else printf(" ");
        } printf("\n");
    }
    // =============== D ===============
    printf("\nD:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 ||
               ((r==1 || r==5) && c<4) ||
               (c==4 && r>1 && r<5))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== E ===============
    printf("\nE:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || r==1 || r==3 || r==5)
                printf("*");
            else printf(" ");
        } printf("\n");
    }
return 0;
}




           