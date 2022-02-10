/**
 *  @file main.c
 *  @date 2022-02-10
 *
 *  @author Tomáš Michalek <tomas.michalek@spsehavirov.cz>
 *  @author 
 *
 */
#include <stdio.h>
#include <stdlib.h>

/** Vypocet obsahu ctverce
 *
 *  Funkce vypočítá obsah čtverce a vrátí ho zpět. Jednoduchá funkce
 *  s jedním argumentem. Výpočet samotný je `strana^2`.
 *
 *  @param strana Strana ctverce
 *  @return obsah ctverce
 */
float obsah_ctverce(float strana) {
  return strana * strana;
}

/** Vypocet obvodu obdelníku
 *
 *  Funkce vypočítá obvod obdelníku a vrátí ho zpět. V této funkci
 *  zadáváme více parametrů, všiměte si tedy syntexe (zápisu) funkce.
 *
 *  @param a 1. strana obdelníku
 *  @param b 2. strana obdelníku
 *  @return obvod obdelníku
 */
float obvod_obdelniku(float a, float b) {
  return 2 * a + 2 * b;

// alternativní zápis:
// return 2 * (a + b);
}

/** Nakresli obdelnik
 *
 *  Funkce také nemusí vracet vůbec nic. A to je případ této funkce.
 *  Veškerou práci odvede funkce samotná (nakreslí obdelník). Po jejím
 *  dokončení tak můžeme pokračovat dál bez toho, abychom výsledek
 *  dále zpracovávali.
 *
 *  @param a 1. strana obdelníku - int protoze jinak pocet `*` nedává smysl
 *  @param b 2. strana obdelníku
 *  @return None - nic nevracíme
 */
void kresli_obdelnik (int a, int b) {
  for (int i = a; i > 0; i--) {
    for (int j = b; j > 0; j--) {
      printf("*");
    }
    printf("\n");
  }
}

/*
 * `Prototyp funkce`, definice jak funkce bude vypada před tím, 
 * než definujeme její tělo. V následující funkci `pause` tuto funci používáme,
 * ale tělo funkce je až za ní. Prototyp umožní aby kompilátor našel funkce
 * ve správném pořadí.
 */
void hlaska(void);

/** Pozastavení běhu programu
 *
 *  V operačním systému Linux ani MacOS neexistuje funkce `pause` a proto
 *  volání `system("pause")` nic neudělá. Pojďme si tedy definovat funkci,
 *  která bude fungovat podobně jako je tomu u právě u výše zmíňované funkce.
 *
 *  Jak jsme si ukázali na hodině, funkce `scanf` čeká, až dostane nějaký vstup
 *  z klávesnice. My použijeme funkci `getchar()`, která na rozdíl od `scanf` načítá
 *  jen jeden znak.
 *
 *  @note Všimněte si, že funkci getchar() zde voláme 2x. Je to proto, že na Windows
 *        nový řádek jsou dva znaky! (Carriage Return - CR, Line Feed - LF). 
 *        Při zmáčknutí klávesy "ENTER" proto dostaneme dva znaky místo jednoho.
 *
 */
void pause(void) {
  hlaska();
  getchar(); // CR
  getchar(); // LF
}

/** Vypis hlasku pro funkci pauza
 *
 *  Jednoduchá funkce pro výpis, které prototyp byl definovaný výše.
 */
void hlaska(void) {
  printf("Pro ukonceni programu, zmacni jakoukoliv klavesu a enter...");
}


/* Zde si muzete zapínat a vypínat jednotlivé příklady v kódu
 *
 * `0` - Funkce se nespustí
 * `1` - Funkce se spustí
 *
 */
#define ZADEJ_DATA      (0) ///! Pokud je volba zapnutá, uživatel zadá data, jinak se načte výchozí hodnota
#define OBVOD_OBDELNIKU (1)
#define OBSAH_CTVERCE   (1)
#define KRESLI_OBDELNIK (1)

int main() {

#if OBVOD_OBDELNIKU
  {
    float a, b, obvod;
  #if ZADEJ_DATA
    printf("Zadejte stranu a: ");
    scanf("%f", &a);
    printf("Zadejte stranu b: ");
    scanf("%f", &b);
  #else
    a = 10;
    b = 5;
  #endif
    obvod = obvod_obdelniku(a, b);
    printf("Obvod obdelnika se stranami (a =%.2f, b = %.2f) je %.2f\n\n", a, b, obvod);
  }
#endif

#if OBSAH_CTVERCE
  {
    float a, obsah;
  #if ZADEJ_DATA
    printf("Zadejte stranu a: ");
    scanf("%f", &a);
  #else
    a = 4;
  #endif
    obsah = obsah_ctverce(a);
    printf("Obsah ctverce se stranami (a = %.2f) je %.2f\n\n", a, obsah);
  }
#endif

#if KRESLI_OBDELNIK
  {
    int a, b;
  #if ZADEJ_DATA
    printf("Zadejte rozmer obdelniku [a b]: ");
    scanf("%f %f", &a, &b);
  #else
    a = 7;
    b = 4;
  #endif
    kresli_obdelnik(a, b);
    printf("\n");
  }
#endif

  pause();
  return EXIT_SUCCESS;
}
