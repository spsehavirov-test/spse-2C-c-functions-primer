#include <stdio.h>
#include <stdlib.h>

/**
  Napisme funkci pro vypocet obsahu ctverce
 */
// TADY 
float obsah_ctverce(float strana) {
  return strana * strana;
}

//TADY
/**
  Napisme funkci pro vypocet obvodu obdelniku
 */
float obvod_obdelniku(float a, float b) {
  return 2 * a + 2 * b;
}

/**
 Napis funkci ktera nakresli obdelni pomoci '*'
 */
void kresli_obdelnik (int a, int b) {
  for (int i = a; i > 0; i--) {
    for (int j = b; j > 0; j--) {
      printf("*");
    }
    printf("\n");
  }

}


void hlaska(void);  // Prototyp funkce

void pause(void) {
  hlaska();
  getchar(); // LF
  getchar(); // CR
}

void hlaska(void) {
  printf("Pro ukonceni programu, zmacni jakoukoliv klavesu...\n");
}


int main() {
  //kresli_obdelnik(30, 20);
  printf("Vysledek: %f", obvod_obdelniku(3,3));
#if 0
  float i, obsah;
  printf("zadej stranu: ");
  scanf("%f", &i);
  obsah = obsah_ctverce(i);
  printf("\nHodnota: %f\n", obsah);
  pause();
#endif
  return 0;
}
