# sudoku-
Mini réseau XOR pour le premiere soutenance : 
Notre réseau sera composé d'une seule couche cachée avec 2 nœuds et un seul nœud de couche de sortie
Pour parcourir les données d'entraînement, j'ai choisi la descente de gradient stochastique (SGD)
Nous calculons le changement de poids (deltaOutput) en calculant la dérivée de l'erreur et en la multipliant par la dérivée de la sortie à ce nœud. Ici, nous utilisons la fonction d'erreur quadratique moyenne (MSE) pour calculer l'erreur


Réseau complet pour le seconde soutenance : 
Dans le dossier trang_projetS3 , utiliser le fichier main.c pour prédire l'image que vous voulez . J'ai commenté deux partie dans le fichier main.c : une pour entraînement , une pour prédiction. 
Si vous voulez prédire une image, exécutez les lignes suivantes : 
  srand(time(NULL));
  int number_imgs = 3000;
	Image** imgs = csv_to_imgs("data/mnist_test.csv", number_imgs);
	NeuralNetwork* net = network_load("testing_net");
	Matrix* res = network_predict_img(net,imgs[0]);
	printf("Network Predicted %d", matrix_argmax(res));
  imgs_free(imgs, number_imgs);
  network_free(net);
  return 0;



