# Module 5 : Les pointeurs en C
## Exercice 1
#### Créer une variable de type char et afficher son contenu, sa taille et son adresse
## Exercice 2
#### Créer une variable d'entier ainsi qu'un pointeur
#### Faire en sorte d'utiliser le pointeur pour faire une saisie utilisateur
#### Afficher le contenu de la saisie utilisateur et l'adresse à laquelle cette information est stockée
## Exercice 3
#### Faire en sorte d'inverser le contenu de ces deux variables en utilisant des pointeurs. Il ne faut pas modifier nom et prenom directment
```
char prenom = 'A', nom = 'Z';

char* p_prenom = &prenom;
char* p_nom = &nom;

printf("Vos initiales %c.%c\n", prenom, nom);

// Inversion

printf("Vos initial %c.%c\n", prenom, nom);
```