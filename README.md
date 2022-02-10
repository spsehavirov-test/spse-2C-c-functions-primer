# Úvod do funkcí v jazyce C

Kód z hodiny o programování v jazyce C. Ukazovali jsme si funkce a jak je psát:

# Prototyp funkce

Deklarace funkce předchází definici funkce a určuje název,
návratový typ, třídu úložiště a další atributy funkce. 
Aby byla deklarace funkce prototypem, musí také vytvořit typy 
a identifikátory pro argumenty funkce.

Později je budeme používat v hlavičkových souborech (#include "hlavickovy_soubor.h").
Hodí se to k tomu, že nepotřebujeme znát jak to daná funkce dělá, stačí nám
když známe její parametry a název (např. `printf`).

```c
int vypocet(int a, int b);
//NEBO:
int vypocet(int, int);

// ... nekde "nize" v kodu:
int main() {
  int a = vypocet(3, 2); // Pokud nedeklarujeme prototyp předem - kompilér zahlásí chybu
  return 0;
}

int vypocet(int a, int b) {
  return (a * a) - (2 * a * b) + (b * b); //polynomiál (a-b)^2
}
```

# Funkce

Funkce je základní modulární jednotkou jazyka C. Funkce je obvykle navržena k provedení konkrétní úlohy
a její název často odráží tuto úlohu. Funkce obsahuje deklarace a příkazy.

```c
navratovy_typ nazev_funkce(typ_argumentu argument) {
  // telo funkce
}

//NEBO praktický příklad:
int je_vetsi_jak_pet(int a) {
  if (a > 5) {
    return 1;
  } else {
    return 0;
  }
}
```

# Kód
Pokud si chcete rozjet kód v DEV-C++, tak si v něm otevřete soubor `main.c`. Jinak odkaz https://replit.com/join/vyycseikgp-timersonmike by měl stále odkazovat na
funkční REPL.it.

# Kontakt

Pokud máte nějaké dotazy:
  - e-mail: <tomas.michalek@spsehavirov.cz>
  - anonymně: [zaqa.net/michalek](https://zaqa.net/michalek)
  - přes MS Teams: 2.C INF [Micha]
  - osobně na konzultačních hodinách: út 14:05 až 15:00, případně dle domluvy.
