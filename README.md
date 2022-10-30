# sudoku-
Notre réseau sera composé d'une seule couche cachée avec 2 nœuds et un seul nœud de couche de sortie
Pour parcourir les données d'entraînement, j'ai choisi la descente de gradient stochastique (SGD)
Nous calculons le changement de poids (deltaOutput) en calculant la dérivée de l'erreur et en la multipliant par la dérivée de la sortie à ce nœud. Ici, nous utilisons la fonction d'erreur quadratique moyenne (MSE) pour calculer l'erreur
