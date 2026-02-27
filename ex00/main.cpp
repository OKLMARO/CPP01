/*
Stack :
    L'objet est temporaire et n'a pas besoin de survivre après la fonction
    Tu veux une gestion mémoire automatique (pas de delete nécessaire)
    C'est plus rapide et plus sûr (pas de risque de fuite mémoire)
Heap :
    L'objet doit survivre après la fin de la fonction (tu le retournes)
    Tu ne sais pas à l'avance combien d'objets tu vas créer
    L'objet est très gros (la stack a une taille limitée)
*/