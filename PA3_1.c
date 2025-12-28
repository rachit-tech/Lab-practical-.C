/* Write C program to print A to Z alphabets in star pattern */

#include <stdio.h>

int main() {
    int r, c;

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

    // =============== B ===============
    printf("\nB:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 ||
               ((r==1 || r==3 || r==5) && c<5) ||
               (c==5 && (r==2 || r==4)))
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

    // =============== F ===============
    printf("\nF:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || r==1 || r==3)
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== G ===============
    printf("\nG:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if((r==1 && c>1) ||
               (c==1 && r>1 && r<5) ||
               (r==5 && c>1) ||
               (c==5 && r>=3))
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

    // =============== J ===============
    printf("\nJ:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(r==1 || c==3 ||
               (r==5 && c<3) ||
               (r>=3 && c==1 && r<5))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== K ===============
    printf("\nK:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || (r+c==4) || (r-c==2))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== L ===============
    printf("\nL:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || r==5)
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== M ===============
    printf("\nM:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || c==5 ||
               (r==2 && (c==2 || c==4)) ||
               (r==3 && c==3))
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

    // =============== O ===============
    printf("\nO:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(((r==1 || r==5) && c>1 && c<5) ||
               ((c==1 || c==5) && r>1 && r<5))
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

    // =============== Q ===============
    printf("\nQ:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(((r==1 || r==5) && c>1 && c<5) ||
               ((c==1 || c==5) && r>1 && r<5) ||
               (r==4 && c==4))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

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

    // =============== T ===============
    printf("\nT:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(r==1 || c==3)
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== U ===============
    printf("\nU:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(((c==1 || c==5) && r<5) ||
               (r==5 && c>1 && c<5))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== V ===============
    printf("\nV:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if((c==1 && r<4) ||
               (c==5 && r<4) ||
               (r==4 && (c==2 || c==4)) ||
               (r==5 && c==3))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== W ===============
    printf("\nW:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(c==1 || c==5 ||
               (r==3 && (c==2 || c==4)) ||
               (r==4 && c==3))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== X ===============
    printf("\nX:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(r==c || (r+c)==6)
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== Y ===============
    printf("\nY:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if((r==c && r<3) ||
               ((r+c)==6 && r<3) ||
               (c==3 && r>=3))
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    // =============== Z ===============
    printf("\nZ:\n");
    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            if(r==1 || r==5 || (r+c)==6)
                printf("*");
            else printf(" ");
        } printf("\n");
    }

    return 0;
}
