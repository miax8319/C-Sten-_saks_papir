//
//  main.c
//  Sten, saks, papir
//
//  Created by Mia Olesen on 06/11/2023.
//

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main(void) {
  srand(time(NULL));
  int mit_valg = 0;
  int spil_igen = 0;

  int vundet = 0;
  int tabte = 0;
  int uafgjordte = 0;

  printf("Velkommen til mit C-Sten, saks, papir!!!\n");
    
    while(spil_igen == 0) {
        
        printf("1: Sten\n");
        printf("2: Saks\n");
        printf("3: Papir\n");
        printf("Valg:");
        
        scanf("%d", & mit_valg);
        
        if (mit_valg < 1 || mit_valg > 3) {
            printf("\nDet kan du ikke, søde\n\n");
            return 1;
        }
        
        int pc_valg = rand() % 3 + 1;
        
        printf("\nMit valg: ");
        switch (mit_valg) {
            case 1:
                printf("Sten\n");
                break;
            case 2:
                printf("Saks\n");
                break;
            case 3:
                printf("Papir\n");
                break;
        }
        printf("PC's valg: ");
        switch (pc_valg) {
            case 1:
                printf("Sten\n");
                break;
            case 2:
                printf("Saks\n");
                break;
            case 3:
                printf("Papir\n");
                break;
        }
        
        if (mit_valg == pc_valg) {
            printf("\nUafgjordt \n");
            uafgjordte ++;
        } else if ((mit_valg == 1 && pc_valg == 2)) {
            printf("\nDu vandt! \n");
            vundet ++;
        } else if ((mit_valg == 2 && pc_valg == 3)) {
            printf("\nDu vandt! \n");
            vundet ++;
        } else if ((mit_valg == 3 && pc_valg == 1)) {
            printf("\nDu vandt! \n");
            vundet ++;
        } else {
            printf("\nDu vandt! Bare ikke lige så meget som PC'en... du tabte... \n");
            tabte ++;
        }
        printf("Spil igen? \n");
        printf("0: Spil igen \n");
        printf("1: Afslut spil \n");
        scanf("%d", &spil_igen);
        
        if (spil_igen == 0) {
            printf("\nSpil igen\n");
        } else {
            printf("\nSpillet afsluttes \n");
            printf("\nMine vundne spil: %d\n", vundet);
            printf("PC'ens vundne spil: %d\n", tabte);
            printf("Uafgjordte spil: %d\n\n", uafgjordte);
        }
    }
}
