<p align="center">
  <img 
    src="https://github.com/JorisLne/42-project-badges/blob/main/covers/cover-ft_printf-bonus.png?raw=true" 
    alt="Bannière ft_printf" 
    width="80%">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Score-100%2F100-brightgreen?style=flat-square" alt="Score du projet 125/100" />
  <img src="https://img.shields.io/badge/Langage-C-blue.svg?style=flat-square&logo=c" alt="Langage C" />
</p>

<p align="center">
  <img src="https://github.com/JorisLne/42-project-badges/blob/main/badges/ft_printfm.png?raw=true" alt="Badge printf">
</p>

</p>

<div align="center">
  
# ✍🏻 ft_printf
  
</div>

## ✨ Présentation  
ft_printf est la réimplementation de la fonction printf de la libc. 

## 📋 Structure du projet  
Le dépôt contient les fichiers suivants :

| Fichier               | Rôle                                                     |
| --------------------- | -------------------------------------------------------- |
| **Makefile**          | Compilation, nettoyage et génération de la librairie     |
| **ft_printf.h**       | Déclarations des prototypes et inclusions nécessaires    |
| **ft_printf.c**       | Implémentation de la fonction `ft_printf`                |
| **ft_printf_utils.c** | Fonctions utilitaires : sorties de caractères et nombres |
| **sujet.txt**         | Sujet officiel et consignes du projet                    |

## 🔧 Installation  
- Prérequis :  
  - Compilateur (`cc`)  
  - Flags (`-Wall -Wextra -Werror`)  
- Commandes :  
  ```bash
  git clone <url-du-repo>
  cd libft
  make            # génère .a
  make clean      # supprime les .o
  make fclean     # supprime les .o et la librairie
  make re         # fclean + all
  ```

## 📄 Documentation des fichiers

### 📂 ft_printf_utils.c  
-> Regroupe les fonctions auxiliaires gérant l’affichage et le comptage de caractères :

| Fonction                            | Description                                    |
| ----------------------------------- | ---------------------------------------------- |
| **ft_putchar(char c, int *len)**    | Écrit un caractère, incrémente `len`.          |
| **ft_putstr(char *str, int *len)**  | Écrit une chaîne, affiche `(null)` si `NULL`.  |
| **ft_putnbr(long long n, int *len, int unsign)** | Affiche un entier signé ou non-signé. |
| **ft_hexa(unsigned long long n, int *len, int upper_lower)** | Hexadécimal (minuscule/MAJ). |
| **ft_ptr(unsigned long ptr, int *len)** | Affiche une adresse ou `(nil)` si `0`.    |


### 📂 ft_printf.h  
Header principal contenant :  
- Les includes système (`<stdarg.h>`, `<unistd.h>`, …).  
- Le prototype de `ft_printf` et des utilitaires.

```c
int ft_printf(const char *str, ...);
void ft_putchar(char c, int *count);
void ft_putstr(char *str, int *count);
void ft_which_arg(char c, va_list ap, int *n);
void ft_ptr(unsigned long int ptr, int *count);
void ft_putnbr(long long int n, int *count, int unsign);
void ft_hexa(unsigned long long int n, int *count, int upper_lower);
```

### 📂 ft_printf.c  
Implémentation de `ft_printf` et du dispatch des conversions :

- **ft_which_arg** : détecte le spécificateur (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`) et appelle la fonction adéquate.
- **ft_printf** : parcours la chaîne, affiche caractère par caractère ou traite les conversions.


### 📂 Makefile  
Règles de compilation optimisées :

| Cible      | Description                                    |
| ---------- | ---------------------------------------------- |
| **all**    | Génère la librairie `libftprintf.a`            |
| **clean**  | Supprime les fichiers objets (`.o`)            |
| **fclean** | `clean` + suppression de la librairie          |
| **re**     | Exécute `fclean` puis `all`                    |
