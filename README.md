### PRINTF

| Nom du programme                  | libftprintf.a                                          |
| :--------------------------------:| :----------------------------------------------------: |
| Fichiers de rendu                 | *.c, */*.c, *.h, */*.h, Makefile                       |
| :--------------------------------:| :----------------------------------------------------: |
| Makefile                          | all, clean, fclean, re, bonus                          |
| :--------------------------------:| :----------------------------------------------------: |
| Fonctions ex- ternes autorisées   | malloc, free, write, va_start, va_arg, va_copy, va_end |
| :--------------------------------:| :----------------------------------------------------: |
| Libft autorisée                   | yes                                                    |
| :--------------------------------:| :----------------------------------------------------: |
## Description

Une librairie qui contient ft_printf, une fonction qui marche comme le vrai printf

• Le prototype de ft_printf devra être int ft_printf(const char *, ...);
• Vous devez recoder la fonction printf de la libc
• Vous ne devez pas gérer de buffer, contrairement au vrai printf
• Vous devez gérer les conversions suivantes : cspdiuxX%
• Votre rendu sera comparé au vrai printf
• Vous devez utiliser la commande ar pour créer votre librairie, l’utilisation de la commande libtool est interdite

Une petite description des conversions requises : • %c imprime un seul caractère.

• %s imprime une chaîne de caractères.
• %p L’argument de pointeur void * est imprimé en hexadécimal. • %d imprime un nombre décimal (base 10).
• %i imprime un entier en base 10.
• %u imprime un nombre décimal non signé (base 10).
• %x imprime un nombre en hexadécimal (base 16).
• %% imprime un signe de pourcentage..

## Bonus 

• Gérer toute combinaison des drapeaux suivants : ’-0.’ et la largeur minimale du champ avec toutes les conversions.
• Gérez tous les flags suivants : ’# +’ (oui espace est un flag valide)